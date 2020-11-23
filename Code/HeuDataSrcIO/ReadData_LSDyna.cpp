#include "ReadData_LSDyna.h"
#include <vtkSmartPointer.h>
#include <vtkTecplotReader.h>
#include <vtkMultiBlockDataSet.h>
#include <vtkAppendFilter.h>
#include <vtkUnstructuredGrid.h>
#include <vtkPointData.h>
#include <vtkCellData.h>
#include <vtkFloatArray.h>
#include <vtkPointData.h>
#include <vtkDataArray.h>
#include <QRegExp>
#include <vtkUnstructuredGrid.h>
#include <vtkLine.h>
#include <vtkCellArray.h>

bool ReadData_LSDyna::Read(QString tep_filename)
{
	TecPreProcessing(tep_filename);
	reader = vtkLSDynaReader::New();
	qDebug() << tep_filename;
	//中文路径
	char * fileNamechar;
	QByteArray ba = QStringToChar(tep_filename);//.replace(QString("EX2.k"), "")
	fileNamechar = ba.data();

	reader->SetDatabaseDirectory(fileNamechar);
	reader->Update();

	//reader->SetFileName(fileNamechar);
	//中文路径
	//reader->SetFileName(tep_filename.toLatin1().data());
	reader->Update();
	mudataset = reader->GetOutput();

	blockDataSet = mudataset;//add for multi zone test
	const int nblock = mudataset->GetNumberOfBlocks();
	if (nblock > 0)
	{
		blockDataSet = mudataset;//add for multi zone test


		//tecPostProcessing();
		readZone(tep_filename);
		return true;
	}
	/*else return read1(tep_filename);*/

}

ReadData_LSDyna::~ReadData_LSDyna()
{
	if (reader != NULL)
	{
		reader->Delete();
		reader = NULL;
	}
	/*if (mudataset != NULL)
	{
	mudataset->Delete();
	mudataset = NULL;
	}*/
}
////////////////////////////////////////////////
void ReadData_LSDyna::TecPreProcessing(QString fileName)
{
	QStringList strAll;
	//  QStringList strList;
	QFile readFile(fileName);
	if (!readFile.exists()) return;

	if (readFile.open((QIODevice::ReadOnly | QIODevice::Text)))
	{
		QTextStream stream(&readFile);
		while (!stream.atEnd())
		{
			QString line = stream.readLine();
			strAll.append(line);
		}
	}
	readFile.close();

	QFile writeFile(fileName);
	if (writeFile.open(QIODevice::WriteOnly | QIODevice::Text))
	{
		QTextStream stream(&writeFile);
		//    strList = strAll.split(" ");
		for (int i = 0; i < strAll.count(); i++)
		{
			QString s = strAll.at(i);
			//s.replace(QRegExp("STRANDID.*"), "");
			//s.replace(QRegExp("SOLUTIONTIME.*"), "");
			//s.replace(QRegExp("Nodes"), "N");
			//s.replace(QRegExp("Elements"), "E");
			s.replace(QRegExp("variables"), "VARIABLES");
			s.replace(QRegExp(" zone "), " ZONE ");
			s.replace(QRegExp(" n="), " N=");
			s.replace(QRegExp(" e="), " E=");
			s.replace(QRegExp("datapacking=point"), "F=FEPOINT");
			s.replace(QRegExp("zonetype=fequadrilateral"), "ET=QUADRILATERAL");
			s.replace(QRegExp("zonetype=febrick"), "ET=BRICK");
			//s.replace(QRegExp("FEBrick"), "BRICK");
			//s.replace(QRegExp("DATAPACKING=BLOCK"), "F=FEBLOCK");
			//s.replace(QRegExp("AUXDATA.*"), "");
			//s.replace(QRegExp("Common.*"), "");
			//s.replace(QRegExp("PARENTZONE.*"), "");
			// 111111111111111111111111111111111111111111111111111111111111111111111111111111111
			s.replace(QRegExp("DATAPACKING=POINT"), "F=FEPOINT");
			s.replace(QRegExp("ZONETYPE=FEQUADRILATERAL"), "ET=QUADRILATERAL");
			s.replace(QRegExp("T=\"UNDEFORMED\""), " ");
			//stream << " " << s;
			stream << s << "\n";
		}
	}
	writeFile.close();
}
/////////////////////////////////////////////////
/*void ReadData_Tecplot::TecPreProcessing(QString fileName)
{
QStringList strAll;
//	QStringList strList;
QFile readFile(fileName);
if (!readFile.exists()) return;

if (readFile.open((QIODevice::ReadOnly | QIODevice::Text)))
{
QTextStream stream(&readFile);
while (!stream.atEnd())
{
QString line = stream.readLine();
strAll.append(line);
}
}
readFile.close();

QFile writeFile(fileName);
if (writeFile.open(QIODevice::WriteOnly | QIODevice::Text))
{
QTextStream stream(&writeFile);
//		strList = strAll.split(" ");
for (int i = 0; i < strAll.count(); i++)
{
QString s = strAll.at(i);
s.replace(QRegExp("STRANDID.*"), "");
s.replace(QRegExp("SOLUTIONTIME.*"), "");
s.replace(QRegExp("Nodes"), "N");
s.replace(QRegExp("Elements"), "E");
s.replace(QRegExp("ZONETYPE"), "ET");
s.replace(QRegExp("FEBrick"), "BRICK");
s.replace(QRegExp("FEQuadrilateral"), "QUADRILATERAL");
s.replace(QRegExp("DATAPACKING=BLOCK"), "F=FEBLOCK");
s.replace(QRegExp("AUXDATA.*"), "");
s.replace(QRegExp("Common.*"), "");
s.replace(QRegExp("PARENTZONE.*"), "");
stream << s;
}
}
writeFile.close();
}*/

