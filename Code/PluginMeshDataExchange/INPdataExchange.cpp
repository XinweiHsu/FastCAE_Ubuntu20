#include "INPdataExchange.h"
#include "mainWindow/mainWindow.h"
#include "meshData/meshSingleton.h"
#include "meshData/meshKernal.h"
#include "meshData/meshSet.h"
#include "BCBase/BCUserDef.h"
#include "ModelData/modelDataSingleton.h"
#include "ModelData/ModelDataBaseExtend.h"
#include "DataProperty/ParameterGroup.h"
#include "DataProperty/ParameterDouble.h"
#include "Material/Material.h"
#include "ConfigOptions/ConfigOptions.h"
#include "ConfigOptions/MaterialConfig.h"
#include "Material/MaterialFactory.h"
#include "Material/MaterialSingletion.h"
#include <vtkUnstructuredGrid.h>
#include <QFileInfo>
#include <QMessageBox>
#include <qDebug>
#include <omp.h>

namespace MeshData
{
	INPdataExchange::INPdataExchange(const QString &fileName, MeshOperation operation, GUI::MainWindow *mw, int modelId, int writeFileKid) :
		MeshThreadBase(fileName, operation, mw),
		_fileName(fileName),
		_meshData(MeshData::getInstance()),
		_operation(operation),
		_writeFileKid(writeFileKid),
		_modelId(modelId),
		_mw(mw)
	{

	}
	INPdataExchange::~INPdataExchange()
	{
		if (_stream != nullptr) delete _stream;
	}

// 	void INPdataExchange::destroyThread()
// 	{
// 		ThreadTask::destroyThread();
// 		if (_stream != nullptr) delete _stream;
// 	}

	void INPdataExchange::readLine(QString &line)
	{
		while (_threadRuning && !_stream->atEnd())
		{
			//xuxinwie  20200519
// 			if (_stream->atEnd())
// 			{
// 				//_threadRuning = false;
// 				break;
// 			}

			line = _stream->readLine().simplified().toLower();
			if (line.startsWith("**") && line.size() == 2) continue;
			break;
		}
	}

	bool INPdataExchange::read()
	{
		QFileInfo info(_fileName);
		if (!info.exists()) return false;
		QString name = info.fileName();
		QString path = info.filePath();
		QFile file(_fileName);
		if (!file.open(QIODevice::ReadOnly)) return false;
		_stream = new QTextStream(&file);
		vtkSmartPointer<vtkUnstructuredGrid> dataset = vtkSmartPointer<vtkUnstructuredGrid>::New();
		QString line;
	
		do
		{
			if (!_threadRuning) return false;
			this->readLine(line);
			if (line.startsWith("*node") && line.size()<6)
			{
				if (!readNodes(dataset, line))
				{
					dataset->Delete();
					return false;
				}
			}
			if (line.startsWith("*element"))
			{
				if (!readElements(dataset, line))
				{
					dataset->Delete();
					return false;
				}

				if (dataset != nullptr)
				{
					MeshKernal* k = new MeshKernal;
					k->setName(name);
					k->setPath(path);
					k->setMeshData((vtkDataSet*)dataset);
					_meshData->appendMeshKernal(k);
				}
			}
			if (line.startsWith("*nset"))
			{
				this->readNSet(line);
			}
			if (line.startsWith("*elset"))
			{
				this->readElSet(line);
			}

			//xuxinwie  20200519
			//if (_stream->atEnd())
			//	_threadRuning = false;
			if (line.startsWith("*material"))
				readMaterial(line);
			if (line.startsWith("** boundary"))
				readBoundary(line);

		} while (_threadRuning && !_stream->atEnd());		

		if (_modelId != -1)
		{	
			addINPComponents();
			addINPMaterials();
			addINPBCs();
			emit _mw->updatePhysicsTreeSignal();
		}
		clearString();
		return true;
	}

	bool INPdataExchange::write()
	{
		if (_writeFileKid < 1)	return false;
	}

