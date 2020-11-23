#ifndef  THREADTASK_H
#define  THREADTASK_H

#include <QObject>
#include <QThread>
#include "moduleBaseAPI.h"

class QThread;

namespace GUI
{
	class MainWindow;
}

namespace ModuleBase{
	class ProcessBar;

	class MODULEBASEAPI ThreadTask : public QObject
	{
		Q_OBJECT

	public:
		ThreadTask(GUI::MainWindow* m/*QString title*/);
		~ThreadTask();	

	signals:
		void showProcessBar(QWidget*);
		void setProgressStatus(int finished);
		void setRange(int min, int max);
		void showButton(bool visible);
		void showInformation(QString s);
		//void taskFinished(ThreadTask* t);
		void updateMesh();

		void threadFinished();
		void threadWait(int n);

	public slots:
		virtual void run() = 0;
		void stop();

	protected:
		void threadTaskFinished();

	protected:
		ProcessBar* _process;
		GUI::MainWindow* _mainwindow;
		bool _threadRuning{ false };
	};
}
#endif // THREADTASK_H

