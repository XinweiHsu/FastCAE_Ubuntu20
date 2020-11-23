#include "ThreadTask.h"
#include "processBar.h"
#include "mainWindow/mainWindow.h"
#include "mainWindow/SubWindowManager.h"
#include "ThreadTaskManager.h"
#include <QThread>
#include <QDebug>

namespace ModuleBase
{
	ThreadTask::ThreadTask(GUI::MainWindow* m) :_mainwindow(m)
	{
		//����������
		_process = new ProcessBar(_mainwindow,this);
		//������������ʾ�ź�
		connect(this, SIGNAL(showProcessBar(QWidget*)), _mainwindow, SIGNAL(addProcessBarSig(QWidget*)));
		//������ʾ��������ʾ�ź�
		emit showProcessBar(_process);
	}

	ThreadTask::~ThreadTask()
	{

	}

	void ThreadTask::stop()
	{
		_threadRuning = false;
	}

	void ThreadTask::threadTaskFinished()
	{
		emit setRange(0, 100);
		_process->setAutoClose(false);
		emit setProgressStatus(100);

		emit threadWait(2);

		_process->setAutoClose(true);
		emit setProgressStatus(100);
	
		emit threadFinished();
	
	}


	void ThreadTask::run()
	{
		_threadRuning = true;
	}

}
