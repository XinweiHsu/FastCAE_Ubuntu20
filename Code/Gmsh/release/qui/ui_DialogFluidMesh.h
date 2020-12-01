/********************************************************************************
** Form generated from reading UI file 'DialogFluidMesh.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFLUIDMESH_H
#define UI_DIALOGFLUIDMESH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

QT_BEGIN_NAMESPACE

class Ui_DialogFluidMesh
{
public:
    QGridLayout *gridLayout_3;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *TetRadioButton;
    QRadioButton *HexRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *OrderComboBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *geoSelectSurface;
    QLabel *planelabel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QHBoxLayout *startPointLayout;
    QLabel *label_5;
    QHBoxLayout *endPointLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *MethodComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *MinSizeDoubleSpinBox;

    void setupUi(QDialog *DialogFluidMesh)
    {
        if (DialogFluidMesh->objectName().isEmpty())
            DialogFluidMesh->setObjectName(QString::fromUtf8("DialogFluidMesh"));
        DialogFluidMesh->resize(362, 473);
        gridLayout_3 = new QGridLayout(DialogFluidMesh);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        buttonBox = new QDialogButtonBox(DialogFluidMesh);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 4, 0, 1, 1);

        groupBox_3 = new QGroupBox(DialogFluidMesh);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        TetRadioButton = new QRadioButton(groupBox_3);
        TetRadioButton->setObjectName(QString::fromUtf8("TetRadioButton"));
        TetRadioButton->setChecked(true);

        horizontalLayout_3->addWidget(TetRadioButton);

        HexRadioButton = new QRadioButton(groupBox_3);
        HexRadioButton->setObjectName(QString::fromUtf8("HexRadioButton"));
        HexRadioButton->setCheckable(true);

        horizontalLayout_3->addWidget(HexRadioButton);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        OrderComboBox = new QComboBox(groupBox_3);
        OrderComboBox->addItem(QString());
        OrderComboBox->addItem(QString());
        OrderComboBox->setObjectName(QString::fromUtf8("OrderComboBox"));

        horizontalLayout_2->addWidget(OrderComboBox);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox = new QGroupBox(DialogFluidMesh);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
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

        planelabel = new QLabel(groupBox);
        planelabel->setObjectName(QString::fromUtf8("planelabel"));

        gridLayout->addWidget(planelabel, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(DialogFluidMesh);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        startPointLayout = new QHBoxLayout();
        startPointLayout->setObjectName(QString::fromUtf8("startPointLayout"));

        gridLayout_5->addLayout(startPointLayout, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 2, 0, 1, 1);

        endPointLayout = new QHBoxLayout();
        endPointLayout->setObjectName(QString::fromUtf8("endPointLayout"));

        gridLayout_5->addLayout(endPointLayout, 3, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox_4 = new QGroupBox(DialogFluidMesh);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);

        MethodComboBox = new QComboBox(groupBox_4);
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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        MinSizeDoubleSpinBox = new QDoubleSpinBox(groupBox_4);
        MinSizeDoubleSpinBox->setObjectName(QString::fromUtf8("MinSizeDoubleSpinBox"));
        MinSizeDoubleSpinBox->setMaximum(9999999999999.000000000000000);
        MinSizeDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(MinSizeDoubleSpinBox);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 3, 0, 1, 1);


        retranslateUi(DialogFluidMesh);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogFluidMesh, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogFluidMesh, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogFluidMesh);
    } // setupUi

    void retranslateUi(QDialog *DialogFluidMesh)
    {
        DialogFluidMesh->setWindowTitle(QCoreApplication::translate("DialogFluidMesh", "Fluid Mesh", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DialogFluidMesh", "Element Type", nullptr));
        TetRadioButton->setText(QCoreApplication::translate("DialogFluidMesh", "Tet", nullptr));
        HexRadioButton->setText(QCoreApplication::translate("DialogFluidMesh", "Hex", nullptr));
        label->setText(QCoreApplication::translate("DialogFluidMesh", "Order:", nullptr));
        OrderComboBox->setItemText(0, QCoreApplication::translate("DialogFluidMesh", "first order", nullptr));
        OrderComboBox->setItemText(1, QCoreApplication::translate("DialogFluidMesh", "second order", nullptr));

        groupBox->setTitle(QCoreApplication::translate("DialogFluidMesh", "Solid", nullptr));
        geoSelectSurface->setText(QString());
        planelabel->setText(QCoreApplication::translate("DialogFluidMesh", "Selected Solid(0)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DialogFluidMesh", "Fluid Field", nullptr));
        label_3->setText(QCoreApplication::translate("DialogFluidMesh", "Start Point:", nullptr));
        label_5->setText(QCoreApplication::translate("DialogFluidMesh", "End Point:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DialogFluidMesh", "Parameter", nullptr));
        label_2->setText(QCoreApplication::translate("DialogFluidMesh", "Method:", nullptr));
        MethodComboBox->setItemText(0, QCoreApplication::translate("DialogFluidMesh", "Delaunay", nullptr));
        MethodComboBox->setItemText(1, QCoreApplication::translate("DialogFluidMesh", "New Delaunay", nullptr));
        MethodComboBox->setItemText(2, QCoreApplication::translate("DialogFluidMesh", "Frontal", nullptr));
        MethodComboBox->setItemText(3, QCoreApplication::translate("DialogFluidMesh", "Frontal Delaunay", nullptr));
        MethodComboBox->setItemText(4, QCoreApplication::translate("DialogFluidMesh", "Frontal Hex", nullptr));
        MethodComboBox->setItemText(5, QCoreApplication::translate("DialogFluidMesh", "MMG3D", nullptr));
        MethodComboBox->setItemText(6, QCoreApplication::translate("DialogFluidMesh", "R-tree", nullptr));

        label_4->setText(QCoreApplication::translate("DialogFluidMesh", "Element Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFluidMesh: public Ui_DialogFluidMesh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFLUIDMESH_H
