/********************************************************************************
** Form generated from reading UI file 'ProcessWindowBase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSWINDOWBASE_H
#define UI_PROCESSWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessWindow
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *ProcessWindow)
    {
        if (ProcessWindow->objectName().isEmpty())
            ProcessWindow->setObjectName(QString::fromUtf8("ProcessWindow"));
        ProcessWindow->resize(552, 342);
        ProcessWindow->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        ProcessWindow->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 550, 315));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        ProcessWindow->setWidget(dockWidgetContents);

        retranslateUi(ProcessWindow);

        QMetaObject::connectSlotsByName(ProcessWindow);
    } // setupUi

    void retranslateUi(QDockWidget *ProcessWindow)
    {
        ProcessWindow->setWindowTitle(QCoreApplication::translate("ProcessWindow", "Process", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessWindow: public Ui_ProcessWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSWINDOWBASE_H
