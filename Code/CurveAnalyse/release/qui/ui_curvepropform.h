/********************************************************************************
** Form generated from reading UI file 'curvepropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVEPROPFORM_H
#define UI_CURVEPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurvePropForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QTreeWidget *gloProp_treeWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *CurvePropForm)
    {
        if (CurvePropForm->objectName().isEmpty())
            CurvePropForm->setObjectName(QString::fromUtf8("CurvePropForm"));
        CurvePropForm->resize(459, 667);
        verticalLayout_2 = new QVBoxLayout(CurvePropForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(CurvePropForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(371, 500));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 439, 647));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget = new QTabWidget(scrollAreaWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gloProp_treeWidget = new QTreeWidget(tab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        gloProp_treeWidget->setHeaderItem(__qtreewidgetitem);
        gloProp_treeWidget->setObjectName(QString::fromUtf8("gloProp_treeWidget"));
        gloProp_treeWidget->setMinimumSize(QSize(0, 60));

        verticalLayout->addWidget(gloProp_treeWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem1);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 60));

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(CurvePropForm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CurvePropForm);
    } // setupUi

    void retranslateUi(QDialog *CurvePropForm)
    {
        CurvePropForm->setWindowTitle(QCoreApplication::translate("CurvePropForm", "Property", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CurvePropForm", "plot property", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CurvePropForm", "curve property", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurvePropForm: public Ui_CurvePropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVEPROPFORM_H
