/********************************************************************************
** Form generated from reading UI file 'graph3DWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH3DWINDOW_H
#define UI_GRAPH3DWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLNativeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Graph3DWindow
{
public:
    QGridLayout *gridLayout;
    QVTKOpenGLNativeWidget *qvtkWidget;

    void setupUi(QWidget *Graph3DWindow)
    {
        if (Graph3DWindow->objectName().isEmpty())
            Graph3DWindow->setObjectName(QString::fromUtf8("Graph3DWindow"));
        Graph3DWindow->resize(1033, 713);
        gridLayout = new QGridLayout(Graph3DWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        qvtkWidget = new QVTKOpenGLNativeWidget(Graph3DWindow);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));

        gridLayout->addWidget(qvtkWidget, 0, 0, 1, 1);


        retranslateUi(Graph3DWindow);

        QMetaObject::connectSlotsByName(Graph3DWindow);
    } // setupUi

    void retranslateUi(QWidget *Graph3DWindow)
    {
        Graph3DWindow->setWindowTitle(QCoreApplication::translate("Graph3DWindow", "Graph3D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph3DWindow: public Ui_Graph3DWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH3DWINDOW_H
