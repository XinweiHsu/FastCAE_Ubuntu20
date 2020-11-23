#include "DialogPhysicalsSetting.h"
#include "ui_DialogPhysicalsSetting.h"
#include "MainWidgets/preWindow.h"
#include "mainWindow/mainWindow.h"
#include "settings/busAPI.h"
#include "settings/GraphOption.h"
#include "GmshDialogBase.h"
#include <vtkActor.h>
#include <vtkProperty.h>
#include <QDebug>
#include <QMessageBox>

namespace Gmsh{
	DialogPhysicalsSetting::DialogPhysicalsSetting(GUI::MainWindow* m, MainWidget::PreWindow* pre, GmshDialogBase*  parent) :
		QDialog(parent),_mainWindow(m), _preWindow(pre), _groupList(parent->getPhysicalsGroups())
	{
		_ui = new Ui::DialogPhysicalsSetting;
		_ui->setupUi(this);
		_tab = _ui->tableWidget;

		connect(_tab, SIGNAL(cellClicked(int, int)), this, SLOT(deleteItem(int, int)));
		connect(_ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onComboBoxIndexChange(int)));
		connect(this, SIGNAL(setSelectMode(int)), _mainWindow, SIGNAL(selectModelChangedSig(int)));
		connect(_preWindow, SIGNAL(geoShapeSelected(Geometry::GeometrySet*, int)), this, SLOT(shapeSelected(Geometry::GeometrySet*, int)));
		connect(this, SIGNAL(updateGraphOptions()), _mainWindow, SIGNAL(updateGraphOptionsSig()));
		connect(this, SIGNAL(highLightGeometryPointSig(Geometry::GeometrySet*, int, bool)), _preWindow, SIGNAL(highLightGeometryPoint(Geometry::GeometrySet*, int, bool)));
		connect(this, SIGNAL(highLightGeometryEdgeSig(Geometry::GeometrySet*, int, bool)), _preWindow, SIGNAL(highLightGeometryEdge(Geometry::GeometrySet*, int, bool)));
		connect(this, SIGNAL(highLightGeometryFaceSig(Geometry::GeometrySet*, int, bool)), _preWindow, SIGNAL(highLightGeometryFace(Geometry::GeometrySet*, int, bool)));
		connect(this, SIGNAL(highLightGeometrySolidSig(Geometry::GeometrySet*, int, bool)), _preWindow, SIGNAL(highLightGeometrySolid(Geometry::GeometrySet*, int, bool)));
		connect(this, SIGNAL(clearGeometryHighLight()), _preWindow, SIGNAL(clearGeometryHighLight()));
	}

	DialogPhysicalsSetting::~DialogPhysicalsSetting()
	{
		if (_ui != nullptr) delete _ui;
		emit updateGraphOptions();
		emit setSelectMode(int(ModuleBase::None));
	}

	void DialogPhysicalsSetting::deleteItem(int r, int c)
	{
		if (c != 0)return;
		int n = _groupList->size();

		if (r >= 0 && r < n)
			_groupList->removeAt(r);

		updateTab();
	}

	void DialogPhysicalsSetting::on_pysicalsAddPButton_clicked()
	{
		emit setSelectMode(int(ModuleBase::None));
		if (_geoHash.size() == 0 /*&& _geoList.size() == 0*/)
			return;

		QString name = _ui->lineEdit->text().trimmed();
		if (name.isEmpty())
		{
			QMessageBox::warning(this, tr("Warning"), tr("The name of physical group is empty !"));
			return;
		}

		if (_nameList.contains(name))
		{
			QMessageBox::warning(this, tr("Warning"), tr("The name of physical group is already used !"));
			return;
		}

		switch (_type)
		{
		case PhysicalPoint:
			addPhysicalsPointData();
			break;
		case physicalCurve:
			addPhysicalsCurveData();
			break;
		case PhysicalSuface:
			addPhysicalsSurfaceData();
			break;
		case PhysicalSolid:
			addPhysicalsSolidData();
			break;
		default:
			break;
		}

		updateTab();

		_geoHash.clear();
		//_geoList.clear();

		QString text = QString(tr("Selected %1(%2)").arg(getPhysicalType(_type)).arg(_geoHash.size()));
		_ui->textLabel->setText(text);

	}

	void DialogPhysicalsSetting::on_closePButton_clicked()
	{
		this->close();
	}

	void DialogPhysicalsSetting::on_geoSelect_clicked()
	{
		_selected = true;

		switch (_type)
		{
		case PhysicalPoint:
			emit setSelectMode((int)ModuleBase::GeometryPoint);
			break;
		case physicalCurve:
			emit setSelectMode((int)ModuleBase::GeometryCurve);
			break;
		case PhysicalSuface:
			emit setSelectMode((int)ModuleBase::GeometrySurface);
			break;
		case PhysicalSolid:
			emit setSelectMode((int)ModuleBase::GeometryBody);
			break;
		default:
			break;
		}
		
	}

	void DialogPhysicalsSetting::onComboBoxIndexChange(int index)
	{
		emit clearGeometryHighLight();
		emit setSelectMode((int)ModuleBase::None);
		_selected = false;

		_geoHash.clear();
	//	_geoList.clear();

		switch (index)
		{
		case 0:
			_type = Physicals::PhysicalPoint;
			break;
		case 1:
			_type = Physicals::physicalCurve;
			break;
		case 2:
			_type = Physicals::PhysicalSuface;
			break;
		case 3:
			_type = Physicals::PhysicalSolid;
			break;
		default:
			break;
		}

		QString text = QString(tr("Selected %1(0)").arg(getPhysicalType(_type)));
		_ui->textLabel->setText(text);
	}

	void DialogPhysicalsSetting::shapeSelected(Geometry::GeometrySet* set, int index)
	{
		if (!_selected)  return;
		if (_geoHash.contains(set, index))
		{
			//removeObject(set, index);
			_geoHash.remove(set, index);
			highLightGeometry(set, index, false);
		}
		else
		{
			//appendObject(set, index);
			_geoHash.insert(set, index);
			highLightGeometry(set, index, true);
		}
// 		if (_actorList.contains(ac))
// 		{
// 			_actorList.removeOne(ac);
// 			QColor color = Setting::BusAPI::instance()->getGraphOption()->getGeometrySurfaceColor();
// 			ac->GetProperty()->SetColor(color.redF(), color.greenF(), color.blueF());
// 			removeObject(st, index);
// 			//_geoHash.remove(st, index);
// 		}
// 		else
// 		{
// 			_actorList.append(ac);
// 			QColor color = Setting::BusAPI::instance()->getGraphOption()->getHighLightColor();
// 			ac->GetProperty()->SetColor(color.redF(), color.greenF(), color.blueF());
// 			appendObject(st, index);
// 			if (_type == Physicals::PhysicalSolid) emit;
// 			//_geoHash.insert(st, index);
// 		}
		QString text = QString(tr("Selected %1(%2)").arg(getPhysicalType(_type)).arg(_geoHash.size()));
		_ui->textLabel->setText(text);
	}

	void DialogPhysicalsSetting::showEvent(QShowEvent *e)
	{
		QDialog::showEvent(e);
		updateTab();
	}

	void DialogPhysicalsSetting::removeObject(Geometry::GeometrySet* set, int index)
	{
		if (_type == Physicals::PhysicalSolid) _geoList.removeOne(set);
		else _geoHash.remove(set, index);	
	}

	void DialogPhysicalsSetting::appendObject(Geometry::GeometrySet* set, int index)
	{
		if (_type == Physicals::PhysicalSolid) _geoList.append(set);
		else _geoHash.insert(set, index);
	}

	void DialogPhysicalsSetting::addPhysicalsPointData()
	{
		QString name = _ui->lineEdit->text().trimmed();

	//	if (name.isEmpty()) name = QString::number(_index++);
		
		PhysicalsPoint* p = new PhysicalsPoint;

		p->_name = name;
		p->_type = _type;
		p->_pointsHash = _geoHash;

		_groupList->append(p);
	}

	void DialogPhysicalsSetting::addPhysicalsCurveData()
	{
		QString name = _ui->lineEdit->text().trimmed();

	//	if (name.isEmpty()) name = QString::number(_index++);

		PhysicalsCurve* p = new PhysicalsCurve;

		p->_name = name;
		p->_type = _type;
		p->_curvesHash = _geoHash;

		_groupList->append(p);
	}

	void DialogPhysicalsSetting::addPhysicalsSurfaceData()
	{
		QString name = _ui->lineEdit->text().trimmed();

	//	if (name.isEmpty()) name = QString::number(_index++);

		PhysicalsSurface* p = new PhysicalsSurface;

		p->_name = name;
		p->_type = _type;
		p->_surfacesHash = _geoHash;

		_groupList->append(p);
	}

	void DialogPhysicalsSetting::addPhysicalsSolidData()
	{
		QString name = _ui->lineEdit->text().trimmed();

	//	if (name.isEmpty()) name = QString::number(_index++);

		PhysicalsSolid* p = new PhysicalsSolid;

		p->_name = name;
		p->_type = _type;
		p->_solidHash = _geoHash;

		_groupList->append(p);
	}

	void DialogPhysicalsSetting::updateTab()
	{
		_nameList.clear();
		int wid = _tab->width();
		_tab->setColumnWidth(0, 20);
		_tab->setColumnWidth(1, wid / 2 - 12);
		_tab->setColumnWidth(2, wid / 2 - 12);
		//		_tab->clear();
		const int n = _groupList->size();
		_tab->setRowCount(n);

		for (int i = 0; i < n; ++i)
		{
			PhysicalsGroups* p = _groupList->at(i);
			QLabel *label = new QLabel("");
			label->setPixmap(QPixmap("://QUI/geometry/remove.png"));
			_tab->setCellWidget(i, 0, label);
			QString name = p->_name;
			QString type = getPhysicalType(p->_type);
			QTableWidgetItem* item1 = new QTableWidgetItem(name);
			_tab->setItem(i, 1, item1);
			QTableWidgetItem* item2 = new QTableWidgetItem(type);
			_tab->setItem(i, 2, item2);

			item1->setFlags(item1->flags() & (~Qt::ItemIsEditable));
			item2->setFlags(item2->flags() & (~Qt::ItemIsEditable));

			_nameList.append(name);
		}

	}

	QString DialogPhysicalsSetting::getPhysicalType(Physicals t)
	{
		QString name;
		switch (t)
		{
		case PhysicalPoint:
			name = tr("Point");
			break;
		case physicalCurve:
			name = tr("Curve");
			break;
		case PhysicalSuface:
			name = tr("Surface");
			break;
		case PhysicalSolid:
			name = tr("Solid");
			break;
		default:
			break;
		}

		return name;
	}

	void DialogPhysicalsSetting::highLightGeometry(Geometry::GeometrySet* set, int index, bool h)
	{
		switch (_type)
		{
		case PhysicalPoint:
			emit highLightGeometryPointSig(set, index, h);
			break;
		case physicalCurve:
			emit highLightGeometryEdgeSig(set, index, h);
			break;
		case PhysicalSuface:
			emit highLightGeometryFaceSig(set, index, h);
			break;
		case PhysicalSolid:
			emit highLightGeometrySolidSig(set, index, h);
			break;
		default:
			break;
		}
	}

}