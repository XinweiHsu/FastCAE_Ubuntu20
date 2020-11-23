#ifndef DIALOGLOCALFIELDS_H
#define DIALOGLOCALFIELDS_H

#include <QDialog>
#include "LocalField.h"
#include <QListWidgetItem>

namespace Ui {
class DialogLocalFields;
}

namespace GUI
{
	class MainWindow;
}

namespace MainWidget
{
	class PreWindow;
}

namespace GeometryWidget
{
	class GeoPointWidget;
}
namespace Gmsh{
	class GmshDialogBase;
	class LocalField;

	class DialogLocalFields : public QDialog
	{
		Q_OBJECT

	public:
		DialogLocalFields(GmshDialogBase*  parent, GUI::MainWindow* m, MainWidget::PreWindow* p);
		~DialogLocalFields();


	private slots:
		void onItemClicked(QListWidgetItem* item);
		void addBoxField();
		void addBallField();
		void onNewPButtonClicked();
		void onAddPButtonClicked();

	private:
		void refreshInterface(int n);
		void showInterface(int n);
		void hideInterface(int n);
		void refreshFieldsListWidget();
		void showMenu();
		QString getNameFromFieldType(FieldType type);
		//void appendToLocalFieldList(LocalField* lf);
		void setBoxFieldData(LocalField* lf);
		void setBallFieldData(LocalField* lf);

		void updateBoxData(LocalField* lf);
		void updateBallData(LocalField* lf);


	private:
		Ui::DialogLocalFields *_ui;
		QList<LocalField*>* _fieldList;
// 		FieldType _type{ UnDefine };
 		int _index{ -1 };
	};
}

#endif // DIALOGLOCALFIELDS_H
