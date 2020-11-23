#ifndef GEANT4PLUGIN_H_
#define GEANT4PLUGIN_H_

#include "PluginManager/pluginBase.h"
#include "Geant4PluginAPI.h"

namespace Geant4
{
	class Geant4ControlPanel;

	class Geant4Plugin : public Plugins::PluginBase
	{
		Q_OBJECT
	public:
		Geant4Plugin(GUI::MainWindow*  m);
		~Geant4Plugin();

		static GUI::MainWindow* getMainWindow();

		//���ز��
		virtual bool install() override;
		//ж�ز��
		virtual bool uninstall() override;
		//����
		virtual void reTranslate(QString lang) override;
		//д�����ļ�
		virtual void writeToProjectFile(QDomDocument* doc, QDomElement* parent) override;
		// �ӹ����ļ���ȡ
		virtual void readFromProjectFile(QDomElement* parent) override;
		// �Ƿ�����Ϣ��Ҫ����
		bool hasInfoToSave() override;

	private:

		

	private:
		static GUI::MainWindow* _mainWindow;
		Geant4ControlPanel* _gent4ControlPanel;
		QWidget* _FastCAEControlPanel{};

		/*QMenu* _menu{};
		QToolBar* _toolBar{};
	*/
	};
}

extern "C"
{

	// ע�����ӿ�
	void GEANT4PLUGINAPI Register(GUI::MainWindow* m, QList<Plugins::PluginBase*>* plugs);
}

#endif
