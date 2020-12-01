/********************************************************************************
** Form generated from reading UI file 'DialogSolidMesh.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSOLIDMESH_H
#define UI_DIALOGSOLIDMESH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SolidMeshDialog
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *selectall;
    QCheckBox *selectvisible;
    QLabel *planelabel;
    QPushButton *geoSelectSurface;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *geoCleanCheckBox;
    QCheckBox *gridCoplanarCheckBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QPushButton *localButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *TetRadioButton;
    QRadioButton *HexRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *OrderComboBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *MethodComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *SizeFacDoubleSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *MinSizeDoubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDoubleSpinBox *MaxSizeDoubleSpinBox;
    QHBoxLayout *horizontalLayout_7;

    void setupUi(QDialog *SolidMeshDialog)
    {
        if (SolidMeshDialog->objectName().isEmpty())
            SolidMeshDialog->setObjectName(QString::fromUtf8("SolidMeshDialog"));
        SolidMeshDialog->resize(375, 488);
        gridLayout_6 = new QGridLayout(SolidMeshDialog);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox = new QGroupBox(SolidMeshDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        selectall = new QCheckBox(groupBox);
        selectall->setObjectName(QString::fromUtf8("selectall"));

        horizontalLayout_10->addWidget(selectall);

        selectvisible = new QCheckBox(groupBox);
        selectvisible->setObjectName(QString::fromUtf8("selectvisible"));

        horizontalLayout_10->addWidget(selectvisible);


        gridLayout->addLayout(horizontalLayout_10, 1, 0, 1, 2);

        planelabel = new QLabel(groupBox);
        planelabel->setObjectName(QString::fromUtf8("planelabel"));

        gridLayout->addWidget(planelabel, 0, 0, 1, 1);

        geoSelectSurface = new QPushButton(groupBox);
        geoSelectSurface->setObjectName(QString::fromUtf8("geoSelectSurface"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geoSelectSurface->sizePolicy().hasHeightForWidth());
        geoSelectSurface->setSizePolicy(sizePolicy);
        geoSelectSurface->setMinimumSize(QSize(32, 32));
        geoSelectSurface->setMaximumSize(QSize(32, 32));
        geoSelectSurface->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectface.png);"));
        geoSelectSurface->setCheckable(true);

        gridLayout->addWidget(geoSelectSurface, 0, 1, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        geoCleanCheckBox = new QCheckBox(SolidMeshDialog);
        geoCleanCheckBox->setObjectName(QString::fromUtf8("geoCleanCheckBox"));
        geoCleanCheckBox->setChecked(true);

        horizontalLayout_8->addWidget(geoCleanCheckBox);

        gridCoplanarCheckBox = new QCheckBox(SolidMeshDialog);
        gridCoplanarCheckBox->setObjectName(QString::fromUtf8("gridCoplanarCheckBox"));

        horizontalLayout_8->addWidget(gridCoplanarCheckBox);


        gridLayout_6->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(SolidMeshDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 0, 2, 1, 1);

        localButton = new QPushButton(SolidMeshDialog);
        localButton->setObjectName(QString::fromUtf8("localButton"));

        gridLayout_3->addWidget(localButton, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(SolidMeshDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        TetRadioButton = new QRadioButton(groupBox_2);
        TetRadioButton->setObjectName(QString::fromUtf8("TetRadioButton"));
        TetRadioButton->setChecked(true);

        horizontalLayout_3->addWidget(TetRadioButton);

        HexRadioButton = new QRadioButton(groupBox_2);
        HexRadioButton->setObjectName(QString::fromUtf8("HexRadioButton"));
        HexRadioButton->setCheckable(true);

        horizontalLayout_3->addWidget(HexRadioButton);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        OrderComboBox = new QComboBox(groupBox_2);
        OrderComboBox->addItem(QString());
        OrderComboBox->addItem(QString());
        OrderComboBox->setObjectName(QString::fromUtf8("OrderComboBox"));

        horizontalLayout_2->addWidget(OrderComboBox);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(SolidMeshDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);

        MethodComboBox = new QComboBox(groupBox_3);
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->setObjectName(QString::fromUtf8("MethodComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MethodComboBox->sizePolicy().hasHeightForWidth());
        MethodComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(MethodComboBox);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        SizeFacDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        SizeFacDoubleSpinBox->setObjectName(QString::fromUtf8("SizeFacDoubleSpinBox"));
        SizeFacDoubleSpinBox->setDecimals(3);
        SizeFacDoubleSpinBox->setMinimum(0.001000000000000);
        SizeFacDoubleSpinBox->setMaximum(9999999999.000000000000000);
        SizeFacDoubleSpinBox->setSingleStep(0.100000000000000);
        SizeFacDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(SizeFacDoubleSpinBox);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        MinSizeDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        MinSizeDoubleSpinBox->setObjectName(QString::fromUtf8("MinSizeDoubleSpinBox"));
        MinSizeDoubleSpinBox->setMaximum(9999999999999.000000000000000);

        horizontalLayout_5->addWidget(MinSizeDoubleSpinBox);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        MaxSizeDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        MaxSizeDoubleSpinBox->setObjectName(QString::fromUtf8("MaxSizeDoubleSpinBox"));
        MaxSizeDoubleSpinBox->setMaximum(9999999999999.000000000000000);
        MaxSizeDoubleSpinBox->setValue(100.000000000000000);

        horizontalLayout_6->addWidget(MaxSizeDoubleSpinBox);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));

        gridLayout_2->addLayout(horizontalLayout_7, 4, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 2, 0, 1, 1);


        retranslateUi(SolidMeshDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SolidMeshDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SolidMeshDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SolidMeshDialog);
    } // setupUi

    void retranslateUi(QDialog *SolidMeshDialog)
    {
        SolidMeshDialog->setWindowTitle(QCoreApplication::translate("SolidMeshDialog", "Solid Mesh", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SolidMeshDialog", "Solid", nullptr));
        selectall->setText(QCoreApplication::translate("SolidMeshDialog", "Select All", nullptr));
        selectvisible->setText(QCoreApplication::translate("SolidMeshDialog", "Select Visible", nullptr));
        planelabel->setText(QCoreApplication::translate("SolidMeshDialog", "Selected Solid(0)", nullptr));
        geoSelectSurface->setText(QString());
        geoCleanCheckBox->setText(QCoreApplication::translate("SolidMeshDialog", "Geometry Clean", nullptr));
        gridCoplanarCheckBox->setText(QCoreApplication::translate("SolidMeshDialog", "Cohence", nullptr));
        localButton->setText(QCoreApplication::translate("SolidMeshDialog", "Local setting", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SolidMeshDialog", "Element Type", nullptr));
        TetRadioButton->setText(QCoreApplication::translate("SolidMeshDialog", "Tet", nullptr));
        HexRadioButton->setText(QCoreApplication::translate("SolidMeshDialog", "Hex", nullptr));
        label->setText(QCoreApplication::translate("SolidMeshDialog", "Order:", nullptr));
        OrderComboBox->setItemText(0, QCoreApplication::translate("SolidMeshDialog", "first order", nullptr));
        OrderComboBox->setItemText(1, QCoreApplication::translate("SolidMeshDialog", "second order", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("SolidMeshDialog", "Parameter", nullptr));
        label_2->setText(QCoreApplication::translate("SolidMeshDialog", "Method:", nullptr));
        MethodComboBox->setItemText(0, QCoreApplication::translate("SolidMeshDialog", "Delaunay", nullptr));
        MethodComboBox->setItemText(1, QCoreApplication::translate("SolidMeshDialog", "New Delaunay", nullptr));
        MethodComboBox->setItemText(2, QCoreApplication::translate("SolidMeshDialog", "Frontal", nullptr));
        MethodComboBox->setItemText(3, QCoreApplication::translate("SolidMeshDialog", "Frontal Delaunay", nullptr));
        MethodComboBox->setItemText(4, QCoreApplication::translate("SolidMeshDialog", "Frontal Hex", nullptr));
        MethodComboBox->setItemText(5, QCoreApplication::translate("SolidMeshDialog", "MMG3D", nullptr));
        MethodComboBox->setItemText(6, QCoreApplication::translate("SolidMeshDialog", "R-tree", nullptr));

        label_3->setText(QCoreApplication::translate("SolidMeshDialog", "Element Size Factor:", nullptr));
        label_4->setText(QCoreApplication::translate("SolidMeshDialog", "Min Element Size:", nullptr));
        label_5->setText(QCoreApplication::translate("SolidMeshDialog", "Max Element Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SolidMeshDialog: public Ui_SolidMeshDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSOLIDMESH_H
