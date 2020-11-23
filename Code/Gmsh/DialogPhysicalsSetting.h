#ifndef DIALOGPHYSICALSSETTTING_H
#define DIALOGPHYSICALSSETTTING_H

#include "PhysicalsGroups.h"
#include <QDialog>
#include <QTableWidget>

namespace Ui {
class DialogPhysicalsSetting;
}

namespace Geometry
{
	class GeometrySet;
}

namespace GUI{
	class MainWindow;
}

namespace MainWidget{
	class PreWindow;
}

class vtkActor;

namespace Gmsh{
	class GmshDialogBase;

	class DialogPhysicalsSetting : public QDialog
	{
		Q_OBJECT

	public:
		DialogPhysicalsSetting(GUI::MainWindow* m, MainWidget::PreWindow* pre, GmshDialogBase*  parent);
		~DialogPhysicalsSetting();


	signals:
		void setSelectMode(int);
		void updateGraphOptions();
		void highLightGeometryPointSig(Geometry::GeometrySet*, int, bool);
		void highLightGeometryEdgeSig(Geometry::GeometrySet*, int, bool);
		void highLightGeometryFaceSig(Geometry::GeometrySet*, int, bool);
		void highLightGeometrySolidSig(Geometry::GeometrySet*, int, bool);
		void clearGeometryHighLight();

	private slots:
		void on_pysicalsAddPButton_clicked();
		void on_closePButton_clicked();
		void on_geoSelect_clicked();
		void onComboBoxIndexChange(int index);
		void shapeSelected(Geometry::GeometrySet* st, int index);
		void deleteItem(int r, int c);

	private:
		void showEvent(QShowEvent *e) override;
		void removeObject(Geometry::GeometrySet* set, int index);
		void appendObject(Geometry::GeometrySet* set, int index);

		void addPhysicalsPointData();
		void addPhysicalsCurveData(); 
		void addPhysicalsSurfaceData();
		void addPhysicalsSolidData();

		void updateTab();

		QString getPhysicalType(Physicals t);
		void highLightGeometry(Geometry::GeometrySet* set, int index, bool h);

	private:
		Ui::DialogPhysicalsSetting* _ui{};
		QTableWidget* _tab{};
		GUI::MainWindow* _mainWindow{};
		MainWidget::PreWindow* _preWindow{};

		QList<vtkActor*> _actorList{};
		QMultiHash<Geometry::GeometrySet*, int> _geoHash{};
		QList<Geometry::GeometrySet*> _geoList{};

		QList<PhysicalsGroups*>* _groupList{};

		Physicals _type{ PhysicalPoint };
		bool _selected{ false };

		int _index{ 0 };

		QList<QString> _nameList{};

	};
}
#endif // DIALOGPHYSICALSSETTTING_H
