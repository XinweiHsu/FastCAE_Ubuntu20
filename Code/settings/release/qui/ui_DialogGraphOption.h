/********************************************************************************
** Form generated from reading UI file 'DialogGraphOption.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGRAPHOPTION_H
#define UI_DIALOGGRAPHOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ecolorcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_GraphOptionDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *out_OkButton;
    QPushButton *out_ApplyButton;
    QPushButton *out_CancelButton;
    QTabWidget *tabWidget;
    QWidget *colorTab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    EColorComboBox *bgTopComboBox;
    EColorComboBox *bgBottomComboBox;
    EColorComboBox *highLightComboBox;
    EColorComboBox *preHighLightcomboBox;
    EColorComboBox *geoSurfaceComboBox;
    EColorComboBox *geoCurveComboBox;
    EColorComboBox *geoPointComboBox;
    EColorComboBox *meshFaceComboBox;
    EColorComboBox *meshEdgeConboBox;
    EColorComboBox *meshNodeComboBox;
    QGridLayout *gridLayout_4;
    QLabel *label_15;
    QSlider *TranspSlider;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_4;
    QDoubleSpinBox *meshNodeSpinBox;
    QDoubleSpinBox *meshEdgeSpinBox;
    QDoubleSpinBox *geoPointSpinBox;
    QDoubleSpinBox *geoCurveSpinBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *GraphOptionDialog)
    {
        if (GraphOptionDialog->objectName().isEmpty())
            GraphOptionDialog->setObjectName(QString::fromUtf8("GraphOptionDialog"));
        GraphOptionDialog->resize(479, 507);
        gridLayout = new QGridLayout(GraphOptionDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        out_OkButton = new QPushButton(GraphOptionDialog);
        out_OkButton->setObjectName(QString::fromUtf8("out_OkButton"));

        horizontalLayout->addWidget(out_OkButton);

        out_ApplyButton = new QPushButton(GraphOptionDialog);
        out_ApplyButton->setObjectName(QString::fromUtf8("out_ApplyButton"));

        horizontalLayout->addWidget(out_ApplyButton);

        out_CancelButton = new QPushButton(GraphOptionDialog);
        out_CancelButton->setObjectName(QString::fromUtf8("out_CancelButton"));

        horizontalLayout->addWidget(out_CancelButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget = new QTabWidget(GraphOptionDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        colorTab = new QWidget();
        colorTab->setObjectName(QString::fromUtf8("colorTab"));
        gridLayout_2 = new QGridLayout(colorTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(colorTab);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(colorTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(colorTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_14 = new QLabel(colorTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout->addWidget(label_14);

        label_4 = new QLabel(colorTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_10 = new QLabel(colorTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(colorTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        label_5 = new QLabel(colorTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(colorTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(colorTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bgTopComboBox = new EColorComboBox(colorTab);
        bgTopComboBox->setObjectName(QString::fromUtf8("bgTopComboBox"));

        verticalLayout_2->addWidget(bgTopComboBox);

        bgBottomComboBox = new EColorComboBox(colorTab);
        bgBottomComboBox->setObjectName(QString::fromUtf8("bgBottomComboBox"));

        verticalLayout_2->addWidget(bgBottomComboBox);

        highLightComboBox = new EColorComboBox(colorTab);
        highLightComboBox->setObjectName(QString::fromUtf8("highLightComboBox"));

        verticalLayout_2->addWidget(highLightComboBox);

        preHighLightcomboBox = new EColorComboBox(colorTab);
        preHighLightcomboBox->setObjectName(QString::fromUtf8("preHighLightcomboBox"));

        verticalLayout_2->addWidget(preHighLightcomboBox);

        geoSurfaceComboBox = new EColorComboBox(colorTab);
        geoSurfaceComboBox->setObjectName(QString::fromUtf8("geoSurfaceComboBox"));

        verticalLayout_2->addWidget(geoSurfaceComboBox);

        geoCurveComboBox = new EColorComboBox(colorTab);
        geoCurveComboBox->setObjectName(QString::fromUtf8("geoCurveComboBox"));

        verticalLayout_2->addWidget(geoCurveComboBox);

        geoPointComboBox = new EColorComboBox(colorTab);
        geoPointComboBox->setObjectName(QString::fromUtf8("geoPointComboBox"));

        verticalLayout_2->addWidget(geoPointComboBox);

        meshFaceComboBox = new EColorComboBox(colorTab);
        meshFaceComboBox->setObjectName(QString::fromUtf8("meshFaceComboBox"));

        verticalLayout_2->addWidget(meshFaceComboBox);

        meshEdgeConboBox = new EColorComboBox(colorTab);
        meshEdgeConboBox->setObjectName(QString::fromUtf8("meshEdgeConboBox"));

        verticalLayout_2->addWidget(meshEdgeConboBox);

        meshNodeComboBox = new EColorComboBox(colorTab);
        meshNodeComboBox->setObjectName(QString::fromUtf8("meshNodeComboBox"));

        verticalLayout_2->addWidget(meshNodeComboBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_15 = new QLabel(colorTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setTextFormat(Qt::AutoText);

        gridLayout_4->addWidget(label_15, 0, 0, 1, 1);

        TranspSlider = new QSlider(colorTab);
        TranspSlider->setObjectName(QString::fromUtf8("TranspSlider"));
        TranspSlider->setTracking(true);
        TranspSlider->setOrientation(Qt::Horizontal);
        TranspSlider->setInvertedAppearance(false);
        TranspSlider->setInvertedControls(true);
        TranspSlider->setTickPosition(QSlider::NoTicks);

        gridLayout_4->addWidget(TranspSlider, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 335, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        tabWidget->addTab(colorTab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_3->addWidget(label_12);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_3->addWidget(label_13);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        meshNodeSpinBox = new QDoubleSpinBox(tab_2);
        meshNodeSpinBox->setObjectName(QString::fromUtf8("meshNodeSpinBox"));
        meshNodeSpinBox->setMinimum(1.000000000000000);
        meshNodeSpinBox->setSingleStep(0.100000000000000);

        verticalLayout_4->addWidget(meshNodeSpinBox);

        meshEdgeSpinBox = new QDoubleSpinBox(tab_2);
        meshEdgeSpinBox->setObjectName(QString::fromUtf8("meshEdgeSpinBox"));
        meshEdgeSpinBox->setMinimum(1.000000000000000);
        meshEdgeSpinBox->setSingleStep(0.100000000000000);

        verticalLayout_4->addWidget(meshEdgeSpinBox);

        geoPointSpinBox = new QDoubleSpinBox(tab_2);
        geoPointSpinBox->setObjectName(QString::fromUtf8("geoPointSpinBox"));
        geoPointSpinBox->setMinimum(1.000000000000000);
        geoPointSpinBox->setSingleStep(0.100000000000000);

        verticalLayout_4->addWidget(geoPointSpinBox);

        geoCurveSpinBox = new QDoubleSpinBox(tab_2);
        geoCurveSpinBox->setObjectName(QString::fromUtf8("geoCurveSpinBox"));
        geoCurveSpinBox->setMinimum(1.000000000000000);
        geoCurveSpinBox->setSingleStep(0.100000000000000);

        verticalLayout_4->addWidget(geoCurveSpinBox);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 335, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(GraphOptionDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GraphOptionDialog);
    } // setupUi

    void retranslateUi(QDialog *GraphOptionDialog)
    {
        GraphOptionDialog->setWindowTitle(QCoreApplication::translate("GraphOptionDialog", "Graph Option", nullptr));
        out_OkButton->setText(QCoreApplication::translate("GraphOptionDialog", "OK", nullptr));
        out_ApplyButton->setText(QCoreApplication::translate("GraphOptionDialog", "Apply", nullptr));
        out_CancelButton->setText(QCoreApplication::translate("GraphOptionDialog", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("GraphOptionDialog", "Background(Top)", nullptr));
        label_2->setText(QCoreApplication::translate("GraphOptionDialog", "Background(Bottom)", nullptr));
        label_3->setText(QCoreApplication::translate("GraphOptionDialog", "HighLight Color", nullptr));
        label_14->setText(QCoreApplication::translate("GraphOptionDialog", "Pre Highlight Color", nullptr));
        label_4->setText(QCoreApplication::translate("GraphOptionDialog", "Geometry Surface Color", nullptr));
        label_10->setText(QCoreApplication::translate("GraphOptionDialog", "Geometry Curve Color", nullptr));
        label_11->setText(QCoreApplication::translate("GraphOptionDialog", "Geometry Point Color", nullptr));
        label_5->setText(QCoreApplication::translate("GraphOptionDialog", "Mesh Face Color", nullptr));
        label_6->setText(QCoreApplication::translate("GraphOptionDialog", "Mesh Edge Color", nullptr));
        label_7->setText(QCoreApplication::translate("GraphOptionDialog", "Mesh Node Color", nullptr));
        label_15->setText(QCoreApplication::translate("GraphOptionDialog", " Transparency", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(colorTab), QCoreApplication::translate("GraphOptionDialog", "Genreal Color", nullptr));
        label_8->setText(QCoreApplication::translate("GraphOptionDialog", "Mesh Node Size", nullptr));
        label_9->setText(QCoreApplication::translate("GraphOptionDialog", "Mesh Edge Width", nullptr));
        label_12->setText(QCoreApplication::translate("GraphOptionDialog", "Geometry Point Size", nullptr));
        label_13->setText(QCoreApplication::translate("GraphOptionDialog", "Geometry Curve Width", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("GraphOptionDialog", "Scalar and Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphOptionDialog: public Ui_GraphOptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGRAPHOPTION_H
