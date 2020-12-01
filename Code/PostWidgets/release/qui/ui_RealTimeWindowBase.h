/********************************************************************************
** Form generated from reading UI file 'RealTimeWindowBase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALTIMEWINDOWBASE_H
#define UI_REALTIMEWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RealTimeWindow
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *layout;
    QTabWidget *tabWidget;
    QWidget *tab;

    void setupUi(QWidget *RealTimeWindow)
    {
        if (RealTimeWindow->objectName().isEmpty())
            RealTimeWindow->setObjectName(QString::fromUtf8("RealTimeWindow"));
        RealTimeWindow->resize(636, 414);
        gridLayout_2 = new QGridLayout(RealTimeWindow);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        layout = new QGridLayout();
        layout->setObjectName(QString::fromUtf8("layout"));
        tabWidget = new QTabWidget(RealTimeWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());

        layout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addLayout(layout, 0, 0, 1, 1);


        retranslateUi(RealTimeWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RealTimeWindow);
    } // setupUi

    void retranslateUi(QWidget *RealTimeWindow)
    {
        RealTimeWindow->setWindowTitle(QCoreApplication::translate("RealTimeWindow", "Real Time Curves", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("RealTimeWindow", "Tab 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RealTimeWindow: public Ui_RealTimeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALTIMEWINDOWBASE_H
