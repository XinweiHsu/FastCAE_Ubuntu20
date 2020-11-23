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
		/*�������Կ� */
		void updateProperty(DataProperty::DataBase* data);

	private:
		void init();
		//�Ҽ��˵�
		void contextMenuEvent(QContextMenuEvent *event) override;
		void updateDefineTree();
		void updateMaterialTree();
		void updateSolidsTree();
		void updateStructerTree();
		void updateTrackTree();


	private slots:
		//�����������¼�����
		void singleClicked(QTreeWidgetItem*item, int i);
		//����gdml
		void  importGDML();
		//����gdml
		void saveGDML();
		//�༭����
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