	bool INPdataExchange::readNodes(vtkUnstructuredGrid* g, QString &line)
	{
		vtkSmartPointer<vtkPoints> points = vtkSmartPointer<vtkPoints>::New();
		bool ok = false;
		int index = 0;
		while (_threadRuning && !_stream->atEnd())
		{
			if (!_threadRuning) return false;
			readLine(line);
			if (line.contains("*")) break;

			double coor[3] = { 0 };
			QStringList scoor = line.split(",");
			if (scoor.size() != 4) continue;
			for (int j = 0; j < 3; ++j)
			{
				coor[j] = scoor.at(j + 1).toDouble(&ok);
				if (!ok) return false;
			}

			points->InsertNextPoint(coor);
			int id = scoor.at(0).toInt(&ok);
			if (ok) _nodeIDIndex[id] = index;
			index++;


			//xuxinwie  20200519
// 			if (_stream->atEnd())
// 				_threadRuning = false;
		}

		if (points->GetNumberOfPoints() > 2)
		{
			g->SetPoints(points);
			return true;
		}
		return false;
	}

	bool INPdataExchange::readElements(vtkUnstructuredGrid* g, QString &line)
	{
		QStringList stype = line.split(",");
		//if (stype.size() != 2) return false;
		QString st = stype.at(1);
		st.remove("type=").remove(" ").simplified();
		VTKCellType tp = VTK_EMPTY_CELL;
//		qDebug() << st;
		if (st == "c3d4")
		{
			tp = VTK_TETRA;
		}

		if (tp == VTK_EMPTY_CELL) return false;

		bool ok = false;
		int index = 0;

		while (_threadRuning && !_stream->atEnd())
		{
			if (!_threadRuning) return false;
			this->readLine(line);
			if (line.startsWith("*")) break;
			vtkSmartPointer<vtkIdList> indexList = vtkSmartPointer<vtkIdList>::New();

			QStringList sids = line.split(",");
			for (int j = 1; j < sids.size(); ++j)
			{
				int nodeid = sids.at(j).toInt(&ok);
				assert(ok);
				int nodeindex = _nodeIDIndex.value(nodeid);
				indexList->InsertNextId(nodeindex);
			}
			
			g->InsertNextCell(tp, indexList);
			int eleID = sids.at(0).toInt(&ok);
			_elemIDIndex[eleID] = index;
			index++;


			//xuxinwie  20200519
// 			if (_stream->atEnd())
// 				_threadRuning = false;
		}
		return true;		
	}

	bool INPdataExchange::readNSet(QString &line)
	{
		bool isgen = false;
		if (line.contains("generate")) isgen = true;

		QStringList sinfo = line.split(",");
		QString name = sinfo.at(1).simplified();
		name.remove("nset=");

		if (isgen)
			name = name + "_gen";
		
		MeshSet* set = new MeshSet(name, Node);
		const int c = _meshData->getKernalCount();
		if (c <= 0)return false;
		MeshKernal* k = _meshData->getKernalAt(c - 1);
		if (k == nullptr) return false;
// 		vtkDataSet* dataset = k->getMeshData();
// 		set->setDataSet(dataset);
		const int kid = k->getID();
		
//		vtkSmartPointer<vtkIdTypeArray> array = vtkSmartPointer<vtkIdTypeArray>::New();
		while (_threadRuning && !_stream->atEnd())
		{
			if (!_threadRuning) return false;
			this->readLine(line);
			if (line.startsWith("*"))
			{
//				set->setIDList(array);
				_meshData->appendMeshSet(set);
				_setIds.append(set->getID());
			}
			if (line.startsWith("*nset"))
			{
				this->readNSet(line);
			}
			if (line.startsWith("*elset"))
			{
				this->readElSet(line);
			}
			if (line.startsWith("*") && (!line.startsWith("*nset")))
				return true;
			
			QStringList sid = line.split(",");
			if (isgen)
			{
				int beg = sid.at(0).toInt();
				int end = sid.at(1).toInt();
				for (int i = beg; i <= end; ++i)
				{
					if (!_nodeIDIndex.contains(i)) continue;
					int index = _nodeIDIndex.value(i);
//					array->InsertNextValue(index);
					set->appendMember(kid, index);
				}
				continue;
			}

			for (int i = 0; i < sid.size(); ++i)
			{
				int id = sid.at(i).toInt();
				int index = _nodeIDIndex.value(id);
//				array->InsertNextValue(index);
				set->appendMember(kid, index);
			}

			//xuxinwie  20200519
// 			if (_stream->atEnd())
// 				_threadRuning = false;
		}
	}

