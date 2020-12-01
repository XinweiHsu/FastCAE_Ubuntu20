/********************************************************************************
** Form generated from reading UI file 'ctkVTKPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKVTKPROPERTYWIDGET_H
#define UI_CTKVTKPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleGroupBox.h"
#include "ctkColorPickerButton.h"
#include "ctkSliderWidget.h"
#include "ctkVTKSurfaceMaterialPropertyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ctkVTKPropertyWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleGroupBox *RepresentationCollapsibleGroupBox;
    QFormLayout *formLayout_4;
    QLabel *RepresentationLabel;
    QComboBox *RepresentationComboBox;
    QLabel *PointSizeLabel;
    ctkSliderWidget *PointSizeSliderWidget;
    QLabel *LineWidthLabel;
    ctkSliderWidget *LineWidthSliderWidget;
    QLabel *CullingLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *FrontfaceCullingCheckBox;
    QCheckBox *BackfaceCullingCheckBox;
    ctkCollapsibleGroupBox *ColorCollapsibleGroupBox;
    QFormLayout *formLayout_3;
    QLabel *ColorLabel;
    ctkColorPickerButton *ColorPickerButton;
    QLabel *OpacityLabel;
    ctkSliderWidget *OpacitySliderWidget;
    QLabel *EdgeVisibilityLabel;
    QCheckBox *EdgeVisibilityCheckBox;
    QLabel *EdgeColorLabel;
    ctkColorPickerButton *EdgeColorPickerButton;
    ctkCollapsibleGroupBox *LightingCollapsibleGroupBox;
    QFormLayout *formLayout_2;
    QLabel *LightingLabel;
    QCheckBox *LightingCheckBox;
    QLabel *InterpolationLabel;
    QComboBox *InterpolationComboBox;
    QLabel *ShadingLabel;
    QCheckBox *ShadingCheckBox;
    ctkCollapsibleGroupBox *MaterialCollapsibleGroupBox;
    QFormLayout *formLayout;
    ctkVTKSurfaceMaterialPropertyWidget *MaterialPropertyWidget;

    void setupUi(QWidget *ctkVTKPropertyWidget)
    {
        if (ctkVTKPropertyWidget->objectName().isEmpty())
            ctkVTKPropertyWidget->setObjectName(QString::fromUtf8("ctkVTKPropertyWidget"));
        ctkVTKPropertyWidget->resize(406, 284);
        verticalLayout = new QVBoxLayout(ctkVTKPropertyWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RepresentationCollapsibleGroupBox = new ctkCollapsibleGroupBox(ctkVTKPropertyWidget);
        RepresentationCollapsibleGroupBox->setObjectName(QString::fromUtf8("RepresentationCollapsibleGroupBox"));
        RepresentationCollapsibleGroupBox->setCollapsed(true);
        formLayout_4 = new QFormLayout(RepresentationCollapsibleGroupBox);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        RepresentationLabel = new QLabel(RepresentationCollapsibleGroupBox);
        RepresentationLabel->setObjectName(QString::fromUtf8("RepresentationLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, RepresentationLabel);

        RepresentationComboBox = new QComboBox(RepresentationCollapsibleGroupBox);
        RepresentationComboBox->addItem(QString());
        RepresentationComboBox->addItem(QString());
        RepresentationComboBox->addItem(QString());
        RepresentationComboBox->setObjectName(QString::fromUtf8("RepresentationComboBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, RepresentationComboBox);

        PointSizeLabel = new QLabel(RepresentationCollapsibleGroupBox);
        PointSizeLabel->setObjectName(QString::fromUtf8("PointSizeLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, PointSizeLabel);

        PointSizeSliderWidget = new ctkSliderWidget(RepresentationCollapsibleGroupBox);
        PointSizeSliderWidget->setObjectName(QString::fromUtf8("PointSizeSliderWidget"));
        PointSizeSliderWidget->setDecimals(2);
        PointSizeSliderWidget->setMinimum(1.000000000000000);
        PointSizeSliderWidget->setMaximum(100.000000000000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, PointSizeSliderWidget);

        LineWidthLabel = new QLabel(RepresentationCollapsibleGroupBox);
        LineWidthLabel->setObjectName(QString::fromUtf8("LineWidthLabel"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, LineWidthLabel);

        LineWidthSliderWidget = new ctkSliderWidget(RepresentationCollapsibleGroupBox);
        LineWidthSliderWidget->setObjectName(QString::fromUtf8("LineWidthSliderWidget"));
        LineWidthSliderWidget->setDecimals(2);
        LineWidthSliderWidget->setMinimum(1.000000000000000);
        LineWidthSliderWidget->setMaximum(100.000000000000000);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, LineWidthSliderWidget);

        CullingLabel = new QLabel(RepresentationCollapsibleGroupBox);
        CullingLabel->setObjectName(QString::fromUtf8("CullingLabel"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, CullingLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FrontfaceCullingCheckBox = new QCheckBox(RepresentationCollapsibleGroupBox);
        FrontfaceCullingCheckBox->setObjectName(QString::fromUtf8("FrontfaceCullingCheckBox"));

        horizontalLayout->addWidget(FrontfaceCullingCheckBox);

        BackfaceCullingCheckBox = new QCheckBox(RepresentationCollapsibleGroupBox);
        BackfaceCullingCheckBox->setObjectName(QString::fromUtf8("BackfaceCullingCheckBox"));

        horizontalLayout->addWidget(BackfaceCullingCheckBox);


        formLayout_4->setLayout(3, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addWidget(RepresentationCollapsibleGroupBox);

        ColorCollapsibleGroupBox = new ctkCollapsibleGroupBox(ctkVTKPropertyWidget);
        ColorCollapsibleGroupBox->setObjectName(QString::fromUtf8("ColorCollapsibleGroupBox"));
        formLayout_3 = new QFormLayout(ColorCollapsibleGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ColorLabel = new QLabel(ColorCollapsibleGroupBox);
        ColorLabel->setObjectName(QString::fromUtf8("ColorLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, ColorLabel);

        ColorPickerButton = new ctkColorPickerButton(ColorCollapsibleGroupBox);
        ColorPickerButton->setObjectName(QString::fromUtf8("ColorPickerButton"));
        ColorPickerButton->setDisplayColorName(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ColorPickerButton);

        OpacityLabel = new QLabel(ColorCollapsibleGroupBox);
        OpacityLabel->setObjectName(QString::fromUtf8("OpacityLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, OpacityLabel);

        OpacitySliderWidget = new ctkSliderWidget(ColorCollapsibleGroupBox);
        OpacitySliderWidget->setObjectName(QString::fromUtf8("OpacitySliderWidget"));
        OpacitySliderWidget->setSingleStep(0.100000000000000);
        OpacitySliderWidget->setPageStep(0.250000000000000);
        OpacitySliderWidget->setMaximum(1.000000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, OpacitySliderWidget);

        EdgeVisibilityLabel = new QLabel(ColorCollapsibleGroupBox);
        EdgeVisibilityLabel->setObjectName(QString::fromUtf8("EdgeVisibilityLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, EdgeVisibilityLabel);

        EdgeVisibilityCheckBox = new QCheckBox(ColorCollapsibleGroupBox);
        EdgeVisibilityCheckBox->setObjectName(QString::fromUtf8("EdgeVisibilityCheckBox"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, EdgeVisibilityCheckBox);

        EdgeColorLabel = new QLabel(ColorCollapsibleGroupBox);
        EdgeColorLabel->setObjectName(QString::fromUtf8("EdgeColorLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, EdgeColorLabel);

        EdgeColorPickerButton = new ctkColorPickerButton(ColorCollapsibleGroupBox);
        EdgeColorPickerButton->setObjectName(QString::fromUtf8("EdgeColorPickerButton"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, EdgeColorPickerButton);


        verticalLayout->addWidget(ColorCollapsibleGroupBox);

        LightingCollapsibleGroupBox = new ctkCollapsibleGroupBox(ctkVTKPropertyWidget);
        LightingCollapsibleGroupBox->setObjectName(QString::fromUtf8("LightingCollapsibleGroupBox"));
        LightingCollapsibleGroupBox->setCollapsed(true);
        formLayout_2 = new QFormLayout(LightingCollapsibleGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        LightingLabel = new QLabel(LightingCollapsibleGroupBox);
        LightingLabel->setObjectName(QString::fromUtf8("LightingLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, LightingLabel);

        LightingCheckBox = new QCheckBox(LightingCollapsibleGroupBox);
        LightingCheckBox->setObjectName(QString::fromUtf8("LightingCheckBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LightingCheckBox);

        InterpolationLabel = new QLabel(LightingCollapsibleGroupBox);
        InterpolationLabel->setObjectName(QString::fromUtf8("InterpolationLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, InterpolationLabel);

        InterpolationComboBox = new QComboBox(LightingCollapsibleGroupBox);
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->setObjectName(QString::fromUtf8("InterpolationComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, InterpolationComboBox);

        ShadingLabel = new QLabel(LightingCollapsibleGroupBox);
        ShadingLabel->setObjectName(QString::fromUtf8("ShadingLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, ShadingLabel);

        ShadingCheckBox = new QCheckBox(LightingCollapsibleGroupBox);
        ShadingCheckBox->setObjectName(QString::fromUtf8("ShadingCheckBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, ShadingCheckBox);


        verticalLayout->addWidget(LightingCollapsibleGroupBox);

        MaterialCollapsibleGroupBox = new ctkCollapsibleGroupBox(ctkVTKPropertyWidget);
        MaterialCollapsibleGroupBox->setObjectName(QString::fromUtf8("MaterialCollapsibleGroupBox"));
        MaterialCollapsibleGroupBox->setCollapsed(true);
        formLayout = new QFormLayout(MaterialCollapsibleGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        MaterialPropertyWidget = new ctkVTKSurfaceMaterialPropertyWidget(MaterialCollapsibleGroupBox);
        MaterialPropertyWidget->setObjectName(QString::fromUtf8("MaterialPropertyWidget"));
        MaterialPropertyWidget->setColorVisible(false);
        MaterialPropertyWidget->setOpacityVisible(false);
        MaterialPropertyWidget->setBackfaceCullingVisible(false);

        formLayout->setWidget(0, QFormLayout::SpanningRole, MaterialPropertyWidget);


        verticalLayout->addWidget(MaterialCollapsibleGroupBox);


        retranslateUi(ctkVTKPropertyWidget);

        QMetaObject::connectSlotsByName(ctkVTKPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkVTKPropertyWidget)
    {
        ctkVTKPropertyWidget->setWindowTitle(QCoreApplication::translate("ctkVTKPropertyWidget", "Property", nullptr));
        RepresentationCollapsibleGroupBox->setTitle(QCoreApplication::translate("ctkVTKPropertyWidget", "Representation", nullptr));
        RepresentationLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Representation:", nullptr));
        RepresentationComboBox->setItemText(0, QCoreApplication::translate("ctkVTKPropertyWidget", "Points", nullptr));
        RepresentationComboBox->setItemText(1, QCoreApplication::translate("ctkVTKPropertyWidget", "Wireframe", nullptr));
        RepresentationComboBox->setItemText(2, QCoreApplication::translate("ctkVTKPropertyWidget", "Surface", nullptr));

        PointSizeLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Point Size:", nullptr));
        LineWidthLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Line Width:", nullptr));
        CullingLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Culling:", nullptr));
        FrontfaceCullingCheckBox->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Frontface", nullptr));
        BackfaceCullingCheckBox->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Backface", nullptr));
        ColorCollapsibleGroupBox->setTitle(QCoreApplication::translate("ctkVTKPropertyWidget", "Color", nullptr));
        ColorLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Color:", nullptr));
        OpacityLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Opacity:", nullptr));
        EdgeVisibilityLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Edge Visibility:", nullptr));
        EdgeVisibilityCheckBox->setText(QString());
        EdgeColorLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Edge Color:", nullptr));
        LightingCollapsibleGroupBox->setTitle(QCoreApplication::translate("ctkVTKPropertyWidget", "Lighting", nullptr));
        LightingLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Lighting:", nullptr));
        LightingCheckBox->setText(QString());
        InterpolationLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Interpolation:", nullptr));
        InterpolationComboBox->setItemText(0, QCoreApplication::translate("ctkVTKPropertyWidget", "Flat", nullptr));
        InterpolationComboBox->setItemText(1, QCoreApplication::translate("ctkVTKPropertyWidget", "Gouraud", nullptr));
        InterpolationComboBox->setItemText(2, QCoreApplication::translate("ctkVTKPropertyWidget", "Phong", nullptr));

        ShadingLabel->setText(QCoreApplication::translate("ctkVTKPropertyWidget", "Shading:", nullptr));
        ShadingCheckBox->setText(QString());
        MaterialCollapsibleGroupBox->setTitle(QCoreApplication::translate("ctkVTKPropertyWidget", "Material", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkVTKPropertyWidget: public Ui_ctkVTKPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKVTKPROPERTYWIDGET_H
