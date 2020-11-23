#include "DialogLocalFields.h"
#include "ui_DialogLocalFields.h"
#include "GmshDialogBase.h"
#include <QMenu>
#include <QAction>

namespace Gmsh{
	DialogLocalFields::DialogLocalFields(GmshDialogBase*  parent, GUI::MainWindow* m, MainWidget::PreWindow* p) :
		QDialog(parent),
		_ui(new Ui::DialogLocalFields),
		_fieldList(parent->getLocalFields())
	{
		_ui->setupUi(this);

		_ui->groupBox->setVisible(false);
		_ui->addLocalField->setVisible(false);
		_ui->checkBox->setVisible(false);

		refreshFieldsListWidget();

		connect(_ui->newField, SIGNAL(clicked()), this, SLOT(onNewPButtonClicked()));
		connect(_ui->addLocalField, SIGNAL(clicked()), this, SLOT(onAddPButtonClicked()));
		connect(_ui->listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(onItemClicked(QListWidgetItem*)));
	}

	DialogLocalFields::~DialogLocalFields()
	{
		delete _ui;
	}

	void DialogLocalFields::refreshInterface(int n)
	{
		_ui->groupBox->setVisible(true);
		showInterface(n);
		hideInterface(n);

		_ui->addLocalField->setVisible(true);
		_ui->checkBox->setVisible(true);

	}

	void DialogLocalFields::showInterface(int n)
	{
		switch (n)
		{
		case 9:
			_ui->lineEdit9->setVisible(true);
			_ui->text9->setVisible(true);
		case 8:
			_ui->lineEdit8->setVisible(true);
			_ui->text8->setVisible(true);
		case 7:
			_ui->lineEdit7->setVisible(true);
			_ui->text7->setVisible(true);
		case 6:
			_ui->lineEdit6->setVisible(true);
			_ui->text6->setVisible(true);
		case 5:
			_ui->lineEdit5->setVisible(true);
			_ui->text5->setVisible(true);
		case 4:
			_ui->lineEdit4->setVisible(true);
			_ui->text4->setVisible(true);
		case 3:
			_ui->lineEdit3->setVisible(true);
			_ui->text3->setVisible(true);
		case 2:
			_ui->lineEdit2->setVisible(true);
			_ui->text2->setVisible(true);
		case 1:
			_ui->lineEdit1->setVisible(true);
			_ui->text1->setVisible(true);
			break;
		default:
			break;
		}
	}

	void DialogLocalFields::hideInterface(int n)
	{
		switch (n)
		{
		case 0:
			_ui->lineEdit1->setVisible(false);
			_ui->text1->setVisible(false);
		case 1:
			_ui->lineEdit2->setVisible(false);
			_ui->text2->setVisible(false);
		case 2:
			_ui->lineEdit3->setVisible(false);
			_ui->text3->setVisible(false);
		case 3:
			_ui->lineEdit4->setVisible(false);
			_ui->text4->setVisible(false);
		case 4:
			_ui->lineEdit5->setVisible(false);
			_ui->text5->setVisible(false);
		case 5:
			_ui->lineEdit6->setVisible(false);
			_ui->text6->setVisible(false);
		case 6:
			_ui->lineEdit7->setVisible(false);
			_ui->text7->setVisible(false);		
		case 7:
			_ui->lineEdit8->setVisible(false);
			_ui->text8->setVisible(false);
		case 8:
			_ui->lineEdit9->setVisible(false);
			_ui->text9->setVisible(false);		
			break;
		default:
			break;
		}
	}

	void DialogLocalFields::refreshFieldsListWidget()
	{
		_ui->listWidget->clear();

		for (int i = 0; i < _fieldList->count(); i++)
		{
			LocalField* lf = _fieldList->at(i);
			if (lf == nullptr)
				continue;

			QListWidgetItem* item = new QListWidgetItem;
			item->setText(getNameFromFieldType(lf->_type));

			_ui->listWidget->addItem(item);
			_index = i;
		}
	}

	void DialogLocalFields::showMenu()
	{
		QMenu* menu = new QMenu(this);
		QAction* box = new QAction(this);
		QAction* ball = new QAction(this);

		box->setText("Box");
		ball->setText("Ball");

		menu->addAction(box);
		menu->addAction(ball);

		connect(box, SIGNAL(triggered()), this, SLOT(addBoxField()));
		connect(ball, SIGNAL(triggered()), this, SLOT(addBallField()));

		menu->exec(QCursor::pos());
	}

	QString DialogLocalFields::getNameFromFieldType(FieldType type)
	{
		QString name{};
		switch (type)
		{
		case FieldType::BoxField:
			name = "Box";
			break;
		case FieldType::BallField:
			name = "Ball";
			break;
		default:
			break;
		}

		return name;
	}

	void DialogLocalFields::onItemClicked(QListWidgetItem* item)
	{
		_index = _ui->listWidget->row(item);
		LocalField* lf = _fieldList->at(_index);
		if (lf == nullptr)
			return;

		switch (lf->_type)
		{
		case FieldType::BoxField:
			updateBoxData(lf);
			break;
		case FieldType::BallField:
			updateBallData(lf);
			break;
		default:
			break;
		}
	}

// 	void DialogLocalFields::appendToLocalFieldList(LocalField* lf)
// 	{
// 		_fieldList.append(lf);
// 	}

	void DialogLocalFields::addBoxField()
	{
		Box* box = new Box;
		box->_type = FieldType::BoxField;

		updateBoxData(box);

		_fieldList->append(box);
		refreshFieldsListWidget();
	}

	void DialogLocalFields::addBallField()
	{
		Ball* ball = new Ball;
		ball->_type = FieldType::BallField;

		updateBallData(ball);

		_fieldList->append(ball);
		refreshFieldsListWidget();
	}

	void DialogLocalFields::onNewPButtonClicked()
	{
		showMenu();
	}

	void DialogLocalFields::onAddPButtonClicked()
	{

		LocalField* field = _fieldList->at(_index);
		switch (field->_type)
		{
		case FieldType::BoxField:
		//	field = new Box;
			setBoxFieldData(field);
			break;
		case FieldType::BallField:
			//field = new Ball;
			setBallFieldData(field);
			break;
		default:
			break;
		}

		
	}

	void DialogLocalFields::setBoxFieldData(LocalField* lf)
	{
		Box* bx = dynamic_cast<Box*>(lf);

		if (bx == nullptr)
			return;

		bx->_thickness = _ui->lineEdit1->text().trimmed().toDouble();
		bx->_vIn = _ui->lineEdit2->text().trimmed().toDouble();
		bx->_vOut = _ui->lineEdit3->text().trimmed().toDouble();
		bx->_xMin = _ui->lineEdit4->text().trimmed().toDouble();
		bx->_xMax = _ui->lineEdit5->text().trimmed().toDouble();
		bx->_yMin = _ui->lineEdit6->text().trimmed().toDouble();
		bx->_yMax = _ui->lineEdit7->text().trimmed().toDouble();
		bx->_zMin = _ui->lineEdit8->text().trimmed().toDouble();
		bx->_zMax = _ui->lineEdit9->text().trimmed().toDouble();
		bx->_backgroundField = _ui->checkBox->isChecked();

	}

	void DialogLocalFields::setBallFieldData(LocalField* lf)
	{
		Ball* bl = dynamic_cast<Ball*>(lf);

		if (bl == nullptr)
			return;

		bl->_radius = _ui->lineEdit1->text().trimmed().toDouble();
		bl->_thickness = _ui->lineEdit2->text().trimmed().toDouble();
		bl->_vIn = _ui->lineEdit3->text().trimmed().toDouble();
		bl->_vOut = _ui->lineEdit4->text().trimmed().toDouble();
		bl->_xCenter = _ui->lineEdit5->text().trimmed().toDouble();
		bl->_yCenter = _ui->lineEdit6->text().trimmed().toDouble();
		bl->_zCenter = _ui->lineEdit7->text().trimmed().toDouble();
		bl->_backgroundField = _ui->checkBox->isChecked();

	}


	void DialogLocalFields::updateBoxData(LocalField* lf)
	{
		Box* box = dynamic_cast<Box*>(lf);

		if (box == nullptr)
			return;

		_ui->text1->setText("Thinckness");
		_ui->text2->setText("VIn");
		_ui->text3->setText("VOut");
		_ui->text4->setText("XMin");
		_ui->text5->setText("XMax");
		_ui->text6->setText("YMin");
		_ui->text7->setText("YMax");
		_ui->text8->setText("ZMin");
		_ui->text9->setText("ZMax");

		_ui->lineEdit1->setText(QString::number(box->_thickness));
		_ui->lineEdit2->setText(QString::number(box->_vIn));
		_ui->lineEdit3->setText(QString::number(box->_vOut));
		_ui->lineEdit4->setText(QString::number(box->_xMin));
		_ui->lineEdit5->setText(QString::number(box->_xMax));
		_ui->lineEdit6->setText(QString::number(box->_yMin));
		_ui->lineEdit7->setText(QString::number(box->_yMax));
		_ui->lineEdit8->setText(QString::number(box->_zMin));
		_ui->lineEdit9->setText(QString::number(box->_zMax));

		_ui->checkBox->setChecked(box->_backgroundField);

		refreshInterface(9);
	}

	void DialogLocalFields::updateBallData(LocalField* lf)
	{
		Ball* ball = dynamic_cast<Ball*>(lf);

		if (ball == nullptr)
			return;

		_ui->text1->setText("Radius");
		_ui->text2->setText("Thinckness");
		_ui->text3->setText("VIn");
		_ui->text4->setText("VOut");
		_ui->text5->setText("XCenter");
		_ui->text6->setText("YCenter");
		_ui->text7->setText("ZCenter");

		_ui->lineEdit1->setText(QString::number(ball->_radius));
		_ui->lineEdit2->setText(QString::number(ball->_thickness));
		_ui->lineEdit3->setText(QString::number(ball->_vIn));
		_ui->lineEdit4->setText(QString::number(ball->_vOut));
		_ui->lineEdit5->setText(QString::number(ball->_xCenter));
		_ui->lineEdit6->setText(QString::number(ball->_yCenter));
		_ui->lineEdit7->setText(QString::number(ball->_zCenter));

		_ui->checkBox->setChecked(ball->_backgroundField);

		refreshInterface(7);
	}

}