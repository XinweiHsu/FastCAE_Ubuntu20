/********************************************************************************
** Form generated from reading UI file 'FunctionTreeSetup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONTREESETUP_H
#define UI_FUNCTIONTREESETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionTreeSetup
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QSplitter *splitter;
    QTabWidget *projectTab;
    QWidget *geometry_tab;
    QWidget *mesh_tab;
    QWidget *physics_tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *calculateLayout;
    QTreeWidget *treeWidget;
    QWidget *post_tab;
    QTabWidget *propTabWidget;
    QWidget *prop;
    QGridLayout *gridLayout_3;
    QVBoxLayout *propLayout;
    QWidget *postPropw;
    QGridLayout *gridLayout_4;
    QVBoxLayout *postPropLayout;
    QWidget *widgetTab;
    QGridLayout *gridLayout_5;
    QScrollArea *widgetScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_6;
    QVBoxLayout *paraLayout;

    void setupUi(QDockWidget *FunctionTreeSetup)
    {
        if (FunctionTreeSetup->objectName().isEmpty())
            FunctionTreeSetup->setObjectName(QString::fromUtf8("FunctionTreeSetup"));
        FunctionTreeSetup->resize(436, 682);
        FunctionTreeSetup->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        FunctionTreeSetup->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(dockWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        projectTab = new QTabWidget(splitter);
        projectTab->setObjectName(QString::fromUtf8("projectTab"));
        projectTab->setTabPosition(QTabWidget::West);
        geometry_tab = new QWidget();
        geometry_tab->setObjectName(QString::fromUtf8("geometry_tab"));
        projectTab->addTab(geometry_tab, QString());
        mesh_tab = new QWidget();
        mesh_tab->setObjectName(QString::fromUtf8("mesh_tab"));
        projectTab->addTab(mesh_tab, QString());
        physics_tab = new QWidget();
        physics_tab->setObjectName(QString::fromUtf8("physics_tab"));
        gridLayout_2 = new QGridLayout(physics_tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        calculateLayout = new QHBoxLayout();
        calculateLayout->setObjectName(QString::fromUtf8("calculateLayout"));
        calculateLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(physics_tab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(200, 0));
        treeWidget->setMaximumSize(QSize(16777215, 16777215));

        calculateLayout->addWidget(treeWidget);


        gridLayout_2->addLayout(calculateLayout, 0, 0, 1, 1);

        projectTab->addTab(physics_tab, QString());
        post_tab = new QWidget();
        post_tab->setObjectName(QString::fromUtf8("post_tab"));
        projectTab->addTab(post_tab, QString());
        splitter->addWidget(projectTab);
        propTabWidget = new QTabWidget(splitter);
        propTabWidget->setObjectName(QString::fromUtf8("propTabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(propTabWidget->sizePolicy().hasHeightForWidth());
        propTabWidget->setSizePolicy(sizePolicy);
        propTabWidget->setTabPosition(QTabWidget::South);
        prop = new QWidget();
        prop->setObjectName(QString::fromUtf8("prop"));
        gridLayout_3 = new QGridLayout(prop);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        propLayout = new QVBoxLayout();
        propLayout->setObjectName(QString::fromUtf8("propLayout"));

        gridLayout_3->addLayout(propLayout, 0, 0, 1, 1);

        propTabWidget->addTab(prop, QString());
        postPropw = new QWidget();
        postPropw->setObjectName(QString::fromUtf8("postPropw"));
        gridLayout_4 = new QGridLayout(postPropw);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        postPropLayout = new QVBoxLayout();
        postPropLayout->setObjectName(QString::fromUtf8("postPropLayout"));

        gridLayout_4->addLayout(postPropLayout, 0, 0, 1, 1);

        propTabWidget->addTab(postPropw, QString());
        widgetTab = new QWidget();
        widgetTab->setObjectName(QString::fromUtf8("widgetTab"));
        gridLayout_5 = new QGridLayout(widgetTab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widgetScrollArea = new QScrollArea(widgetTab);
        widgetScrollArea->setObjectName(QString::fromUtf8("widgetScrollArea"));
        widgetScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 428, 184));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        paraLayout = new QVBoxLayout();
        paraLayout->setObjectName(QString::fromUtf8("paraLayout"));

        gridLayout_6->addLayout(paraLayout, 0, 0, 1, 1);

        widgetScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(widgetScrollArea, 0, 0, 1, 1);

        propTabWidget->addTab(widgetTab, QString());
        splitter->addWidget(propTabWidget);

        gridLayout_7->addWidget(splitter, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        FunctionTreeSetup->setWidget(dockWidgetContents);

        retranslateUi(FunctionTreeSetup);

        projectTab->setCurrentIndex(2);
        propTabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(FunctionTreeSetup);
    } // setupUi

    void retranslateUi(QDockWidget *FunctionTreeSetup)
    {
        FunctionTreeSetup->setWindowTitle(QCoreApplication::translate("FunctionTreeSetup", "Control Panel", nullptr));
        projectTab->setTabText(projectTab->indexOf(geometry_tab), QCoreApplication::translate("FunctionTreeSetup", "geometry", nullptr));
        projectTab->setTabText(projectTab->indexOf(mesh_tab), QCoreApplication::translate("FunctionTreeSetup", "Mesh", nullptr));
        projectTab->setTabText(projectTab->indexOf(physics_tab), QCoreApplication::translate("FunctionTreeSetup", "Calculation", nullptr));
        projectTab->setTabText(projectTab->indexOf(post_tab), QCoreApplication::translate("FunctionTreeSetup", "Post", nullptr));
        propTabWidget->setTabText(propTabWidget->indexOf(prop), QCoreApplication::translate("FunctionTreeSetup", "Property", nullptr));
        propTabWidget->setTabText(propTabWidget->indexOf(postPropw), QCoreApplication::translate("FunctionTreeSetup", "Post", nullptr));
        propTabWidget->setTabText(propTabWidget->indexOf(widgetTab), QCoreApplication::translate("FunctionTreeSetup", "Para Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunctionTreeSetup: public Ui_FunctionTreeSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONTREESETUP_H
