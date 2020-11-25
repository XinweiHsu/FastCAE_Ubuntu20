#include "preWindow.h"
#include "moduleBase/ModuleType.h"
#include "DialogCreateGeoComponent.h"
#include "ui_DialogCreateGeoComponent.h"
#include "moduleBase/ModuleType.h"
#include "geometry/geometryData.h"
#include "geometry/geometrySet.h"
#include "mainWindow/mainWindow.h"
#include "python/PyAgent.h"
#include <qpushbutton.h>
#include <qdebug.h>

namespace MainWidget
{
	CreateGeoComponentDialog::CreateGeoComponentDialog(GUI::MainWindow* mainwindow, PreWindow* prewindow) :
		QFDialog(mainwindow), _preWindow(prewindow), _ui(new Ui::CreateGeoComponentDialog)
	{
		_ui->setupUi(this);		
		InitDialog();
		_ui->buttonBox->button(QDialogButtonBox::Ok)->setText(tr("Ok"));
		_ui->buttonBox->button(QDialogButtonBox::Cancel)->setText(tr("Cancel"));
		connect(_ui->buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked()), this, SLOT(on_buttonOk()));
		connect(this, SIGNAL(updataGeoComponentTree()), mainwindow, SIGNAL(updateGeometryTreeSig()));
	}

	CreateGeoComponentDialog::~CreateGeoComponentDialog()
	{
		delete _ui;
		_ui = nullptr;
	}

	void CreateGeoComponentDialog::InitDialog()
	{
		_ui->typeLineEdit->setReadOnly(true);
		int currMaxID = DataProperty::ComponentBase::getMaxID();
		QString name = QString("GeoComponent_%1").arg(currMaxID + 1);
		_ui->nameLineEdit->setPlaceholderText(name);

		QString qtype{};
		if (_preWindow)
		{
			switch (_preWindow->getSelectModel())
			{
			case ModuleBase::GeometryWinPoint: qtype = tr("Point"); _type = Geometry::GeoComponentType::Node; break;
			case ModuleBase::GeometryWinCurve: qtype = tr("Line"); _type = Geometry::GeoComponentType::Line; break;
			case ModuleBase::GeometryWinSurface: qtype = tr("Surface"); _type = Geometry::GeoComponentType::Surface; break;
			case ModuleBase::GeometryWinBody: qtype = tr("Body"); _type = Geometry::GeoComponentType::Body; break;
			default: break;
			}
		}
		_ui->typeLineEdit->setText(qtype);
	}

	void CreateGeoComponentDialog::on_buttonOk()
	{
		QString name = _ui->nameLineEdit->text();
		if (name.isEmpty())
			name = _ui->nameLineEdit->placeholderText();

		QStringList gSetIDs, itemIDs;
		auto selectedItems = _preWindow->getGeoSelectItems();
		QMutableHashIterator<Geometry::GeometrySet*, int> it(selectedItems);
		while (it.hasNext())
		{
			it.next();
			gSetIDs << QString::number(it.key()->getID());
			itemIDs << QString::number(it.value());
		}
		QString type = Geometry::GeoComponent::gcTypeToString(_type);
		QString strgIDs = gSetIDs.join(";");
		QString strItemIDs = itemIDs.join(";");

		QString code = QString("MainWindow.createGeoComponent(\"%1\",\"%2\",\"%3\",\"%4\")").arg(name).arg(type).arg(strgIDs).arg(strItemIDs);
		Py::PythonAagent::getInstance()->submit(code);
	}
}

