/********************************************************************************
** Form generated from reading UI file 'scalarbareditform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCALARBAREDITFORM_H
#define UI_SCALARBAREDITFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkVTKScalarsToColorsWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ScalarBarEditForm
{
public:
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *colName_lineEdit;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpinBox *spinBox_numLabels;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    ctkVTKScalarsToColorsWidget *ScalarOpacityWidget;
    ctkVTKScalarsToColorsWidget *ScalarColorWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *scalarRange_dataBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *scalarRange_customBtn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *scalarRange_tableBtn;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *enableOpacity_checkBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *color_tableWidget;
    QTableWidget *opacity_tableWidget;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *zone_tableWidget;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_3;

    void setupUi(QWidget *ScalarBarEditForm)
    {
        if (ScalarBarEditForm->objectName().isEmpty())
            ScalarBarEditForm->setObjectName(QString::fromUtf8("ScalarBarEditForm"));
        ScalarBarEditForm->resize(356, 684);
        verticalLayout_6 = new QVBoxLayout(ScalarBarEditForm);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_2 = new QGroupBox(ScalarBarEditForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        colName_lineEdit = new QLineEdit(groupBox_2);
        colName_lineEdit->setObjectName(QString::fromUtf8("colName_lineEdit"));
        colName_lineEdit->setReadOnly(false);

        gridLayout->addWidget(colName_lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(3);
        spinBox->setMaximum(30);
        spinBox->setValue(12);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        spinBox_numLabels = new QSpinBox(groupBox_2);
        spinBox_numLabels->setObjectName(QString::fromUtf8("spinBox_numLabels"));
        spinBox_numLabels->setMinimum(3);
        spinBox_numLabels->setMaximum(10);
        spinBox_numLabels->setValue(5);

        gridLayout->addWidget(spinBox_numLabels, 2, 1, 1, 1);


        verticalLayout_6->addWidget(groupBox_2);

        tabWidget = new QTabWidget(ScalarBarEditForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ScalarOpacityWidget = new ctkVTKScalarsToColorsWidget(tab);
        ScalarOpacityWidget->setObjectName(QString::fromUtf8("ScalarOpacityWidget"));
        ScalarOpacityWidget->setMinimumSize(QSize(0, 120));
        ScalarOpacityWidget->setProperty("editColors", QVariant(false));

        verticalLayout_3->addWidget(ScalarOpacityWidget);

        ScalarColorWidget = new ctkVTKScalarsToColorsWidget(tab);
        ScalarColorWidget->setObjectName(QString::fromUtf8("ScalarColorWidget"));
        ScalarColorWidget->setMinimumSize(QSize(0, 30));
        ScalarColorWidget->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(ScalarColorWidget);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        scalarRange_dataBtn = new QPushButton(tab);
        scalarRange_dataBtn->setObjectName(QString::fromUtf8("scalarRange_dataBtn"));
        scalarRange_dataBtn->setMinimumSize(QSize(20, 20));
        scalarRange_dataBtn->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/scalarRange_data.png"), QSize(), QIcon::Normal, QIcon::Off);
        scalarRange_dataBtn->setIcon(icon);

        verticalLayout->addWidget(scalarRange_dataBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scalarRange_customBtn = new QPushButton(tab);
        scalarRange_customBtn->setObjectName(QString::fromUtf8("scalarRange_customBtn"));
        scalarRange_customBtn->setMinimumSize(QSize(20, 20));
        scalarRange_customBtn->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/scalarRange_custom.png"), QSize(), QIcon::Normal, QIcon::Off);
        scalarRange_customBtn->setIcon(icon1);

        verticalLayout->addWidget(scalarRange_customBtn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        scalarRange_tableBtn = new QPushButton(tab);
        scalarRange_tableBtn->setObjectName(QString::fromUtf8("scalarRange_tableBtn"));
        scalarRange_tableBtn->setMinimumSize(QSize(20, 20));
        scalarRange_tableBtn->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/scalarRange_table.png"), QSize(), QIcon::Normal, QIcon::Off);
        scalarRange_tableBtn->setIcon(icon2);

        verticalLayout->addWidget(scalarRange_tableBtn);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        enableOpacity_checkBox = new QCheckBox(tab);
        enableOpacity_checkBox->setObjectName(QString::fromUtf8("enableOpacity_checkBox"));

        verticalLayout_4->addWidget(enableOpacity_checkBox);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        color_tableWidget = new QTableWidget(groupBox);
        if (color_tableWidget->columnCount() < 4)
            color_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        color_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        color_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        color_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        color_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        color_tableWidget->setObjectName(QString::fromUtf8("color_tableWidget"));
        color_tableWidget->setRowCount(0);
        color_tableWidget->setColumnCount(4);

        verticalLayout_2->addWidget(color_tableWidget);

        opacity_tableWidget = new QTableWidget(groupBox);
        if (opacity_tableWidget->columnCount() < 2)
            opacity_tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        opacity_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        opacity_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        opacity_tableWidget->setObjectName(QString::fromUtf8("opacity_tableWidget"));
        opacity_tableWidget->setColumnCount(2);

        verticalLayout_2->addWidget(opacity_tableWidget);


        verticalLayout_4->addWidget(groupBox);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        zone_tableWidget = new QTableWidget(tab_2);
        if (zone_tableWidget->columnCount() < 4)
            zone_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        zone_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        zone_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        zone_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        zone_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        zone_tableWidget->setObjectName(QString::fromUtf8("zone_tableWidget"));
        zone_tableWidget->setColumnCount(4);

        verticalLayout_5->addWidget(zone_tableWidget);

        verticalSpacer_6 = new QSpacerItem(20, 291, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout_6->addWidget(tabWidget);


        retranslateUi(ScalarBarEditForm);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ScalarBarEditForm);
    } // setupUi

    void retranslateUi(QWidget *ScalarBarEditForm)
    {
        ScalarBarEditForm->setWindowTitle(QCoreApplication::translate("ScalarBarEditForm", "ScalarBar Edit", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ScalarBarEditForm", "ScalarBar", nullptr));
        label->setText(QCoreApplication::translate("ScalarBarEditForm", "column name", nullptr));
        label_3->setText(QCoreApplication::translate("ScalarBarEditForm", "font size", nullptr));
        label_2->setText(QCoreApplication::translate("ScalarBarEditForm", "number of label", nullptr));
        scalarRange_dataBtn->setText(QString());
        scalarRange_customBtn->setText(QString());
        scalarRange_tableBtn->setText(QString());
        enableOpacity_checkBox->setText(QCoreApplication::translate("ScalarBarEditForm", "Enable opacity mapping for surface", nullptr));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = color_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ScalarBarEditForm", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = color_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ScalarBarEditForm", "R", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = color_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ScalarBarEditForm", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = color_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ScalarBarEditForm", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = opacity_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ScalarBarEditForm", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = opacity_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ScalarBarEditForm", "Opacity", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ScalarBarEditForm", "Tab 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = zone_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ScalarBarEditForm", "Zone ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = zone_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ScalarBarEditForm", "Color", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = zone_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ScalarBarEditForm", "Zone ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = zone_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("ScalarBarEditForm", "Color", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ScalarBarEditForm", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ScalarBarEditForm", "Tab 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScalarBarEditForm: public Ui_ScalarBarEditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCALARBAREDITFORM_H
