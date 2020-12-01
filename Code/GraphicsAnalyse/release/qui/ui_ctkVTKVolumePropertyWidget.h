/********************************************************************************
** Form generated from reading UI file 'ctkVTKVolumePropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKVTKVOLUMEPROPERTYWIDGET_H
#define UI_CTKVTKVOLUMEPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleGroupBox.h"
#include "ctkMaterialPropertyWidget.h"
#include "ctkVTKScalarsToColorsWidget.h"
#include "ctkVTKThresholdWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ctkVTKVolumePropertyWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    ctkCollapsibleGroupBox *ScalarOpacityGroupBox;
    QVBoxLayout *verticalLayout_2;
    ctkVTKThresholdWidget *ScalarOpacityThresholdWidget;
    ctkVTKScalarsToColorsWidget *ScalarOpacityWidget;
    ctkCollapsibleGroupBox *ScalarColorGroupBox;
    QVBoxLayout *verticalLayout_4;
    ctkVTKScalarsToColorsWidget *ScalarColorWidget;
    ctkCollapsibleGroupBox *GradientGroupBox;
    QVBoxLayout *verticalLayout;
    ctkVTKScalarsToColorsWidget *GradientWidget;
    ctkCollapsibleGroupBox *AdvancedGroupBox;
    QFormLayout *formLayout;
    QLabel *InterpolationLabel;
    QComboBox *InterpolationComboBox;
    QLabel *ShadeLabel;
    QCheckBox *ShadeCheckBox;
    QLabel *MaterialLabel;
    ctkMaterialPropertyWidget *MaterialPropertyWidget;

    void setupUi(QWidget *ctkVTKVolumePropertyWidget)
    {
        if (ctkVTKVolumePropertyWidget->objectName().isEmpty())
            ctkVTKVolumePropertyWidget->setObjectName(QString::fromUtf8("ctkVTKVolumePropertyWidget"));
        ctkVTKVolumePropertyWidget->resize(391, 699);
        verticalLayout_3 = new QVBoxLayout(ctkVTKVolumePropertyWidget);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ScalarOpacityGroupBox = new ctkCollapsibleGroupBox(ctkVTKVolumePropertyWidget);
        ScalarOpacityGroupBox->setObjectName(QString::fromUtf8("ScalarOpacityGroupBox"));
        verticalLayout_2 = new QVBoxLayout(ScalarOpacityGroupBox);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ScalarOpacityThresholdWidget = new ctkVTKThresholdWidget(ScalarOpacityGroupBox);
        ScalarOpacityThresholdWidget->setObjectName(QString::fromUtf8("ScalarOpacityThresholdWidget"));

        verticalLayout_2->addWidget(ScalarOpacityThresholdWidget);

        ScalarOpacityWidget = new ctkVTKScalarsToColorsWidget(ScalarOpacityGroupBox);
        ScalarOpacityWidget->setObjectName(QString::fromUtf8("ScalarOpacityWidget"));
        ScalarOpacityWidget->setMinimumSize(QSize(0, 120));
        ScalarOpacityWidget->setEditColors(false);

        verticalLayout_2->addWidget(ScalarOpacityWidget);


        verticalLayout_3->addWidget(ScalarOpacityGroupBox);

        ScalarColorGroupBox = new ctkCollapsibleGroupBox(ctkVTKVolumePropertyWidget);
        ScalarColorGroupBox->setObjectName(QString::fromUtf8("ScalarColorGroupBox"));
        verticalLayout_4 = new QVBoxLayout(ScalarColorGroupBox);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        ScalarColorWidget = new ctkVTKScalarsToColorsWidget(ScalarColorGroupBox);
        ScalarColorWidget->setObjectName(QString::fromUtf8("ScalarColorWidget"));
        ScalarColorWidget->setMinimumSize(QSize(0, 120));

        verticalLayout_4->addWidget(ScalarColorWidget);


        verticalLayout_3->addWidget(ScalarColorGroupBox);

        GradientGroupBox = new ctkCollapsibleGroupBox(ctkVTKVolumePropertyWidget);
        GradientGroupBox->setObjectName(QString::fromUtf8("GradientGroupBox"));
        verticalLayout = new QVBoxLayout(GradientGroupBox);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        GradientWidget = new ctkVTKScalarsToColorsWidget(GradientGroupBox);
        GradientWidget->setObjectName(QString::fromUtf8("GradientWidget"));
        GradientWidget->setMinimumSize(QSize(0, 120));

        verticalLayout->addWidget(GradientWidget);


        verticalLayout_3->addWidget(GradientGroupBox);

        AdvancedGroupBox = new ctkCollapsibleGroupBox(ctkVTKVolumePropertyWidget);
        AdvancedGroupBox->setObjectName(QString::fromUtf8("AdvancedGroupBox"));
        formLayout = new QFormLayout(AdvancedGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        InterpolationLabel = new QLabel(AdvancedGroupBox);
        InterpolationLabel->setObjectName(QString::fromUtf8("InterpolationLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, InterpolationLabel);

        InterpolationComboBox = new QComboBox(AdvancedGroupBox);
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->setObjectName(QString::fromUtf8("InterpolationComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, InterpolationComboBox);

        ShadeLabel = new QLabel(AdvancedGroupBox);
        ShadeLabel->setObjectName(QString::fromUtf8("ShadeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ShadeLabel);

        ShadeCheckBox = new QCheckBox(AdvancedGroupBox);
        ShadeCheckBox->setObjectName(QString::fromUtf8("ShadeCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ShadeCheckBox);

        MaterialLabel = new QLabel(AdvancedGroupBox);
        MaterialLabel->setObjectName(QString::fromUtf8("MaterialLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, MaterialLabel);

        MaterialPropertyWidget = new ctkMaterialPropertyWidget(AdvancedGroupBox);
        MaterialPropertyWidget->setObjectName(QString::fromUtf8("MaterialPropertyWidget"));
        MaterialPropertyWidget->setColorVisible(false);
        MaterialPropertyWidget->setOpacityVisible(false);
        MaterialPropertyWidget->setBackfaceCullingVisible(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, MaterialPropertyWidget);


        verticalLayout_3->addWidget(AdvancedGroupBox);


        retranslateUi(ctkVTKVolumePropertyWidget);

        QMetaObject::connectSlotsByName(ctkVTKVolumePropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkVTKVolumePropertyWidget)
    {
        ctkVTKVolumePropertyWidget->setWindowTitle(QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Volume property", nullptr));
        ScalarOpacityGroupBox->setTitle(QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Scalar Opacity Mapping", nullptr));
        ScalarColorGroupBox->setTitle(QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Scalar Color Mapping", nullptr));
        GradientGroupBox->setTitle(QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Gradient Opacity", nullptr));
        AdvancedGroupBox->setTitle(QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Advanced", nullptr));
        InterpolationLabel->setText(QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Interpolation:", nullptr));
        InterpolationComboBox->setItemText(0, QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Nearest Neighbor", nullptr));
        InterpolationComboBox->setItemText(1, QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Linear", nullptr));

        ShadeLabel->setText(QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Shade:", nullptr));
        MaterialLabel->setText(QCoreApplication::translate("ctkVTKVolumePropertyWidget", "Material:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkVTKVolumePropertyWidget: public Ui_ctkVTKVolumePropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKVTKVOLUMEPROPERTYWIDGET_H
