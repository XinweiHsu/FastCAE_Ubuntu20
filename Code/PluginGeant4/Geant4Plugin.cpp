#include "Geant4Plugin.h"
#include "mainWindow/mainWindow.h"
#include "MainWidgets/ControlPanel.h"
#include "Geant4ControlPanel.h"
#include <QMainWindow>
#include "DataManager.h"


void Register(GUI::MainWindow* m, QList<Plugins::PluginBase*>* plugs)
{
	auto p = new Geant4::Geant4Plugin(m);
	plugs->append(p);
}

namespace Geant4
{
	GUI::MainWindow* Geant4Plugin::_mainWindow = nullptr;

	Geant4Plugin::Geant4Plugin(GUI::MainWindow* m)
	{
		_mainWindow = m;
	}

	Geant4Plugin::~Geant4Plugin()
	{

	}

	GUI::MainWindow* Geant4Plugin::getMainWindow()
	{
		return _mainWindow;
	}

	bool Geant4Plugin::install()
	{
		_FastCAEControlPanel = _mainWindow->getControlPanel();
		MainWidget::ControlPanel* c = dynamic_cast<MainWidget::ControlPanel*>(_FastCAEControlPanel);

		if (c == nullptr) return false;
		_gent4ControlPanel = new Geant4::Geant4ControlPanel(_mainWindow);
 		c->addTabWidgetPlugin(_gent4ControlPanel,"Geant4");

		return true;
	}

	bool Geant4Plugin::uninstall()
	{
		_FastCAEControlPanel = _mainWindow->getControlPanel();
		MainWidget::ControlPanel* c = dynamic_cast<MainWidget::ControlPanel*>(_FastCAEControlPanel);
		if (c == nullptr) return false;
		c->removeTabWidgetPlugin(_gent4ControlPanel);
		delete _gent4ControlPanel;
		DataManager::getInstance()->clear();
		return true;
	}

	void Geant4Plugin::reTranslate(QString lang)
	{

	}

	void Geant4Plugin::writeToProjectFile(QDomDocument* doc, QDomElement* parent)
	{

	}

	void Geant4Plugin::readFromProjectFile(QDomElement* parent)
	{

	}


	bool Geant4Plugin::hasInfoToSave()
	{
		return false;
	}

}