	bool INPdataExchange::readElSet(QString &line)
	{
		bool isgen = false;
		if (line.contains("generate")) isgen = true;

		QStringList sinfo = line.split(",");
		QString name = sinfo.at(1).simplified();
		name.remove("elset=");

		if (isgen)
			name = name + "_gen";

		MeshSet* set = new MeshSet(name, Element);
		const int c = _meshData->getKernalCount();
		if (c <= 0)return false;
		MeshKernal* k = _meshData->getKernalAt(c - 1);
		if (k == nullptr) return false;
//		vtkDataSet* dataset = k->getMeshData();
//		set->setDataSet(dataset);
		const int kid = k->getID();

//		vtkSmartPointer<vtkIdTypeArray> array = vtkSmartPointer<vtkIdTypeArray>::New();
		while (_threadRuning && !_stream->atEnd())
		{
			if (!_threadRuning) return false;
			this->readLine(line);
			if (line.startsWith("*"))
			{
//				set->setIDList(array);
				_meshData->appendMeshSet(set);
				_setIds.append(set->getID());
			}
			if (line.startsWith("*elset"))
			{
				this->readElSet(line);
			}
			if (line.startsWith("*nset"))
			{
				this->readNSet(line);
			}
			if (line.startsWith("*") && (!line.startsWith("*elset")))
				return true;

			QStringList sid = line.split(",");
			if (isgen)
			{
				int beg = sid.at(0).toInt();
				int end = sid.at(1).toInt();
				for (int i = beg; i <= end; ++i)
				{
					if (!_elemIDIndex.contains(i)) continue;
					int index = _elemIDIndex.value(i);
//					array->InsertNextValue(index);
					set->appendMember(kid, index);
				}
				continue;
			}

			for (int i = 0; i < sid.size(); ++i)
			{
				int id = sid.at(i).toInt();
				int index = _elemIDIndex.value(id);
//				array->InsertNextValue(index);
				set->appendMember(kid, index);
			}

			//xuxinwie  20200519
// 			if (_stream->atEnd())
// 				_threadRuning = false;
		}
	}

	bool INPdataExchange::readMaterial(QString &line)
	{
		if (line.contains("** boundary"))
			return true;
		_materialName.append(line.split('=').at(1));
		while (_threadRuning && !_stream->atEnd())
		{
			if (!_threadRuning) return false;
			readLine(line);
			readLine(line);
			_density.append(line.left(line.size() - 1));
			readLine(line);
			readLine(line);
			if (line.contains(".,"))
				_elastic.append(line.remove(".,"));
			else
				_elastic.append(line.remove(','));

			readLine(line);
			if (line.startsWith("*material"))
				readMaterial(line);
			if (line.contains("** boundary"))
				return true;
		}
		return false;
	}

	bool INPdataExchange::readBoundary(QString &line)
	{
		if (line.startsWith("** output"))
			return true;

		QStringList lineList;
		while (_threadRuning && !_stream->atEnd())
		{
			if (!_threadRuning) return false;
			QString bcName, bcType;

			if (!line.startsWith("** name"))
			{
				readLine(line);
				continue;
			}
			else
			{
				lineList = line.split(' ');
				bcName = lineList.at(2);
				bcType = lineList.at(4);
				readLine(line);
			}
			
			_bcName.append(bcName);
			_bcType.append(bcType);

			QStringList lineList;
			for (int i = 0; i < 6; i++)
			{
				readLine(line);
				lineList = line.split(',');

				auto set = _meshData->getMeshSetByName(lineList.at(0));
				if (!set)	continue;
				_bcSetIds.append(QString::number(set->getID()));

				if ((i == 0 || i == 1 || i == 2) && lineList.size() == 3)
					_displacement << 0;
				else if ((i == 0 || i == 1 || i == 2) && lineList.size() == 4)
					_displacement << lineList.at(3).toDouble();
				else if ((i == 3 || i == 4 || i == 5) && lineList.size() == 3)
					_rotation << 0;
				else if ((i == 3 || i == 4 || i == 5) && lineList.size() == 4)
					_rotation << lineList.at(3).toDouble();
			}
			_bcSetIds.removeDuplicates();

			readLine(line);
			if (line.startsWith("** name"))
				readBoundary(line);
			if (line.startsWith("** output"))
				return true;
		}
		return false;
	}