void ReadData_LSDyna::tecPostProcessing()
{
	if (blockDataSet == nullptr) return;
	const int n = blockDataSet->GetNumberOfBlocks();
	for (int i = 0; i < n; ++i)
	{
		vtkDataSet* dataset = vtkDataSet::SafeDownCast(mudataset->GetBlock(i));
		processingDataSet(dataset);
	}
}
bool ReadData_LSDyna::isVectorComponent(QString name, QString& vecName, QString& comp)
{
	QRegExp pattern("\\s*_x$|\\s*_X$|\\s*_y$|\\s*_Y$|\\s*_z$|\\s*_Z$");
	bool is = false;
	is = name.contains(pattern);
	if (is)
	{
		QStringList sl = name.split("_");
		vecName = sl.at(0);
		comp = sl.at(1).toLower();
	}
	return is;
}

void ReadData_LSDyna::processingDataSet(vtkDataSet* dateset)
{
	if (dateset == nullptr) return;
	vtkPointData* pointdata = dateset->GetPointData();

	const int n = pointdata->GetNumberOfArrays();
	QHash<QString, QVector<QString>> VectorNames{};
	for (int i = 0; i < n; ++i)
	{
		vtkFloatArray* currentarray = vtkFloatArray::SafeDownCast(pointdata->GetArray(i));
		if (currentarray == nullptr) continue;
		QString arrname = QString(currentarray->GetName());
		QString vecName, comp;
		bool isvec = isVectorComponent(arrname, vecName, comp);

		if (isvec)
		{
			QByteArray ba = vecName.toLatin1();
			vtkDataArray* vecarray = pointdata->GetArray(ba.data());
			if (vecarray == nullptr)
			{
				vecarray = vtkFloatArray::New();
				vecarray->SetName(ba.data());
				vecarray->SetNumberOfComponents(3);
				pointdata->AddArray(vecarray);
			}
			if (!VectorNames.contains(vecName))
			{
				VectorNames[vecName].resize(3);
			}
			if (comp == "x")
				VectorNames[vecName][0] = arrname;
			else if (comp == "y")
				VectorNames[vecName][1] = arrname;
			else if (comp == "z")
				VectorNames[vecName][2] = arrname;
		}
	}
	QStringList vecs = VectorNames.keys();
	for (int i = 0; i < vecs.size(); ++i)
	{
		QString k = vecs.at(i);
		QByteArray bk = k.toLatin1();
		QByteArray comx = VectorNames[k][0].toLatin1();
		QByteArray comy = VectorNames[k][1].toLatin1();
		QByteArray comz = VectorNames[k][2].toLatin1();

		vtkDataArray* vec = pointdata->GetArray(bk.data());
		vtkFloatArray* compx = vtkFloatArray::SafeDownCast(pointdata->GetArray(comx.data()));
		vtkFloatArray* compy = vtkFloatArray::SafeDownCast(pointdata->GetArray(comy.data()));
		vtkFloatArray* compz = vtkFloatArray::SafeDownCast(pointdata->GetArray(comz.data()));

		const int n = compx->GetNumberOfValues();
		for (int j = 0; j < n; ++j)
		{
			double d[3] = { 0.0 };
			if (compx != nullptr) d[0] = compx->GetValue(j);
			if (compy != nullptr) d[1] = compy->GetValue(j);
			if (compz != nullptr) d[2] = compz->GetValue(j);
			vec->InsertNextTuple3(d[0], d[1], d[2]);
		}
	}

}

