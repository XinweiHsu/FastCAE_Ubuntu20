/********************************************************************************
** Form generated from reading UI file 'curve_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVE_MAINWINDOW_H
#define UI_CURVE_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_curve_MainWindow
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *curve_MainWindow)
    {
        if (curve_MainWindow->objectName().isEmpty())
            curve_MainWindow->setObjectName(QString::fromUtf8("curve_MainWindow"));
        curve_MainWindow->resize(400, 300);
        centralWidget = new QWidget(curve_MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        curve_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(curve_MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        curve_MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(curve_MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        curve_MainWindow->setStatusBar(statusBar);

        retranslateUi(curve_MainWindow);

        QMetaObject::connectSlotsByName(curve_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *curve_MainWindow)
    {
        curve_MainWindow->setWindowTitle(QCoreApplication::translate("curve_MainWindow", "Numeric Tank 2D Curve Module", nullptr));
    } // retranslateUi

};

namespace Ui {
    class curve_MainWindow: public Ui_curve_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVE_MAINWINDOW_H
