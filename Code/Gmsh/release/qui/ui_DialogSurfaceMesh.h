/********************************************************************************
** Form generated from reading UI file 'DialogSurfaceMesh.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSURFACEMESH_H
#define UI_DIALOGSURFACEMESH_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SurfaceMeshDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
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
    QLabel *label_6;
    QSpinBox *smoothingSpinBox;
    QCheckBox *geoCleanCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *localButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QCheckBox *gridCoplanarCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *selectall;
    QCheckBox *selectvisible;
    QLabel *planelabel;
    QPushButton *geoSelectSurface;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *TriRadioButton;
    QRadioButton *QuadRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *OrderComboBox;

    void setupUi(QDialog *SurfaceMeshDialog)
    {
        if (SurfaceMeshDialog->objectName().isEmpty())
            SurfaceMeshDialog->setObjectName(QString::fromUtf8("SurfaceMeshDialog"));
        SurfaceMeshDialog->resize(377, 490);
        gridLayout_3 = new QGridLayout(SurfaceMeshDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_3 = new QGroupBox(SurfaceMeshDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        MethodComboBox = new QComboBox(groupBox_3);
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->addItem(QString());
        MethodComboBox->setObjectName(QString::fromUtf8("MethodComboBox"));

        gridLayout_2->addWidget(MethodComboBox, 0, 1, 1, 1);

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


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        MinSizeDoubleSpinBox = new QDoubleSpinBox(groupBox_3);
        MinSizeDoubleSpinBox->setObjectName(QString::fromUtf8("MinSizeDoubleSpinBox"));
        MinSizeDoubleSpinBox->setMaximum(9999999999999.000000000000000);

        horizontalLayout_5->addWidget(MinSizeDoubleSpinBox);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 0, 1, 2);

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


        gridLayout_2->addLayout(horizontalLayout_6, 3, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        smoothingSpinBox = new QSpinBox(groupBox_3);
        smoothingSpinBox->setObjectName(QString::fromUtf8("smoothingSpinBox"));
        smoothingSpinBox->setMaximum(1000);
        smoothingSpinBox->setValue(20);

        horizontalLayout_7->addWidget(smoothingSpinBox);


        gridLayout_2->addLayout(horizontalLayout_7, 4, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_3, 2, 0, 1, 2);

        geoCleanCheckBox = new QCheckBox(SurfaceMeshDialog);
        geoCleanCheckBox->setObjectName(QString::fromUtf8("geoCleanCheckBox"));
        geoCleanCheckBox->setChecked(true);

        gridLayout_3->addWidget(geoCleanCheckBox, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        localButton = new QPushButton(SurfaceMeshDialog);
        localButton->setObjectName(QString::fromUtf8("localButton"));

        horizontalLayout_3->addWidget(localButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SurfaceMeshDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        gridLayout_3->addLayout(horizontalLayout_3, 4, 0, 1, 2);

        gridCoplanarCheckBox = new QCheckBox(SurfaceMeshDialog);
        gridCoplanarCheckBox->setObjectName(QString::fromUtf8("gridCoplanarCheckBox"));

        gridLayout_3->addWidget(gridCoplanarCheckBox, 3, 1, 1, 1);

        groupBox = new QGroupBox(SurfaceMeshDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        selectall = new QCheckBox(groupBox);
        selectall->setObjectName(QString::fromUtf8("selectall"));

        horizontalLayout_8->addWidget(selectall);

        selectvisible = new QCheckBox(groupBox);
        selectvisible->setObjectName(QString::fromUtf8("selectvisible"));

        horizontalLayout_8->addWidget(selectvisible);


        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 2);

        planelabel = new QLabel(groupBox);
        planelabel->setObjectName(QString::fromUtf8("planelabel"));

        gridLayout->addWidget(planelabel, 0, 0, 1, 1);

        geoSelectSurface = new QPushButton(groupBox);
        geoSelectSurface->setObjectName(QString::fromUtf8("geoSelectSurface"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(geoSelectSurface->sizePolicy().hasHeightForWidth());
        geoSelectSurface->setSizePolicy(sizePolicy1);
        geoSelectSurface->setMinimumSize(QSize(32, 32));
        geoSelectSurface->setMaximumSize(QSize(32, 32));
        geoSelectSurface->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectface.png);"));
        geoSelectSurface->setCheckable(true);

        gridLayout->addWidget(geoSelectSurface, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(SurfaceMeshDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        TriRadioButton = new QRadioButton(groupBox_2);
        TriRadioButton->setObjectName(QString::fromUtf8("TriRadioButton"));
        TriRadioButton->setChecked(true);

        horizontalLayout->addWidget(TriRadioButton);

        QuadRadioButton = new QRadioButton(groupBox_2);
        QuadRadioButton->setObjectName(QString::fromUtf8("QuadRadioButton"));

        horizontalLayout->addWidget(QuadRadioButton);


        verticalLayout->addLayout(horizontalLayout);

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


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 2);


        retranslateUi(SurfaceMeshDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SurfaceMeshDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SurfaceMeshDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SurfaceMeshDialog);
    } // setupUi

    void retranslateUi(QDialog *SurfaceMeshDialog)
    {
        SurfaceMeshDialog->setWindowTitle(QCoreApplication::translate("SurfaceMeshDialog", "Surfafce Mesh", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SurfaceMeshDialog", "Parameter", nullptr));
        label_2->setText(QCoreApplication::translate("SurfaceMeshDialog", "Method:", nullptr));
        MethodComboBox->setItemText(0, QCoreApplication::translate("SurfaceMeshDialog", "Auto", nullptr));
        MethodComboBox->setItemText(1, QCoreApplication::translate("SurfaceMeshDialog", "Mesh Adapt", nullptr));
        MethodComboBox->setItemText(2, QCoreApplication::translate("SurfaceMeshDialog", "Delaunay", nullptr));
        MethodComboBox->setItemText(3, QCoreApplication::translate("SurfaceMeshDialog", "Frontal", nullptr));
        MethodComboBox->setItemText(4, QCoreApplication::translate("SurfaceMeshDialog", "Delaunay for quad", nullptr));
        MethodComboBox->setItemText(5, QCoreApplication::translate("SurfaceMeshDialog", "Packing for parallelograms", nullptr));

        label_3->setText(QCoreApplication::translate("SurfaceMeshDialog", "Element Size Factor:", nullptr));
        label_4->setText(QCoreApplication::translate("SurfaceMeshDialog", "Min Element Size:", nullptr));
        label_5->setText(QCoreApplication::translate("SurfaceMeshDialog", "Max Element Size:", nullptr));
        label_6->setText(QCoreApplication::translate("SurfaceMeshDialog", "Smoothing Steps:", nullptr));
        geoCleanCheckBox->setText(QCoreApplication::translate("SurfaceMeshDialog", "Geometry Clean", nullptr));
        localButton->setText(QCoreApplication::translate("SurfaceMeshDialog", "Local setting", nullptr));
        gridCoplanarCheckBox->setText(QCoreApplication::translate("SurfaceMeshDialog", "Cohence", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SurfaceMeshDialog", "Surface", nullptr));
        selectall->setText(QCoreApplication::translate("SurfaceMeshDialog", "Select All", nullptr));
        selectvisible->setText(QCoreApplication::translate("SurfaceMeshDialog", "Select Visible", nullptr));
        planelabel->setText(QCoreApplication::translate("SurfaceMeshDialog", "Selected Surface(0)", nullptr));
        geoSelectSurface->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("SurfaceMeshDialog", "Element Type", nullptr));
        TriRadioButton->setText(QCoreApplication::translate("SurfaceMeshDialog", "Triangle", nullptr));
        QuadRadioButton->setText(QCoreApplication::translate("SurfaceMeshDialog", "Quad", nullptr));
        label->setText(QCoreApplication::translate("SurfaceMeshDialog", "Order:", nullptr));
        OrderComboBox->setItemText(0, QCoreApplication::translate("SurfaceMeshDialog", "first order", nullptr));
        OrderComboBox->setItemText(1, QCoreApplication::translate("SurfaceMeshDialog", "second order", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SurfaceMeshDialog: public Ui_SurfaceMeshDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSURFACEMESH_H