QString ReadData_LSDyna::readline()
{
	QString line;
	while (!_textStream->atEnd())
	{
		line = _textStream->readLine().simplified();
		if (line.isEmpty()) continue;
		break;
	}
	return line;
}

bool ReadData_LSDyna::read1(QString fileName)
{
	QFile file(fileName);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return false;
	_textStream = new QTextStream;
	_textStream->setDevice(&file);
	QString line;
	while (!_textStream->atEnd())
	{
		line = readline();
		if (line.toLower().startsWith("zone"))
		{
			this->readZone(line);
		}

	}
	delete _textStream;
	file.close();
	return true;
}

void ReadData_LSDyna::readZone(QString head)
{
	//
	bool findFlag = false;
	vtkUnstructuredGrid* shell = (vtkUnstructuredGrid*)0;

	//vtkDataSet* dataset = vtkDataSet::SafeDownCast(mudataset->GetBlock(i));

	/*vtkMultiBlockDataSet* mbds = vtkMultiBlockDataSet::SafeDownCast(reader->GetOutput());*/
	int count = mudataset->GetNumberOfBlocks();
	for (int k = 0; k < count; ++k)
	{
		//if (findFlag)
		//	break;

		int type2 = mudataset->GetBlock(k)->GetDataObjectType();
		if (type2 == VTK_UNSTRUCTURED_GRID)
		{
			shell = vtkUnstructuredGrid::SafeDownCast(mudataset->GetBlock(k));
			if (shell->GetNumberOfCells() > 0)
			{
				findFlag = true;
				/*break;*/
			}
			else
				shell = (vtkUnstructuredGrid*)0;
		}

		if (shell)
		{
			vtkCellData* cellDa = shell->GetCellData();
			int hh = cellDa->GetNumberOfArrays();
			for (int k = 0; k < cellDa->GetNumberOfArrays(); ++k)
			{
				const char* name = cellDa->GetArrayName(k);
				vtkDataArray* dataArray = cellDa->GetArray(cellDa->GetArrayName(k));
				for (int cellId = 0; cellId < dataArray->GetNumberOfTuples(); ++cellId)
					for (int compId = 0; compId < dataArray->GetNumberOfComponents(); ++compId)
						double value = dataArray->GetComponent(cellId, compId);
			}
		}

		if (shell)
		{
			int cellNum = shell->GetNumberOfCells();
			for (int k = 0; k < cellNum; ++k)
			{
				vtkCell* cell = shell->GetCell(k);
				int pointNum = cell->GetNumberOfPoints();
				vtkPoints* points;
				for (int kk = 0; kk < pointNum; ++kk)
				{
					points = cell->GetPoints();
					int numP = points->GetNumberOfPoints();
					double coordXYZ[3];
					for (int kkk = 0; kkk < numP; ++kkk)
					{
						points->GetPoint(kkk, coordXYZ);
					}
				}

				vtkUnstructuredGrid *grid = vtkUnstructuredGrid::New();
				vtkCellArray* cells = vtkCellArray::New();
				grid->SetPoints(points);
				for (int i = 0; i < pointNum - 1; ++i)
				{
					vtkLine* cell = vtkLine::New();
					cell->GetPointIds()->SetId(0, i);
					cell->GetPointIds()->SetId(1, i + 1);
					cells->InsertNextCell(cell);
				}
				grid->SetCells(VTK_LINE, cells);
				blockDataSet->SetBlock(_zoneNO, grid);
				_zoneNO++;
			}
		}
		continue;


		int type1 = mudataset->GetBlock(k)->GetDataObjectType();
		if (type1 == VTK_MULTIBLOCK_DATA_SET)
		{
			vtkMultiBlockDataSet* dataSet = vtkMultiBlockDataSet::SafeDownCast(mudataset->GetBlock(k));
			if (dataSet)
			{
				for (int kk = 0; kk < dataSet->GetNumberOfBlocks(); ++kk)
				{
					if (findFlag)
						break;
					int type2 = dataSet->GetBlock(kk)->GetDataObjectType();
					if (type2 == VTK_UNSTRUCTURED_GRID)
					{
						shell = vtkUnstructuredGrid::SafeDownCast(dataSet->GetBlock(kk));
						if (shell->GetNumberOfCells() > 0)
						{
							findFlag = true;
							break;
						}
						else
							shell = (vtkUnstructuredGrid*)0;
					}
				}

				if (shell)
				{
					vtkCellData* cellDa = shell->GetCellData();
					int hh = cellDa->GetNumberOfArrays();
					for (int k = 0; k < cellDa->GetNumberOfArrays(); ++k)
					{
						const char* name = cellDa->GetArrayName(k);
						vtkDataArray* dataArray = cellDa->GetArray(cellDa->GetArrayName(k));
						for (int cellId = 0; cellId < dataArray->GetNumberOfTuples(); ++cellId)
							for (int compId = 0; compId < dataArray->GetNumberOfComponents(); ++compId)
								double value = dataArray->GetComponent(cellId, compId);
					}
				}
				if (shell)
				{
					int cellNum = shell->GetNumberOfCells();
					for (int k = 0; k < cellNum; ++k)
					{
						vtkCell* cell = shell->GetCell(k);
						int pointNum = cell->GetNumberOfPoints();
						vtkPoints* points;
						for (int kk = 0; kk < pointNum; ++kk)
						{
							points = cell->GetPoints();
							int numP = points->GetNumberOfPoints();
							double coordXYZ[3];
							for (int kkk = 0; kkk < numP; ++kkk)
							{
								points->GetPoint(kkk, coordXYZ);
							}
						}

						vtkUnstructuredGrid *grid = vtkUnstructuredGrid::New();
						vtkCellArray* cells = vtkCellArray::New();
						grid->SetPoints(points);
						for (int i = 0; i < pointNum - 1; ++i)
						{
							vtkLine* cell = vtkLine::New();
							cell->GetPointIds()->SetId(0, i);
							cell->GetPointIds()->SetId(1, i + 1);
							cells->InsertNextCell(cell);
						}
						grid->SetCells(VTK_LINE, cells);
						blockDataSet->SetBlock(_zoneNO, grid);
						_zoneNO++;
					}
				}
			}
		}
	}
	set_GridType(dUNSTRUCTURED_GRID);
	//QStringList info = head.split(" ");
	//qDebug() << info;
	//int in = info[2].toInt();
	//int jn = info[4].toInt();
	//int zn = 1;
	//vtkUnstructuredGrid *grid = vtkUnstructuredGrid::New();

	//vtkPoints* pts = vtkPoints::New();
	//const int count = in *jn *zn;
	//for (int i = 0; i < count; ++i)
	//{
	//	QString line = readline();
	//	if (line.isEmpty()) break;
	//	QStringList coorlist = line.split(" ");
	//	double coor[3] = { 0.0, 0.0, 0.0 };
	//	for (int nc = 0; nc < 3; ++nc)
	//	{
	//		coor[nc] = coorlist.at(nc).toDouble();
	//	}
	//	pts->InsertNextPoint(coor);
	//}
	//grid->SetPoints(pts);

	//vtkCellArray* cells = vtkCellArray::New();
	//for (int i = 0; i < count - 1; ++i)
	//{
	//	vtkLine* cell = vtkLine::New();
	//	cell->GetPointIds()->SetId(0, i);
	//	cell->GetPointIds()->SetId(1, i + 1);
	//	cells->InsertNextCell(cell);
	//}
	//grid->SetCells(VTK_LINE, cells);

	//blockDataSet->SetBlock(_zoneNO, grid);
	//_zoneNO++;
}


