/********************************************************************************
** Form generated from reading UI file 'ctkMaterialPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKMATERIALPROPERTYWIDGET_H
#define UI_CTKMATERIALPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "ctkColorPickerButton.h"
#include "ctkMaterialPropertyPreviewLabel.h"
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ctkMaterialPropertyWidget
{
public:
    QFormLayout *formLayout;
    QLabel *ColorLabel;
    ctkColorPickerButton *ColorPickerButton;
    QLabel *OpacityLabel;
    ctkSliderWidget *OpacitySliderSpinBox;
    QLabel *AmbientLabel;
    ctkSliderWidget *AmbientSliderSpinBox;
    QLabel *DiffuseLabel;
    ctkSliderWidget *DiffuseSliderSpinBox;
    QLabel *SpecularLabel;
    ctkSliderWidget *SpecularSliderSpinBox;
    QLabel *SpecularPowerLabel;
    ctkSliderWidget *SpecularPowerSliderSpinBox;
    QLabel *BackfaceCullingLabel;
    QCheckBox *BackfaceCullingCheckBox;
    QLabel *PreviewLabel;
    QHBoxLayout *horizontalLayout_2;
    ctkMaterialPropertyPreviewLabel *MaterialPropertyPreviewLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *PresetsLabel;
    QListWidget *PresetsListWidget;

    void setupUi(QWidget *ctkMaterialPropertyWidget)
    {
        if (ctkMaterialPropertyWidget->objectName().isEmpty())
            ctkMaterialPropertyWidget->setObjectName(QString::fromUtf8("ctkMaterialPropertyWidget"));
        ctkMaterialPropertyWidget->resize(248, 212);
        formLayout = new QFormLayout(ctkMaterialPropertyWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        ColorLabel = new QLabel(ctkMaterialPropertyWidget);
        ColorLabel->setObjectName(QString::fromUtf8("ColorLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ColorLabel);

        ColorPickerButton = new ctkColorPickerButton(ctkMaterialPropertyWidget);
        ColorPickerButton->setObjectName(QString::fromUtf8("ColorPickerButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColorPickerButton->sizePolicy().hasHeightForWidth());
        ColorPickerButton->setSizePolicy(sizePolicy);
        ColorPickerButton->setColor(QColor(255, 255, 255));
        ColorPickerButton->setDisplayColorName(false);
        ColorPickerButton->setDialogOptions(ctkColorPickerButton::UseCTKColorDialog);

        formLayout->setWidget(0, QFormLayout::FieldRole, ColorPickerButton);

        OpacityLabel = new QLabel(ctkMaterialPropertyWidget);
        OpacityLabel->setObjectName(QString::fromUtf8("OpacityLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, OpacityLabel);

        OpacitySliderSpinBox = new ctkSliderWidget(ctkMaterialPropertyWidget);
        OpacitySliderSpinBox->setObjectName(QString::fromUtf8("OpacitySliderSpinBox"));
        OpacitySliderSpinBox->setSingleStep(0.010000000000000);
        OpacitySliderSpinBox->setMaximum(1.000000000000000);
        OpacitySliderSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, OpacitySliderSpinBox);

        AmbientLabel = new QLabel(ctkMaterialPropertyWidget);
        AmbientLabel->setObjectName(QString::fromUtf8("AmbientLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, AmbientLabel);

        AmbientSliderSpinBox = new ctkSliderWidget(ctkMaterialPropertyWidget);
        AmbientSliderSpinBox->setObjectName(QString::fromUtf8("AmbientSliderSpinBox"));
        AmbientSliderSpinBox->setSingleStep(0.010000000000000);
        AmbientSliderSpinBox->setMaximum(1.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, AmbientSliderSpinBox);

        DiffuseLabel = new QLabel(ctkMaterialPropertyWidget);
        DiffuseLabel->setObjectName(QString::fromUtf8("DiffuseLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, DiffuseLabel);

        DiffuseSliderSpinBox = new ctkSliderWidget(ctkMaterialPropertyWidget);
        DiffuseSliderSpinBox->setObjectName(QString::fromUtf8("DiffuseSliderSpinBox"));
        DiffuseSliderSpinBox->setSingleStep(0.010000000000000);
        DiffuseSliderSpinBox->setMaximum(1.000000000000000);
        DiffuseSliderSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, DiffuseSliderSpinBox);

        SpecularLabel = new QLabel(ctkMaterialPropertyWidget);
        SpecularLabel->setObjectName(QString::fromUtf8("SpecularLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, SpecularLabel);

        SpecularSliderSpinBox = new ctkSliderWidget(ctkMaterialPropertyWidget);
        SpecularSliderSpinBox->setObjectName(QString::fromUtf8("SpecularSliderSpinBox"));
        SpecularSliderSpinBox->setSingleStep(0.010000000000000);
        SpecularSliderSpinBox->setMaximum(1.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, SpecularSliderSpinBox);

        SpecularPowerLabel = new QLabel(ctkMaterialPropertyWidget);
        SpecularPowerLabel->setObjectName(QString::fromUtf8("SpecularPowerLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, SpecularPowerLabel);

        SpecularPowerSliderSpinBox = new ctkSliderWidget(ctkMaterialPropertyWidget);
        SpecularPowerSliderSpinBox->setObjectName(QString::fromUtf8("SpecularPowerSliderSpinBox"));
        SpecularPowerSliderSpinBox->setDecimals(1);
        SpecularPowerSliderSpinBox->setSingleStep(0.500000000000000);
        SpecularPowerSliderSpinBox->setMinimum(1.000000000000000);
        SpecularPowerSliderSpinBox->setMaximum(50.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, SpecularPowerSliderSpinBox);

        BackfaceCullingLabel = new QLabel(ctkMaterialPropertyWidget);
        BackfaceCullingLabel->setObjectName(QString::fromUtf8("BackfaceCullingLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, BackfaceCullingLabel);

        BackfaceCullingCheckBox = new QCheckBox(ctkMaterialPropertyWidget);
        BackfaceCullingCheckBox->setObjectName(QString::fromUtf8("BackfaceCullingCheckBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, BackfaceCullingCheckBox);

        PreviewLabel = new QLabel(ctkMaterialPropertyWidget);
        PreviewLabel->setObjectName(QString::fromUtf8("PreviewLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, PreviewLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        MaterialPropertyPreviewLabel = new ctkMaterialPropertyPreviewLabel(ctkMaterialPropertyWidget);
        MaterialPropertyPreviewLabel->setObjectName(QString::fromUtf8("MaterialPropertyPreviewLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MaterialPropertyPreviewLabel->sizePolicy().hasHeightForWidth());
        MaterialPropertyPreviewLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(MaterialPropertyPreviewLabel);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        PresetsLabel = new QLabel(ctkMaterialPropertyWidget);
        PresetsLabel->setObjectName(QString::fromUtf8("PresetsLabel"));

        horizontalLayout_2->addWidget(PresetsLabel);

        PresetsListWidget = new QListWidget(ctkMaterialPropertyWidget);
        PresetsListWidget->setObjectName(QString::fromUtf8("PresetsListWidget"));
        sizePolicy1.setHeightForWidth(PresetsListWidget->sizePolicy().hasHeightForWidth());
        PresetsListWidget->setSizePolicy(sizePolicy1);
        PresetsListWidget->setMinimumSize(QSize(123, 34));
        PresetsListWidget->setMaximumSize(QSize(123, 34));
        PresetsListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        PresetsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        PresetsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        PresetsListWidget->setSelectionMode(QAbstractItemView::NoSelection);
        PresetsListWidget->setFlow(QListView::LeftToRight);
        PresetsListWidget->setUniformItemSizes(true);

        horizontalLayout_2->addWidget(PresetsListWidget);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_2);


        retranslateUi(ctkMaterialPropertyWidget);
        QObject::connect(AmbientSliderSpinBox, SIGNAL(valueChanged(double)), MaterialPropertyPreviewLabel, SLOT(setAmbient(double)));
        QObject::connect(DiffuseSliderSpinBox, SIGNAL(valueChanged(double)), MaterialPropertyPreviewLabel, SLOT(setDiffuse(double)));
        QObject::connect(SpecularSliderSpinBox, SIGNAL(valueChanged(double)), MaterialPropertyPreviewLabel, SLOT(setSpecular(double)));
        QObject::connect(SpecularPowerSliderSpinBox, SIGNAL(valueChanged(double)), MaterialPropertyPreviewLabel, SLOT(setSpecularPower(double)));
        QObject::connect(ColorPickerButton, SIGNAL(colorChanged(QColor)), MaterialPropertyPreviewLabel, SLOT(setColor(QColor)));
        QObject::connect(OpacitySliderSpinBox, SIGNAL(valueChanged(double)), MaterialPropertyPreviewLabel, SLOT(setOpacity(double)));

        QMetaObject::connectSlotsByName(ctkMaterialPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkMaterialPropertyWidget)
    {
        ctkMaterialPropertyWidget->setWindowTitle(QCoreApplication::translate("ctkMaterialPropertyWidget", "Material Property", nullptr));
        ColorLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Color:", nullptr));
        OpacityLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Opacity:", nullptr));
        AmbientLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Ambient:", nullptr));
        DiffuseLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Diffuse:", nullptr));
        SpecularLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Specular:", nullptr));
#if QT_CONFIG(tooltip)
        SpecularPowerLabel->setToolTip(QCoreApplication::translate("ctkMaterialPropertyWidget", "Specular power", nullptr));
#endif // QT_CONFIG(tooltip)
        SpecularPowerLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Power:", nullptr));
        BackfaceCullingLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Backface Culling:", nullptr));
        BackfaceCullingCheckBox->setText(QString());
        PreviewLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Preview:", nullptr));
        PresetsLabel->setText(QCoreApplication::translate("ctkMaterialPropertyWidget", "Presets:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkMaterialPropertyWidget: public Ui_ctkMaterialPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKMATERIALPROPERTYWIDGET_H
