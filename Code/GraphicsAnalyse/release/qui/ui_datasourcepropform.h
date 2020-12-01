/********************************************************************************
** Form generated from reading UI file 'datasourcepropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASOURCEPROPFORM_H
#define UI_DATASOURCEPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataSourcePropForm
{
public:
    QVBoxLayout *verticalLayout_10;
    QComboBox *grid_blocks_comboBox;
    QGroupBox *block_groupBox;
    QVBoxLayout *verticalLayout_5;
    QListWidget *block_listWidget;
    QGroupBox *particles_groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_17;
    QComboBox *particlesType_comboBox;
    QLabel *resolution;
    QSpinBox *particlesRes_spinBox;
    QLabel *label_10;
    QDoubleSpinBox *particlesRadius_doubleSpinBox;
    QGroupBox *lineType_groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *lineType_comboBox;
    QTabWidget *lineType_tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *tipRes_spinBox;
    QLabel *label_3;
    QDoubleSpinBox *tipRad_doubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *tipLen_doubleSpinBox;
    QLabel *label_5;
    QSpinBox *shaftRes_spinBox;
    QLabel *label_6;
    QDoubleSpinBox *shaftRad_doubleSpinBox;
    QLabel *scaleFactor_label;
    QDoubleSpinBox *scaleFactor_doubleSpinBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QSlider *Res_cone_horizontalSlider;
    QLineEdit *Res_cone_lineEdit;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *RadCone_doubleSpinBox;
    QLabel *label_9;
    QDoubleSpinBox *ConeHei_doubleSpinBox;
    QLabel *center_Cone_label;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *centerX_Cone_lineEdit;
    QLineEdit *centerY_Cone_lineEdit;
    QLineEdit *centerZ_Cone_lineEdit;
    QLabel *direction_Cone_label;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *DirX_lineEdit;
    QLineEdit *DirY_lineEdit;
    QLineEdit *DirZ_lineEdit;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_6;
    QSlider *Res_Cylinder_horizontalSlider;
    QLineEdit *Res_Cylinder_lineEdit;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *RadCylinder_doubleSpinBox;
    QLabel *label_12;
    QDoubleSpinBox *HeiCylinder_doubleSpinBox;
    QLabel *center_Cylinder_label;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *CenterX_Cylinder_lineEdit;
    QLineEdit *CenterY_Cylinder_lineEdit;
    QLineEdit *CenterZ_Cylinder_lineEdit;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *seaBottom_groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *seaBottom_checkBox;
    QPushButton *seaBotColor_pushButton;
    QGroupBox *displace_groupBox;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *displace_checkBox;
    QGroupBox *disPara_groupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *displace_lineEdit;
    QPushButton *displace_pushButton;
    QGridLayout *gridLayout_5;
    QLabel *label_11;
    QSpinBox *pos_spinBox;
    QLabel *label_13;
    QSpinBox *interval_spinBox;
    QLabel *label_16;
    QDoubleSpinBox *zoomFactor_doubleSpinBox;
    QCheckBox *gravityCenter_checkBox;
    QGroupBox *gravity_groupBox;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *gravityX_lineEdit;
    QLineEdit *gravityY_lineEdit;
    QLineEdit *gravityZ_lineEdit;
    QGroupBox *comModel_groupBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *comModel_checkBox;
    QComboBox *comModel_comboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DataSourcePropForm)
    {
        if (DataSourcePropForm->objectName().isEmpty())
            DataSourcePropForm->setObjectName(QString::fromUtf8("DataSourcePropForm"));
        DataSourcePropForm->resize(399, 1099);
        verticalLayout_10 = new QVBoxLayout(DataSourcePropForm);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        grid_blocks_comboBox = new QComboBox(DataSourcePropForm);
        grid_blocks_comboBox->addItem(QString());
        grid_blocks_comboBox->addItem(QString());
        grid_blocks_comboBox->setObjectName(QString::fromUtf8("grid_blocks_comboBox"));

        verticalLayout_10->addWidget(grid_blocks_comboBox);

        block_groupBox = new QGroupBox(DataSourcePropForm);
        block_groupBox->setObjectName(QString::fromUtf8("block_groupBox"));
        verticalLayout_5 = new QVBoxLayout(block_groupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        block_listWidget = new QListWidget(block_groupBox);
        block_listWidget->setObjectName(QString::fromUtf8("block_listWidget"));

        verticalLayout_5->addWidget(block_listWidget);


        verticalLayout_10->addWidget(block_groupBox);

        particles_groupBox = new QGroupBox(DataSourcePropForm);
        particles_groupBox->setObjectName(QString::fromUtf8("particles_groupBox"));
        gridLayout_4 = new QGridLayout(particles_groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_17 = new QLabel(particles_groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 0, 0, 1, 1);

        particlesType_comboBox = new QComboBox(particles_groupBox);
        particlesType_comboBox->addItem(QString());
        particlesType_comboBox->addItem(QString());
        particlesType_comboBox->setObjectName(QString::fromUtf8("particlesType_comboBox"));

        gridLayout_4->addWidget(particlesType_comboBox, 0, 1, 1, 1);

        resolution = new QLabel(particles_groupBox);
        resolution->setObjectName(QString::fromUtf8("resolution"));

        gridLayout_4->addWidget(resolution, 1, 0, 1, 1);

        particlesRes_spinBox = new QSpinBox(particles_groupBox);
        particlesRes_spinBox->setObjectName(QString::fromUtf8("particlesRes_spinBox"));
        particlesRes_spinBox->setMinimum(3);
        particlesRes_spinBox->setMaximum(20);
        particlesRes_spinBox->setValue(10);

        gridLayout_4->addWidget(particlesRes_spinBox, 1, 1, 1, 1);

        label_10 = new QLabel(particles_groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        particlesRadius_doubleSpinBox = new QDoubleSpinBox(particles_groupBox);
        particlesRadius_doubleSpinBox->setObjectName(QString::fromUtf8("particlesRadius_doubleSpinBox"));
        particlesRadius_doubleSpinBox->setDecimals(10);
        particlesRadius_doubleSpinBox->setMinimum(0.000000000000000);
        particlesRadius_doubleSpinBox->setSingleStep(0.001000000000000);
        particlesRadius_doubleSpinBox->setValue(0.100000000000000);

        gridLayout_4->addWidget(particlesRadius_doubleSpinBox, 2, 1, 1, 1);


        verticalLayout_10->addWidget(particles_groupBox);

        lineType_groupBox = new QGroupBox(DataSourcePropForm);
        lineType_groupBox->setObjectName(QString::fromUtf8("lineType_groupBox"));
        verticalLayout_7 = new QVBoxLayout(lineType_groupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(lineType_groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineType_comboBox = new QComboBox(lineType_groupBox);
        lineType_comboBox->addItem(QString());
        lineType_comboBox->addItem(QString());
        lineType_comboBox->setObjectName(QString::fromUtf8("lineType_comboBox"));

        horizontalLayout->addWidget(lineType_comboBox);


        verticalLayout_7->addLayout(horizontalLayout);

        lineType_tabWidget = new QTabWidget(lineType_groupBox);
        lineType_tabWidget->setObjectName(QString::fromUtf8("lineType_tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        tipRes_spinBox = new QSpinBox(tab);
        tipRes_spinBox->setObjectName(QString::fromUtf8("tipRes_spinBox"));
        tipRes_spinBox->setMinimum(1);
        tipRes_spinBox->setMaximum(128);
        tipRes_spinBox->setValue(6);
        tipRes_spinBox->setDisplayIntegerBase(10);

        gridLayout->addWidget(tipRes_spinBox, 0, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        tipRad_doubleSpinBox = new QDoubleSpinBox(tab);
        tipRad_doubleSpinBox->setObjectName(QString::fromUtf8("tipRad_doubleSpinBox"));
        tipRad_doubleSpinBox->setMaximum(1.000000000000000);
        tipRad_doubleSpinBox->setSingleStep(0.010000000000000);
        tipRad_doubleSpinBox->setValue(0.080000000000000);

        gridLayout->addWidget(tipRad_doubleSpinBox, 1, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        tipLen_doubleSpinBox = new QDoubleSpinBox(tab);
        tipLen_doubleSpinBox->setObjectName(QString::fromUtf8("tipLen_doubleSpinBox"));
        tipLen_doubleSpinBox->setMaximum(1.000000000000000);
        tipLen_doubleSpinBox->setSingleStep(0.010000000000000);
        tipLen_doubleSpinBox->setValue(0.350000000000000);

        gridLayout->addWidget(tipLen_doubleSpinBox, 2, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        shaftRes_spinBox = new QSpinBox(tab);
        shaftRes_spinBox->setObjectName(QString::fromUtf8("shaftRes_spinBox"));
        shaftRes_spinBox->setMinimum(1);
        shaftRes_spinBox->setMaximum(128);
        shaftRes_spinBox->setValue(6);

        gridLayout->addWidget(shaftRes_spinBox, 3, 1, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        shaftRad_doubleSpinBox = new QDoubleSpinBox(tab);
        shaftRad_doubleSpinBox->setObjectName(QString::fromUtf8("shaftRad_doubleSpinBox"));
        shaftRad_doubleSpinBox->setMaximum(1.000000000000000);
        shaftRad_doubleSpinBox->setSingleStep(0.010000000000000);
        shaftRad_doubleSpinBox->setValue(0.080000000000000);

        gridLayout->addWidget(shaftRad_doubleSpinBox, 4, 1, 1, 1);

        scaleFactor_label = new QLabel(tab);
        scaleFactor_label->setObjectName(QString::fromUtf8("scaleFactor_label"));

        gridLayout->addWidget(scaleFactor_label, 5, 0, 1, 1);

        scaleFactor_doubleSpinBox = new QDoubleSpinBox(tab);
        scaleFactor_doubleSpinBox->setObjectName(QString::fromUtf8("scaleFactor_doubleSpinBox"));
        scaleFactor_doubleSpinBox->setDecimals(6);
        scaleFactor_doubleSpinBox->setMaximum(0.010000000000000);
        scaleFactor_doubleSpinBox->setSingleStep(0.000010000000000);
        scaleFactor_doubleSpinBox->setValue(0.000200000000000);

        gridLayout->addWidget(scaleFactor_doubleSpinBox, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        lineType_tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Res_cone_horizontalSlider = new QSlider(tab_2);
        Res_cone_horizontalSlider->setObjectName(QString::fromUtf8("Res_cone_horizontalSlider"));
        Res_cone_horizontalSlider->setMinimum(1);
        Res_cone_horizontalSlider->setMaximum(10);
        Res_cone_horizontalSlider->setValue(6);
        Res_cone_horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(Res_cone_horizontalSlider);

        Res_cone_lineEdit = new QLineEdit(tab_2);
        Res_cone_lineEdit->setObjectName(QString::fromUtf8("Res_cone_lineEdit"));
        Res_cone_lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(Res_cone_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        RadCone_doubleSpinBox = new QDoubleSpinBox(tab_2);
        RadCone_doubleSpinBox->setObjectName(QString::fromUtf8("RadCone_doubleSpinBox"));
        RadCone_doubleSpinBox->setMinimum(0.000000000000000);
        RadCone_doubleSpinBox->setMaximum(10.000000000000000);
        RadCone_doubleSpinBox->setSingleStep(0.010000000000000);
        RadCone_doubleSpinBox->setValue(0.100000000000000);

        horizontalLayout_3->addWidget(RadCone_doubleSpinBox);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        ConeHei_doubleSpinBox = new QDoubleSpinBox(tab_2);
        ConeHei_doubleSpinBox->setObjectName(QString::fromUtf8("ConeHei_doubleSpinBox"));
        ConeHei_doubleSpinBox->setMaximum(10.000000000000000);
        ConeHei_doubleSpinBox->setSingleStep(0.010000000000000);
        ConeHei_doubleSpinBox->setValue(0.600000000000000);

        horizontalLayout_3->addWidget(ConeHei_doubleSpinBox);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        center_Cone_label = new QLabel(tab_2);
        center_Cone_label->setObjectName(QString::fromUtf8("center_Cone_label"));

        gridLayout_2->addWidget(center_Cone_label, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        centerX_Cone_lineEdit = new QLineEdit(tab_2);
        centerX_Cone_lineEdit->setObjectName(QString::fromUtf8("centerX_Cone_lineEdit"));

        horizontalLayout_4->addWidget(centerX_Cone_lineEdit);

        centerY_Cone_lineEdit = new QLineEdit(tab_2);
        centerY_Cone_lineEdit->setObjectName(QString::fromUtf8("centerY_Cone_lineEdit"));

        horizontalLayout_4->addWidget(centerY_Cone_lineEdit);

        centerZ_Cone_lineEdit = new QLineEdit(tab_2);
        centerZ_Cone_lineEdit->setObjectName(QString::fromUtf8("centerZ_Cone_lineEdit"));

        horizontalLayout_4->addWidget(centerZ_Cone_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        direction_Cone_label = new QLabel(tab_2);
        direction_Cone_label->setObjectName(QString::fromUtf8("direction_Cone_label"));

        gridLayout_2->addWidget(direction_Cone_label, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        DirX_lineEdit = new QLineEdit(tab_2);
        DirX_lineEdit->setObjectName(QString::fromUtf8("DirX_lineEdit"));

        horizontalLayout_5->addWidget(DirX_lineEdit);

        DirY_lineEdit = new QLineEdit(tab_2);
        DirY_lineEdit->setObjectName(QString::fromUtf8("DirY_lineEdit"));

        horizontalLayout_5->addWidget(DirY_lineEdit);

        DirZ_lineEdit = new QLineEdit(tab_2);
        DirZ_lineEdit->setObjectName(QString::fromUtf8("DirZ_lineEdit"));

        horizontalLayout_5->addWidget(DirZ_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_5, 3, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        lineType_tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Res_Cylinder_horizontalSlider = new QSlider(tab_3);
        Res_Cylinder_horizontalSlider->setObjectName(QString::fromUtf8("Res_Cylinder_horizontalSlider"));
        Res_Cylinder_horizontalSlider->setMinimum(1);
        Res_Cylinder_horizontalSlider->setMaximum(10);
        Res_Cylinder_horizontalSlider->setSingleStep(1);
        Res_Cylinder_horizontalSlider->setValue(6);
        Res_Cylinder_horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(Res_Cylinder_horizontalSlider);

        Res_Cylinder_lineEdit = new QLineEdit(tab_3);
        Res_Cylinder_lineEdit->setObjectName(QString::fromUtf8("Res_Cylinder_lineEdit"));
        Res_Cylinder_lineEdit->setReadOnly(true);

        horizontalLayout_6->addWidget(Res_Cylinder_lineEdit);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        RadCylinder_doubleSpinBox = new QDoubleSpinBox(tab_3);
        RadCylinder_doubleSpinBox->setObjectName(QString::fromUtf8("RadCylinder_doubleSpinBox"));
        RadCylinder_doubleSpinBox->setMaximum(10.000000000000000);
        RadCylinder_doubleSpinBox->setSingleStep(0.010000000000000);
        RadCylinder_doubleSpinBox->setValue(0.100000000000000);

        horizontalLayout_7->addWidget(RadCylinder_doubleSpinBox);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_7->addWidget(label_12);

        HeiCylinder_doubleSpinBox = new QDoubleSpinBox(tab_3);
        HeiCylinder_doubleSpinBox->setObjectName(QString::fromUtf8("HeiCylinder_doubleSpinBox"));
        HeiCylinder_doubleSpinBox->setMinimum(0.000000000000000);
        HeiCylinder_doubleSpinBox->setMaximum(10.000000000000000);
        HeiCylinder_doubleSpinBox->setSingleStep(0.010000000000000);
        HeiCylinder_doubleSpinBox->setValue(0.100000000000000);

        horizontalLayout_7->addWidget(HeiCylinder_doubleSpinBox);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        center_Cylinder_label = new QLabel(tab_3);
        center_Cylinder_label->setObjectName(QString::fromUtf8("center_Cylinder_label"));

        gridLayout_3->addWidget(center_Cylinder_label, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        CenterX_Cylinder_lineEdit = new QLineEdit(tab_3);
        CenterX_Cylinder_lineEdit->setObjectName(QString::fromUtf8("CenterX_Cylinder_lineEdit"));

        horizontalLayout_8->addWidget(CenterX_Cylinder_lineEdit);

        CenterY_Cylinder_lineEdit = new QLineEdit(tab_3);
        CenterY_Cylinder_lineEdit->setObjectName(QString::fromUtf8("CenterY_Cylinder_lineEdit"));

        horizontalLayout_8->addWidget(CenterY_Cylinder_lineEdit);

        CenterZ_Cylinder_lineEdit = new QLineEdit(tab_3);
        CenterZ_Cylinder_lineEdit->setObjectName(QString::fromUtf8("CenterZ_Cylinder_lineEdit"));

        horizontalLayout_8->addWidget(CenterZ_Cylinder_lineEdit);


        gridLayout_3->addLayout(horizontalLayout_8, 2, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        lineType_tabWidget->addTab(tab_3, QString());

        verticalLayout_7->addWidget(lineType_tabWidget);

        seaBottom_groupBox = new QGroupBox(lineType_groupBox);
        seaBottom_groupBox->setObjectName(QString::fromUtf8("seaBottom_groupBox"));
        seaBottom_groupBox->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(seaBottom_groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        seaBottom_checkBox = new QCheckBox(seaBottom_groupBox);
        seaBottom_checkBox->setObjectName(QString::fromUtf8("seaBottom_checkBox"));

        verticalLayout_2->addWidget(seaBottom_checkBox);

        seaBotColor_pushButton = new QPushButton(seaBottom_groupBox);
        seaBotColor_pushButton->setObjectName(QString::fromUtf8("seaBotColor_pushButton"));

        verticalLayout_2->addWidget(seaBotColor_pushButton);


        verticalLayout_7->addWidget(seaBottom_groupBox);


        verticalLayout_10->addWidget(lineType_groupBox);

        displace_groupBox = new QGroupBox(DataSourcePropForm);
        displace_groupBox->setObjectName(QString::fromUtf8("displace_groupBox"));
        verticalLayout_9 = new QVBoxLayout(displace_groupBox);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        displace_checkBox = new QCheckBox(displace_groupBox);
        displace_checkBox->setObjectName(QString::fromUtf8("displace_checkBox"));

        verticalLayout_9->addWidget(displace_checkBox);

        disPara_groupBox = new QGroupBox(displace_groupBox);
        disPara_groupBox->setObjectName(QString::fromUtf8("disPara_groupBox"));
        verticalLayout_8 = new QVBoxLayout(disPara_groupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        displace_lineEdit = new QLineEdit(disPara_groupBox);
        displace_lineEdit->setObjectName(QString::fromUtf8("displace_lineEdit"));
        displace_lineEdit->setReadOnly(true);

        horizontalLayout_9->addWidget(displace_lineEdit);

        displace_pushButton = new QPushButton(disPara_groupBox);
        displace_pushButton->setObjectName(QString::fromUtf8("displace_pushButton"));

        horizontalLayout_9->addWidget(displace_pushButton);

        horizontalLayout_9->setStretch(0, 8);
        horizontalLayout_9->setStretch(1, 2);

        verticalLayout_8->addLayout(horizontalLayout_9);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_11 = new QLabel(disPara_groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 0, 1, 1);

        pos_spinBox = new QSpinBox(disPara_groupBox);
        pos_spinBox->setObjectName(QString::fromUtf8("pos_spinBox"));

        gridLayout_5->addWidget(pos_spinBox, 0, 1, 1, 1);

        label_13 = new QLabel(disPara_groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 1, 0, 1, 1);

        interval_spinBox = new QSpinBox(disPara_groupBox);
        interval_spinBox->setObjectName(QString::fromUtf8("interval_spinBox"));

        gridLayout_5->addWidget(interval_spinBox, 1, 1, 1, 1);

        label_16 = new QLabel(disPara_groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 2, 0, 1, 1);

        zoomFactor_doubleSpinBox = new QDoubleSpinBox(disPara_groupBox);
        zoomFactor_doubleSpinBox->setObjectName(QString::fromUtf8("zoomFactor_doubleSpinBox"));
        zoomFactor_doubleSpinBox->setMinimum(0.010000000000000);
        zoomFactor_doubleSpinBox->setMaximum(100.000000000000000);
        zoomFactor_doubleSpinBox->setSingleStep(0.010000000000000);
        zoomFactor_doubleSpinBox->setValue(1.000000000000000);

        gridLayout_5->addWidget(zoomFactor_doubleSpinBox, 2, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_5);

        gravityCenter_checkBox = new QCheckBox(disPara_groupBox);
        gravityCenter_checkBox->setObjectName(QString::fromUtf8("gravityCenter_checkBox"));

        verticalLayout_8->addWidget(gravityCenter_checkBox);

        gravity_groupBox = new QGroupBox(disPara_groupBox);
        gravity_groupBox->setObjectName(QString::fromUtf8("gravity_groupBox"));
        horizontalLayout_10 = new QHBoxLayout(gravity_groupBox);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        gravityX_lineEdit = new QLineEdit(gravity_groupBox);
        gravityX_lineEdit->setObjectName(QString::fromUtf8("gravityX_lineEdit"));

        horizontalLayout_10->addWidget(gravityX_lineEdit);

        gravityY_lineEdit = new QLineEdit(gravity_groupBox);
        gravityY_lineEdit->setObjectName(QString::fromUtf8("gravityY_lineEdit"));

        horizontalLayout_10->addWidget(gravityY_lineEdit);

        gravityZ_lineEdit = new QLineEdit(gravity_groupBox);
        gravityZ_lineEdit->setObjectName(QString::fromUtf8("gravityZ_lineEdit"));

        horizontalLayout_10->addWidget(gravityZ_lineEdit);


        verticalLayout_8->addWidget(gravity_groupBox);


        verticalLayout_9->addWidget(disPara_groupBox);


        verticalLayout_10->addWidget(displace_groupBox);

        comModel_groupBox = new QGroupBox(DataSourcePropForm);
        comModel_groupBox->setObjectName(QString::fromUtf8("comModel_groupBox"));
        verticalLayout_6 = new QVBoxLayout(comModel_groupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        comModel_checkBox = new QCheckBox(comModel_groupBox);
        comModel_checkBox->setObjectName(QString::fromUtf8("comModel_checkBox"));

        verticalLayout_6->addWidget(comModel_checkBox);

        comModel_comboBox = new QComboBox(comModel_groupBox);
        comModel_comboBox->setObjectName(QString::fromUtf8("comModel_comboBox"));

        verticalLayout_6->addWidget(comModel_comboBox);


        verticalLayout_10->addWidget(comModel_groupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);


        retranslateUi(DataSourcePropForm);

        lineType_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DataSourcePropForm);
    } // setupUi

    void retranslateUi(QWidget *DataSourcePropForm)
    {
        DataSourcePropForm->setWindowTitle(QCoreApplication::translate("DataSourcePropForm", "Data Source Property", nullptr));
        grid_blocks_comboBox->setItemText(0, QCoreApplication::translate("DataSourcePropForm", "All Grid", nullptr));
        grid_blocks_comboBox->setItemText(1, QCoreApplication::translate("DataSourcePropForm", "Blocks", nullptr));

        block_groupBox->setTitle(QCoreApplication::translate("DataSourcePropForm", "Block", nullptr));
        particles_groupBox->setTitle(QCoreApplication::translate("DataSourcePropForm", "particles", nullptr));
        label_17->setText(QCoreApplication::translate("DataSourcePropForm", "type", nullptr));
        particlesType_comboBox->setItemText(0, QCoreApplication::translate("DataSourcePropForm", "None", nullptr));
        particlesType_comboBox->setItemText(1, QCoreApplication::translate("DataSourcePropForm", "Sphere", nullptr));

        resolution->setText(QCoreApplication::translate("DataSourcePropForm", "Resolution", nullptr));
        label_10->setText(QCoreApplication::translate("DataSourcePropForm", "Radius", nullptr));
        lineType_groupBox->setTitle(QCoreApplication::translate("DataSourcePropForm", "Line Type", nullptr));
        label->setText(QCoreApplication::translate("DataSourcePropForm", "Line Type", nullptr));
        lineType_comboBox->setItemText(0, QCoreApplication::translate("DataSourcePropForm", "Glyph", nullptr));
        lineType_comboBox->setItemText(1, QCoreApplication::translate("DataSourcePropForm", "Line", nullptr));

        label_2->setText(QCoreApplication::translate("DataSourcePropForm", "Tip resolution", nullptr));
        label_3->setText(QCoreApplication::translate("DataSourcePropForm", "Tip radius", nullptr));
        label_4->setText(QCoreApplication::translate("DataSourcePropForm", "Tip length", nullptr));
        label_5->setText(QCoreApplication::translate("DataSourcePropForm", "Shaft resolution", nullptr));
        label_6->setText(QCoreApplication::translate("DataSourcePropForm", "Shaft radius", nullptr));
        scaleFactor_label->setText(QCoreApplication::translate("DataSourcePropForm", "Scale Factor", nullptr));
        lineType_tabWidget->setTabText(lineType_tabWidget->indexOf(tab), QCoreApplication::translate("DataSourcePropForm", "Arrow", nullptr));
        label_7->setText(QCoreApplication::translate("DataSourcePropForm", "Resolution", nullptr));
        Res_cone_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "6", nullptr));
        label_8->setText(QCoreApplication::translate("DataSourcePropForm", "Radius", nullptr));
        label_9->setText(QCoreApplication::translate("DataSourcePropForm", "Height", nullptr));
        center_Cone_label->setText(QCoreApplication::translate("DataSourcePropForm", "Center", nullptr));
        centerX_Cone_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "0", nullptr));
        centerY_Cone_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "0", nullptr));
        centerZ_Cone_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "0", nullptr));
        direction_Cone_label->setText(QCoreApplication::translate("DataSourcePropForm", "Direction", nullptr));
        DirX_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "1", nullptr));
        DirY_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "0", nullptr));
        DirZ_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "0", nullptr));
        lineType_tabWidget->setTabText(lineType_tabWidget->indexOf(tab_2), QCoreApplication::translate("DataSourcePropForm", "Cone", nullptr));
        label_15->setText(QCoreApplication::translate("DataSourcePropForm", "Tip resolution", nullptr));
        Res_Cylinder_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "6", nullptr));
        label_14->setText(QCoreApplication::translate("DataSourcePropForm", "Radius", nullptr));
        label_12->setText(QCoreApplication::translate("DataSourcePropForm", "Height", nullptr));
        center_Cylinder_label->setText(QCoreApplication::translate("DataSourcePropForm", "Center", nullptr));
        CenterX_Cylinder_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "0", nullptr));
        CenterY_Cylinder_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "0", nullptr));
        CenterZ_Cylinder_lineEdit->setText(QCoreApplication::translate("DataSourcePropForm", "0", nullptr));
        lineType_tabWidget->setTabText(lineType_tabWidget->indexOf(tab_3), QCoreApplication::translate("DataSourcePropForm", "Cylinder", nullptr));
        seaBottom_groupBox->setTitle(QCoreApplication::translate("DataSourcePropForm", "Sea Bottom", nullptr));
        seaBottom_checkBox->setText(QCoreApplication::translate("DataSourcePropForm", "Sea Bottom", nullptr));
        seaBotColor_pushButton->setText(QString());
        displace_groupBox->setTitle(QCoreApplication::translate("DataSourcePropForm", "Displacement animation", nullptr));
        displace_checkBox->setText(QCoreApplication::translate("DataSourcePropForm", "Enabled", nullptr));
        disPara_groupBox->setTitle(QString());
        displace_pushButton->setText(QCoreApplication::translate("DataSourcePropForm", "...", nullptr));
        label_11->setText(QCoreApplication::translate("DataSourcePropForm", "Start position", nullptr));
        label_13->setText(QCoreApplication::translate("DataSourcePropForm", "Interval", nullptr));
        label_16->setText(QCoreApplication::translate("DataSourcePropForm", "Zoom factor", nullptr));
        gravityCenter_checkBox->setText(QCoreApplication::translate("DataSourcePropForm", "Input center of gravity", nullptr));
        gravity_groupBox->setTitle(QCoreApplication::translate("DataSourcePropForm", "Center of gravity", nullptr));
        comModel_groupBox->setTitle(QCoreApplication::translate("DataSourcePropForm", "combine model", nullptr));
        comModel_checkBox->setText(QCoreApplication::translate("DataSourcePropForm", "combine model", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataSourcePropForm: public Ui_DataSourcePropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASOURCEPROPFORM_H
