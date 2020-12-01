/********************************************************************************
** Form generated from reading UI file 'graph_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_MAINWINDOW_H
#define UI_GRAPH_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graph_MainWindow
{
public:
    QWidget *centralWidget;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *graph_MainWindow)
    {
        if (graph_MainWindow->objectName().isEmpty())
            graph_MainWindow->setObjectName(QString::fromUtf8("graph_MainWindow"));
        graph_MainWindow->resize(400, 300);
        centralWidget = new QWidget(graph_MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graph_MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(graph_MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        graph_MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(graph_MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        graph_MainWindow->setMenuBar(menuBar);

        retranslateUi(graph_MainWindow);

        QMetaObject::connectSlotsByName(graph_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *graph_MainWindow)
    {
        graph_MainWindow->setWindowTitle(QCoreApplication::translate("graph_MainWindow", "Numerical Tank 3D Visualization System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graph_MainWindow: public Ui_graph_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_MAINWINDOW_H
