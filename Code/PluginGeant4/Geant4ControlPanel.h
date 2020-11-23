#ifndef GEANT4CONTROLPANEL_H_
#define GEANT4CONTROLPANEL_H_

#include "Geant4PluginAPI.h"
#include "moduleBase/dockWidgetBase.h"
#include <QTreeWidget>

class QTreeWidgetItem;


namespace DataProperty
{
	class DataBase;
}

namespace Geant4
{
	
	class MaterialManager;
	
	class  Geant4ControlPanel :  public QTreeWidget
	{
		Q_OBJECT
	public:
		Geant4ControlPanel(GUI::MainWindow* m);
		~Geant4ControlPanel();
		
	signals:
		/*更新属性框 */
		void updateProperty(DataProperty::DataBase* data);

	private:
		void init();
		//右键菜单
		void contextMenuEvent(QContextMenuEvent *event) override;
		void updateDefineTree();
		void updateMaterialTree();
		void updateSolidsTree();
		void updateStructerTree();
		void updateTrackTree();


	private slots:
		//鼠标左键单击事件处理
		void singleClicked(QTreeWidgetItem*item, int i);
		//导入gdml
		void  importGDML();
		//到处gdml
		void saveGDML();
		//编辑对象
		void editItem();

		void addProton();
		void addElectron();
		void addPhoton();
		void removeTrack();

	private:
		GUI::MainWindow* _mainWindow{};

		QTreeWidgetItem* _root{};
		QTreeWidgetItem* _defineRoot{};
		QTreeWidgetItem* _materialRoot{};
		QTreeWidgetItem* _solidRoot{};
		QTreeWidgetItem* _structureRoot{};
		QTreeWidgetItem* _trackRoot{};
		
	};
}



#endif