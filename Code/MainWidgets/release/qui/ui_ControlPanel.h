/********************************************************************************
** Form generated from reading UI file 'ControlPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLPANEL_H
#define UI_CONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlPanel
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QSplitter *panelSplitter;
    QTabWidget *projectTab;
    QWidget *geometry_tab;
    QHBoxLayout *geometryLayout;
    QWidget *mesh_tab;
    QHBoxLayout *meshLayout;
    QWidget *physics_tab;
    QHBoxLayout *physicsLayout;
    QWidget *post_tab;
    QHBoxLayout *postLayout;
    QTabWidget *propTabWidget;
    QWidget *prop;
    QGridLayout *gridLayout_2;
    QVBoxLayout *propLayout;
    QWidget *postPropw;
    QGridLayout *gridLayout_3;
    QVBoxLayout *postPropLayout;
    QWidget *widgetTab;
    QGridLayout *gridLayout_5;
    QScrollArea *widgetScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_6;
    QVBoxLayout *paraLayout;

    void setupUi(QDockWidget *ControlPanel)
    {
        if (ControlPanel->objectName().isEmpty())
            ControlPanel->setObjectName(QString::fromUtf8("ControlPanel"));
        ControlPanel->resize(436, 682);
        ControlPanel->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        ControlPanel->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(dockWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        panelSplitter = new QSplitter(widget);
        panelSplitter->setObjectName(QString::fromUtf8("panelSplitter"));
        panelSplitter->setOrientation(Qt::Vertical);
        projectTab = new QTabWidget(panelSplitter);
        projectTab->setObjectName(QString::fromUtf8("projectTab"));
        projectTab->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(projectTab->sizePolicy().hasHeightForWidth());
        projectTab->setSizePolicy(sizePolicy);
        projectTab->setContextMenuPolicy(Qt::CustomContextMenu);
        projectTab->setTabPosition(QTabWidget::West);
        projectTab->setTabShape(QTabWidget::Rounded);
        projectTab->setUsesScrollButtons(true);
        geometry_tab = new QWidget();
        geometry_tab->setObjectName(QString::fromUtf8("geometry_tab"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(geometry_tab->sizePolicy().hasHeightForWidth());
        geometry_tab->setSizePolicy(sizePolicy1);
        geometryLayout = new QHBoxLayout(geometry_tab);
        geometryLayout->setSpacing(1);
        geometryLayout->setObjectName(QString::fromUtf8("geometryLayout"));
        geometryLayout->setContentsMargins(1, 1, 1, 1);
        projectTab->addTab(geometry_tab, QString());
        mesh_tab = new QWidget();
        mesh_tab->setObjectName(QString::fromUtf8("mesh_tab"));
        meshLayout = new QHBoxLayout(mesh_tab);
        meshLayout->setSpacing(1);
        meshLayout->setObjectName(QString::fromUtf8("meshLayout"));
        meshLayout->setContentsMargins(1, 1, 1, 1);
        projectTab->addTab(mesh_tab, QString());
        physics_tab = new QWidget();
        physics_tab->setObjectName(QString::fromUtf8("physics_tab"));
        sizePolicy1.setHeightForWidth(physics_tab->sizePolicy().hasHeightForWidth());
        physics_tab->setSizePolicy(sizePolicy1);
        physicsLayout = new QHBoxLayout(physics_tab);
        physicsLayout->setSpacing(1);
        physicsLayout->setObjectName(QString::fromUtf8("physicsLayout"));
        physicsLayout->setContentsMargins(1, 1, 1, 1);
        projectTab->addTab(physics_tab, QString());
        post_tab = new QWidget();
        post_tab->setObjectName(QString::fromUtf8("post_tab"));
        sizePolicy1.setHeightForWidth(post_tab->sizePolicy().hasHeightForWidth());
        post_tab->setSizePolicy(sizePolicy1);
        postLayout = new QHBoxLayout(post_tab);
        postLayout->setSpacing(1);
        postLayout->setObjectName(QString::fromUtf8("postLayout"));
        postLayout->setContentsMargins(1, 1, 1, 1);
        projectTab->addTab(post_tab, QString());
        panelSplitter->addWidget(projectTab);
        propTabWidget = new QTabWidget(panelSplitter);
        propTabWidget->setObjectName(QString::fromUtf8("propTabWidget"));
        sizePolicy.setHeightForWidth(propTabWidget->sizePolicy().hasHeightForWidth());
        propTabWidget->setSizePolicy(sizePolicy);
        propTabWidget->setTabPosition(QTabWidget::South);
        prop = new QWidget();
        prop->setObjectName(QString::fromUtf8("prop"));
        gridLayout_2 = new QGridLayout(prop);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        propLayout = new QVBoxLayout();
        propLayout->setObjectName(QString::fromUtf8("propLayout"));

        gridLayout_2->addLayout(propLayout, 0, 0, 1, 1);

        propTabWidget->addTab(prop, QString());
        postPropw = new QWidget();
        postPropw->setObjectName(QString::fromUtf8("postPropw"));
        gridLayout_3 = new QGridLayout(postPropw);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        postPropLayout = new QVBoxLayout();
        postPropLayout->setObjectName(QString::fromUtf8("postPropLayout"));

        gridLayout_3->addLayout(postPropLayout, 0, 0, 1, 1);

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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 426, 183));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        paraLayout = new QVBoxLayout();
        paraLayout->setObjectName(QString::fromUtf8("paraLayout"));

        gridLayout_6->addLayout(paraLayout, 0, 0, 1, 1);

        widgetScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(widgetScrollArea, 0, 0, 1, 1);

        propTabWidget->addTab(widgetTab, QString());
        panelSplitter->addWidget(propTabWidget);

        gridLayout_4->addWidget(panelSplitter, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        ControlPanel->setWidget(dockWidgetContents);

        retranslateUi(ControlPanel);

        projectTab->setCurrentIndex(2);
        propTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ControlPanel);
    } // setupUi

    void retranslateUi(QDockWidget *ControlPanel)
    {
        ControlPanel->setWindowTitle(QCoreApplication::translate("ControlPanel", "Control Panel", nullptr));
        projectTab->setTabText(projectTab->indexOf(geometry_tab), QCoreApplication::translate("ControlPanel", "Geometry", nullptr));
        projectTab->setTabText(projectTab->indexOf(mesh_tab), QCoreApplication::translate("ControlPanel", "Mesh", nullptr));
        projectTab->setTabText(projectTab->indexOf(physics_tab), QCoreApplication::translate("ControlPanel", "Analysis", nullptr));
        projectTab->setTabText(projectTab->indexOf(post_tab), QCoreApplication::translate("ControlPanel", "Post", nullptr));
        propTabWidget->setTabText(propTabWidget->indexOf(prop), QCoreApplication::translate("ControlPanel", "Property", nullptr));
        propTabWidget->setTabText(propTabWidget->indexOf(postPropw), QCoreApplication::translate("ControlPanel", "Post", nullptr));
        propTabWidget->setTabText(propTabWidget->indexOf(widgetTab), QCoreApplication::translate("ControlPanel", "Para Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlPanel: public Ui_ControlPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLPANEL_H
