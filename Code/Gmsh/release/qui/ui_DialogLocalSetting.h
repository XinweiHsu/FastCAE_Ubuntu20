/********************************************************************************
** Form generated from reading UI file 'DialogLocalSetting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOCALSETTING_H
#define UI_DIALOGLOCALSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LocalSettingDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *localType;
    QComboBox *comboBox;
    QGroupBox *localPoint;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *panel;
    QPushButton *geoSelectSurface;
    QHBoxLayout *horizontalLayout;
    QRadioButton *xAxis;
    QRadioButton *yAxis;
    QRadioButton *zAxis;
    QRadioButton *custom;
    QHBoxLayout *horizontalLayout_4;
    QLabel *xLabel;
    QDoubleSpinBox *xDoubleSpinBox;
    QLabel *yLabel;
    QDoubleSpinBox *yDoubleSpinBox;
    QLabel *zLabel;
    QDoubleSpinBox *zDoubleSpinBox;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *backgroundField;
    QSpacerItem *horizontalSpacer;
    QPushButton *PointAddButton;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_6;
    QVBoxLayout *pointLayout;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;
    QLabel *label_7;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeButton;

    void setupUi(QDialog *LocalSettingDialog)
    {
        if (LocalSettingDialog->objectName().isEmpty())
            LocalSettingDialog->setObjectName(QString::fromUtf8("LocalSettingDialog"));
        LocalSettingDialog->resize(435, 548);
        gridLayout_2 = new QGridLayout(LocalSettingDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        localType = new QLabel(LocalSettingDialog);
        localType->setObjectName(QString::fromUtf8("localType"));

        horizontalLayout_5->addWidget(localType);

        comboBox = new QComboBox(LocalSettingDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 9);

        gridLayout_2->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        localPoint = new QGroupBox(LocalSettingDialog);
        localPoint->setObjectName(QString::fromUtf8("localPoint"));
        gridLayout = new QGridLayout(localPoint);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(localPoint);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(localPoint);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(6);

        gridLayout->addWidget(doubleSpinBox_3, 6, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        panel = new QLabel(localPoint);
        panel->setObjectName(QString::fromUtf8("panel"));

        horizontalLayout_7->addWidget(panel);

        geoSelectSurface = new QPushButton(localPoint);
        geoSelectSurface->setObjectName(QString::fromUtf8("geoSelectSurface"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geoSelectSurface->sizePolicy().hasHeightForWidth());
        geoSelectSurface->setSizePolicy(sizePolicy);
        geoSelectSurface->setMinimumSize(QSize(32, 32));
        geoSelectSurface->setMaximumSize(QSize(32, 32));
        geoSelectSurface->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectbody.png);"));

        horizontalLayout_7->addWidget(geoSelectSurface);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        xAxis = new QRadioButton(localPoint);
        xAxis->setObjectName(QString::fromUtf8("xAxis"));

        horizontalLayout->addWidget(xAxis);

        yAxis = new QRadioButton(localPoint);
        yAxis->setObjectName(QString::fromUtf8("yAxis"));

        horizontalLayout->addWidget(yAxis);

        zAxis = new QRadioButton(localPoint);
        zAxis->setObjectName(QString::fromUtf8("zAxis"));

        horizontalLayout->addWidget(zAxis);

        custom = new QRadioButton(localPoint);
        custom->setObjectName(QString::fromUtf8("custom"));

        horizontalLayout->addWidget(custom);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        xLabel = new QLabel(localPoint);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));

        horizontalLayout_4->addWidget(xLabel);

        xDoubleSpinBox = new QDoubleSpinBox(localPoint);
        xDoubleSpinBox->setObjectName(QString::fromUtf8("xDoubleSpinBox"));

        horizontalLayout_4->addWidget(xDoubleSpinBox);

        yLabel = new QLabel(localPoint);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));

        horizontalLayout_4->addWidget(yLabel);

        yDoubleSpinBox = new QDoubleSpinBox(localPoint);
        yDoubleSpinBox->setObjectName(QString::fromUtf8("yDoubleSpinBox"));

        horizontalLayout_4->addWidget(yDoubleSpinBox);

        zLabel = new QLabel(localPoint);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));

        horizontalLayout_4->addWidget(zLabel);

        zDoubleSpinBox = new QDoubleSpinBox(localPoint);
        zDoubleSpinBox->setObjectName(QString::fromUtf8("zDoubleSpinBox"));

        horizontalLayout_4->addWidget(zDoubleSpinBox);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 4);
        horizontalLayout_4->setStretch(4, 1);
        horizontalLayout_4->setStretch(5, 4);

        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 2);

        label = new QLabel(localPoint);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 4, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(localPoint);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(doubleSpinBox->sizePolicy().hasHeightForWidth());
        doubleSpinBox->setSizePolicy(sizePolicy2);
        doubleSpinBox->setDecimals(6);
        doubleSpinBox->setMaximum(99999999999999.000000000000000);

        gridLayout->addWidget(doubleSpinBox, 4, 1, 1, 1);

        label_2 = new QLabel(localPoint);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(localPoint);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(6);

        gridLayout->addWidget(doubleSpinBox_2, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        backgroundField = new QCheckBox(localPoint);
        backgroundField->setObjectName(QString::fromUtf8("backgroundField"));

        horizontalLayout_2->addWidget(backgroundField);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        PointAddButton = new QPushButton(localPoint);
        PointAddButton->setObjectName(QString::fromUtf8("PointAddButton"));

        horizontalLayout_2->addWidget(PointAddButton);


        gridLayout->addLayout(horizontalLayout_2, 11, 0, 1, 2);

        doubleSpinBox_4 = new QDoubleSpinBox(localPoint);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(6);

        gridLayout->addWidget(doubleSpinBox_4, 7, 1, 1, 1);

        doubleSpinBox_5 = new QDoubleSpinBox(localPoint);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setDecimals(6);

        gridLayout->addWidget(doubleSpinBox_5, 8, 1, 1, 1);

        label_6 = new QLabel(localPoint);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        pointLayout = new QVBoxLayout();
        pointLayout->setSpacing(0);
        pointLayout->setObjectName(QString::fromUtf8("pointLayout"));

        gridLayout->addLayout(pointLayout, 0, 0, 1, 2);

        label_4 = new QLabel(localPoint);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_5 = new QLabel(localPoint);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        doubleSpinBox_6 = new QDoubleSpinBox(localPoint);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setDecimals(6);

        gridLayout->addWidget(doubleSpinBox_6, 9, 1, 1, 1);

        doubleSpinBox_7 = new QDoubleSpinBox(localPoint);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(6);

        gridLayout->addWidget(doubleSpinBox_7, 10, 1, 1, 1);

        label_7 = new QLabel(localPoint);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 10, 0, 1, 1);


        gridLayout_2->addWidget(localPoint, 1, 0, 1, 1);

        tableWidget = new QTableWidget(LocalSettingDialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        closeButton = new QPushButton(LocalSettingDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout_3->addWidget(closeButton);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 1);


        retranslateUi(LocalSettingDialog);

        QMetaObject::connectSlotsByName(LocalSettingDialog);
    } // setupUi

    void retranslateUi(QDialog *LocalSettingDialog)
    {
        LocalSettingDialog->setWindowTitle(QCoreApplication::translate("LocalSettingDialog", "Local Setting", nullptr));
        localType->setText(QCoreApplication::translate("LocalSettingDialog", "Type\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("LocalSettingDialog", "Point", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("LocalSettingDialog", "Box", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("LocalSettingDialog", "Ball", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("LocalSettingDialog", "Cylinder", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("LocalSettingDialog", "Solid", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("LocalSettingDialog", "Frustum", nullptr));

        localPoint->setTitle(QCoreApplication::translate("LocalSettingDialog", "Local", nullptr));
        label_3->setText(QCoreApplication::translate("LocalSettingDialog", "3", nullptr));
        panel->setText(QCoreApplication::translate("LocalSettingDialog", "Selected Solid\357\274\2100\357\274\211", nullptr));
        geoSelectSurface->setText(QString());
        xAxis->setText(QCoreApplication::translate("LocalSettingDialog", "X Axis", nullptr));
        yAxis->setText(QCoreApplication::translate("LocalSettingDialog", "Y Axis", nullptr));
        zAxis->setText(QCoreApplication::translate("LocalSettingDialog", "Z Axis", nullptr));
        custom->setText(QCoreApplication::translate("LocalSettingDialog", "Custom", nullptr));
        xLabel->setText(QCoreApplication::translate("LocalSettingDialog", "X:", nullptr));
        yLabel->setText(QCoreApplication::translate("LocalSettingDialog", "Y:", nullptr));
        zLabel->setText(QCoreApplication::translate("LocalSettingDialog", "Z:", nullptr));
        label->setText(QCoreApplication::translate("LocalSettingDialog", "1", nullptr));
        label_2->setText(QCoreApplication::translate("LocalSettingDialog", "2", nullptr));
        backgroundField->setText(QCoreApplication::translate("LocalSettingDialog", "Backgroun Field", nullptr));
        PointAddButton->setText(QCoreApplication::translate("LocalSettingDialog", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("LocalSettingDialog", "6", nullptr));
        label_4->setText(QCoreApplication::translate("LocalSettingDialog", "4", nullptr));
        label_5->setText(QCoreApplication::translate("LocalSettingDialog", "5", nullptr));
        label_7->setText(QCoreApplication::translate("LocalSettingDialog", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LocalSettingDialog", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LocalSettingDialog", "GeoInfo", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("LocalSettingDialog", "Value", nullptr));
        closeButton->setText(QCoreApplication::translate("LocalSettingDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LocalSettingDialog: public Ui_LocalSettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOCALSETTING_H