	void INPdataExchange::addINPComponents()
	{
		ModelData::ModelDataBase* model = ModelData::ModelDataSingleton::getinstance()->getModelByID(_modelId);
		if (model == nullptr) return;
		model->setComponentIDList(_setIds);
	}

	void INPdataExchange::addINPMaterials()
	{
		QString stype = QObject::tr("INP Material");
#pragma omp parallel for firstprivate(stype)
		for (int i = 0; i < _materialName.size(); i++)
		{
			// 			qDebug() << stype;
			// 			qDebug() << omp_get_thread_num();
			// 			qDebug() << _materialName;

			Material::Material* material = nullptr;
			auto ma = ConfigOption::ConfigOption::getInstance()->getMaterialConfig()->getMaterialByType(stype);
			if (ma != nullptr)
			{
				material = new Material::Material;
				material->copy(ma);
			}
			else
				material = Material::MaterialFactory::createMaterial(stype);

			if (material == nullptr)
			{
				QMessageBox::warning(NULL, QObject::tr("Warning"), QObject::tr("Material create failed!"));
				return;
			}

			QStringList elasticList = _elastic.at(i).split(" ");
			material->setName(_materialName.at(i));
			material->appendProperty(QObject::tr("Density"), _density.at(i));
			material->appendProperty(QObject::tr("Elasticity Modulus"), QString(elasticList.at(0)));
			material->appendProperty(QObject::tr("Poisson Ratio"), QString(elasticList.at(1)));
			Material::MaterialSingleton::getInstance()->appendMaterial(material);
		}
	}

	void INPdataExchange::addINPBCs()
	{
		auto model = ModelData::ModelDataSingleton::getinstance()->getModelByID(_modelId);
		ModelData::ModelDataBaseExtend *data = dynamic_cast<ModelData::ModelDataBaseExtend*>(model);
		QStringList paraDescribes;
		paraDescribes << "X" << "Y" << "Z";

		for(int i = 0; i < _bcSetIds.size(); i++)
		{
			BCBase::BCUserDef* bc = new BCBase::BCUserDef;
			bc->bingdingComponentID(_bcSetIds.at(i).toInt());
			bc->setName(_bcName.at(i));
			data->appeendBC(bc);
			
			QString qdis, qrot;
			DataProperty::ParameterGroup* displacement = new DataProperty::ParameterGroup;
			DataProperty::ParameterGroup* rotation = new DataProperty::ParameterGroup;
			displacement->setDescribe(_bcType.at(i).split('/').at(0));
			rotation->setDescribe(_bcType.at(i).split('/').at(1));

			for (int j = 0; j < 3; j++)
			{
				qdis = QString("Displacement%1").arg(paraDescribes.at(j));
				qrot = QString("Rotation%1").arg(paraDescribes.at(j));

				auto dispara = new DataProperty::ParameterDouble;
				auto rotpara = new DataProperty::ParameterDouble;

				dispara->setDataID(_modelId);
				rotpara->setDataID(_modelId);

				dispara->setDescribe(qdis);
				rotpara->setDescribe(qrot);

				dispara->setValue(_displacement.at(3 * i + j));
				rotpara->setValue(_rotation.at(3 * i + j));

				displacement->appendParameter(dispara);
				rotation->appendParameter(rotpara);
			}

			bc->appendParameterGroup(displacement);
			bc->appendParameterGroup(rotation);
			bc->generateParaInfo();
		}
	}

	void INPdataExchange::clearString()
	{
		_setIds.clear();
		_materialName.clear();
		_density.clear();
		_elastic.clear();
		_bcSetIds.clear();
		_bcName.clear();
		_bcType.clear();
		_displacement.clear();
		_rotation.clear();
	}

	void INPdataExchange::run()
	{		
		ModuleBase::ThreadTask::run();
		bool result = false;
		switch (_operation)
		{
		case MESH_READ:
			emit showInformation(tr("Importing INP Mesh File From \"%1\"").arg(_fileName));
			result = read();
			setReadResult(result);
			break;
		case MESH_WRITE:
			emit showInformation(tr("Exporting INP Mesh File To \"%1\"").arg(_fileName));
//			result = write();
//			setWriteResult(result);
			break;
		}
		defaultMeshFinished();
	}
}