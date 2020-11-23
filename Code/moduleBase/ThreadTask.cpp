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
		//创建进度条
		_process = new ProcessBar(_mainwindow,this);
		//关联进度条显示信号
		connect(this, SIGNAL(showProcessBar(QWidget*)), _mainwindow, SIGNAL(addProcessBarSig(QWidget*)));
		//发送显示进度条显示信号
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
