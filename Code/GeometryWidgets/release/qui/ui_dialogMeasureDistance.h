/********************************************************************************
** Form generated from reading UI file 'dialogMeasureDistance.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMEASUREDISTANCE_H
#define UI_DIALOGMEASUREDISTANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasureaDistanceDialog
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBoxType;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *topedgelabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *geoSelectPoint;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *X1;
    QLabel *label_4;
    QLabel *Y1;
    QLabel *label_8;
    QLabel *Z1;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_2;
    QLabel *X2;
    QLabel *label_11;
    QLabel *Y2;
    QLabel *label_9;
    QLabel *Z2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *disLabel;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *topedgelabel_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *geoSelectCurve;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QLabel *label_6;
    QLabel *disLabel_2;
    QLabel *label_7;
    QWidget *tab_3;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_10;
    QLabel *topedgelabel_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *geoSelectSurface_1;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_11;
    QLabel *label_10;
    QLabel *disLabel_3;
    QLabel *label_12;
    QWidget *tab_4;
    QGridLayout *gridLayout_14;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_12;
    QLabel *topedgelabel_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *geoSelectSurface;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_13;
    QLabel *label_13;
    QLabel *disLabel_4;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeButton;

    void setupUi(QDialog *MeasureaDistanceDialog)
    {
        if (MeasureaDistanceDialog->objectName().isEmpty())
            MeasureaDistanceDialog->setObjectName(QString::fromUtf8("MeasureaDistanceDialog"));
        MeasureaDistanceDialog->resize(408, 430);
        gridLayout_4 = new QGridLayout(MeasureaDistanceDialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(MeasureaDistanceDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_5);

        comboBoxType = new QComboBox(MeasureaDistanceDialog);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxType->sizePolicy().hasHeightForWidth());
        comboBoxType->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(comboBoxType);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabWidget = new QTabWidget(MeasureaDistanceDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_7 = new QGridLayout(tab);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        topedgelabel = new QLabel(groupBox);
        topedgelabel->setObjectName(QString::fromUtf8("topedgelabel"));

        gridLayout_2->addWidget(topedgelabel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(207, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        geoSelectPoint = new QPushButton(groupBox);
        geoSelectPoint->setObjectName(QString::fromUtf8("geoSelectPoint"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(geoSelectPoint->sizePolicy().hasHeightForWidth());
        geoSelectPoint->setSizePolicy(sizePolicy2);
        geoSelectPoint->setMinimumSize(QSize(32, 32));
        geoSelectPoint->setMaximumSize(QSize(32, 32));
        geoSelectPoint->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectpoint.png);"));
        geoSelectPoint->setCheckable(true);

        gridLayout_2->addWidget(geoSelectPoint, 0, 2, 1, 1);


        gridLayout_7->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        X1 = new QLabel(groupBox_3);
        X1->setObjectName(QString::fromUtf8("X1"));
        X1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(X1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(5, 16777215));

        horizontalLayout->addWidget(label_4);

        Y1 = new QLabel(groupBox_3);
        Y1->setObjectName(QString::fromUtf8("Y1"));
        Y1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Y1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(5, 16777215));

        horizontalLayout->addWidget(label_8);

        Z1 = new QLabel(groupBox_3);
        Z1->setObjectName(QString::fromUtf8("Z1"));
        Z1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Z1);


        gridLayout_5->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        X2 = new QLabel(groupBox_3);
        X2->setObjectName(QString::fromUtf8("X2"));
        X2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(X2);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(5, 16777215));

        horizontalLayout_2->addWidget(label_11);

        Y2 = new QLabel(groupBox_3);
        Y2->setObjectName(QString::fromUtf8("Y2"));
        Y2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(Y2);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(5, 16777215));

        horizontalLayout_2->addWidget(label_9);

        Z2 = new QLabel(groupBox_3);
        Z2->setObjectName(QString::fromUtf8("Z2"));
        Z2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(Z2);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        disLabel = new QLabel(groupBox_2);
        disLabel->setObjectName(QString::fromUtf8("disLabel"));

        gridLayout->addWidget(disLabel, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_9 = new QGridLayout(tab_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        topedgelabel_2 = new QLabel(groupBox_4);
        topedgelabel_2->setObjectName(QString::fromUtf8("topedgelabel_2"));

        gridLayout_6->addWidget(topedgelabel_2, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(207, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        geoSelectCurve = new QPushButton(groupBox_4);
        geoSelectCurve->setObjectName(QString::fromUtf8("geoSelectCurve"));
        sizePolicy2.setHeightForWidth(geoSelectCurve->sizePolicy().hasHeightForWidth());
        geoSelectCurve->setSizePolicy(sizePolicy2);
        geoSelectCurve->setMinimumSize(QSize(32, 32));
        geoSelectCurve->setMaximumSize(QSize(32, 32));
        geoSelectCurve->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));
        geoSelectCurve->setCheckable(true);

        gridLayout_6->addWidget(geoSelectCurve, 0, 2, 1, 1);


        gridLayout_9->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_8->addWidget(label_6, 0, 0, 1, 1);

        disLabel_2 = new QLabel(groupBox_5);
        disLabel_2->setObjectName(QString::fromUtf8("disLabel_2"));

        gridLayout_8->addWidget(disLabel_2, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setMaximumSize(QSize(30, 16777215));

        gridLayout_8->addWidget(label_7, 0, 2, 1, 1);


        gridLayout_9->addWidget(groupBox_5, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_15 = new QGridLayout(tab_3);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_10 = new QGridLayout(groupBox_6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        topedgelabel_3 = new QLabel(groupBox_6);
        topedgelabel_3->setObjectName(QString::fromUtf8("topedgelabel_3"));

        gridLayout_10->addWidget(topedgelabel_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(207, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        geoSelectSurface_1 = new QPushButton(groupBox_6);
        geoSelectSurface_1->setObjectName(QString::fromUtf8("geoSelectSurface_1"));
        sizePolicy2.setHeightForWidth(geoSelectSurface_1->sizePolicy().hasHeightForWidth());
        geoSelectSurface_1->setSizePolicy(sizePolicy2);
        geoSelectSurface_1->setMinimumSize(QSize(32, 32));
        geoSelectSurface_1->setMaximumSize(QSize(32, 32));
        geoSelectSurface_1->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectface.png);"));
        geoSelectSurface_1->setCheckable(true);

        gridLayout_10->addWidget(geoSelectSurface_1, 0, 2, 1, 1);


        gridLayout_15->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_11 = new QGridLayout(groupBox_7);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_11->addWidget(label_10, 0, 0, 1, 1);

        disLabel_3 = new QLabel(groupBox_7);
        disLabel_3->setObjectName(QString::fromUtf8("disLabel_3"));

        gridLayout_11->addWidget(disLabel_3, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setMaximumSize(QSize(30, 16777215));

        gridLayout_11->addWidget(label_12, 0, 2, 1, 1);


        gridLayout_15->addWidget(groupBox_7, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_14 = new QGridLayout(tab_4);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        groupBox_8 = new QGroupBox(tab_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_12 = new QGridLayout(groupBox_8);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        topedgelabel_4 = new QLabel(groupBox_8);
        topedgelabel_4->setObjectName(QString::fromUtf8("topedgelabel_4"));

        gridLayout_12->addWidget(topedgelabel_4, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(207, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        geoSelectSurface = new QPushButton(groupBox_8);
        geoSelectSurface->setObjectName(QString::fromUtf8("geoSelectSurface"));
        sizePolicy2.setHeightForWidth(geoSelectSurface->sizePolicy().hasHeightForWidth());
        geoSelectSurface->setSizePolicy(sizePolicy2);
        geoSelectSurface->setMinimumSize(QSize(32, 32));
        geoSelectSurface->setMaximumSize(QSize(32, 32));
        geoSelectSurface->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectbody.png);"));
        geoSelectSurface->setCheckable(true);

        gridLayout_12->addWidget(geoSelectSurface, 0, 2, 1, 1);


        gridLayout_14->addWidget(groupBox_8, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(tab_4);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_13 = new QGridLayout(groupBox_9);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_13 = new QLabel(groupBox_9);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_13->addWidget(label_13, 0, 0, 1, 1);

        disLabel_4 = new QLabel(groupBox_9);
        disLabel_4->setObjectName(QString::fromUtf8("disLabel_4"));

        gridLayout_13->addWidget(disLabel_4, 0, 1, 1, 1);

        label_15 = new QLabel(groupBox_9);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);
        label_15->setMaximumSize(QSize(30, 16777215));

        gridLayout_13->addWidget(label_15, 0, 2, 1, 1);


        gridLayout_14->addWidget(groupBox_9, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout_3->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        closeButton = new QPushButton(MeasureaDistanceDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout_4->addWidget(closeButton);


        gridLayout_4->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        retranslateUi(MeasureaDistanceDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MeasureaDistanceDialog);
    } // setupUi

    void retranslateUi(QDialog *MeasureaDistanceDialog)
    {
        MeasureaDistanceDialog->setWindowTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Distance", nullptr));
        label_5->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Calculate", nullptr));
        comboBoxType->setItemText(0, QCoreApplication::translate("MeasureaDistanceDialog", "MeasureDistance", nullptr));
        comboBoxType->setItemText(1, QCoreApplication::translate("MeasureaDistanceDialog", "The Length Of Curve", nullptr));
        comboBoxType->setItemText(2, QCoreApplication::translate("MeasureaDistanceDialog", "The Area Of Surface", nullptr));
        comboBoxType->setItemText(3, QCoreApplication::translate("MeasureaDistanceDialog", "The Volume Of Solid", nullptr));

        groupBox->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Object", nullptr));
        topedgelabel->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Selected Object(0)", nullptr));
        geoSelectPoint->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Location", nullptr));
        label_2->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Point 1:", nullptr));
        X1->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.0", nullptr));
        label_4->setText(QCoreApplication::translate("MeasureaDistanceDialog", ",", nullptr));
        Y1->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.0", nullptr));
        label_8->setText(QCoreApplication::translate("MeasureaDistanceDialog", ",", nullptr));
        Z1->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.0", nullptr));
        label_14->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Point 2:", nullptr));
        X2->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.0", nullptr));
        label_11->setText(QCoreApplication::translate("MeasureaDistanceDialog", ",", nullptr));
        Y2->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.0", nullptr));
        label_9->setText(QCoreApplication::translate("MeasureaDistanceDialog", ",", nullptr));
        Z2->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.0", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Distance", nullptr));
        label->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Distance:", nullptr));
        disLabel->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.00", nullptr));
        label_3->setText(QCoreApplication::translate("MeasureaDistanceDialog", "mm", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MeasureaDistanceDialog", "Tab 1", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Object", nullptr));
        topedgelabel_2->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Selected Object(0)", nullptr));
        geoSelectCurve->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Length", nullptr));
        label_6->setText(QCoreApplication::translate("MeasureaDistanceDialog", "The Length is:", nullptr));
        disLabel_2->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.00", nullptr));
        label_7->setText(QCoreApplication::translate("MeasureaDistanceDialog", "mm", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MeasureaDistanceDialog", "Tab 2", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Object", nullptr));
        topedgelabel_3->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Selected Object(0)", nullptr));
        geoSelectSurface_1->setText(QString());
        groupBox_7->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Area", nullptr));
        label_10->setText(QCoreApplication::translate("MeasureaDistanceDialog", "The Area is:", nullptr));
        disLabel_3->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.00", nullptr));
        label_12->setText(QCoreApplication::translate("MeasureaDistanceDialog", "mm^2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MeasureaDistanceDialog", "\351\241\265", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Object", nullptr));
        topedgelabel_4->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Selected Object(0)", nullptr));
        geoSelectSurface->setText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("MeasureaDistanceDialog", "Volume", nullptr));
        label_13->setText(QCoreApplication::translate("MeasureaDistanceDialog", "The Volume is:", nullptr));
        disLabel_4->setText(QCoreApplication::translate("MeasureaDistanceDialog", "0.00", nullptr));
        label_15->setText(QCoreApplication::translate("MeasureaDistanceDialog", "mm^3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MeasureaDistanceDialog", "\351\241\265", nullptr));
        closeButton->setText(QCoreApplication::translate("MeasureaDistanceDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasureaDistanceDialog: public Ui_MeasureaDistanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMEASUREDISTANCE_H
