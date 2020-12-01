/********************************************************************************
** Form generated from reading UI file 'ctkVTKThresholdWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKVTKTHRESHOLDWIDGET_H
#define UI_CTKVTKTHRESHOLDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "ctkRangeWidget.h"
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ctkVTKThresholdWidget
{
public:
    QFormLayout *formLayout;
    QLabel *ThresholdLabel;
    ctkRangeWidget *ThresholdSliderWidget;
    QLabel *OpacityLabel;
    ctkSliderWidget *OpacitySliderWidget;

    void setupUi(QWidget *ctkVTKThresholdWidget)
    {
        if (ctkVTKThresholdWidget->objectName().isEmpty())
            ctkVTKThresholdWidget->setObjectName(QString::fromUtf8("ctkVTKThresholdWidget"));
        ctkVTKThresholdWidget->resize(251, 46);
        formLayout = new QFormLayout(ctkVTKThresholdWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ThresholdLabel = new QLabel(ctkVTKThresholdWidget);
        ThresholdLabel->setObjectName(QString::fromUtf8("ThresholdLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ThresholdLabel);

        ThresholdSliderWidget = new ctkRangeWidget(ctkVTKThresholdWidget);
        ThresholdSliderWidget->setObjectName(QString::fromUtf8("ThresholdSliderWidget"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ThresholdSliderWidget);

        OpacityLabel = new QLabel(ctkVTKThresholdWidget);
        OpacityLabel->setObjectName(QString::fromUtf8("OpacityLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, OpacityLabel);

        OpacitySliderWidget = new ctkSliderWidget(ctkVTKThresholdWidget);
        OpacitySliderWidget->setObjectName(QString::fromUtf8("OpacitySliderWidget"));
        OpacitySliderWidget->setSingleStep(0.010000000000000);
        OpacitySliderWidget->setPageStep(0.100000000000000);
        OpacitySliderWidget->setMaximum(1.000000000000000);
        OpacitySliderWidget->setValue(1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, OpacitySliderWidget);


        retranslateUi(ctkVTKThresholdWidget);

        QMetaObject::connectSlotsByName(ctkVTKThresholdWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkVTKThresholdWidget)
    {
        ctkVTKThresholdWidget->setWindowTitle(QCoreApplication::translate("ctkVTKThresholdWidget", "Threshold", nullptr));
        ThresholdLabel->setText(QCoreApplication::translate("ctkVTKThresholdWidget", "Threshold:", nullptr));
        OpacityLabel->setText(QCoreApplication::translate("ctkVTKThresholdWidget", "Opacity:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkVTKThresholdWidget: public Ui_ctkVTKThresholdWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKVTKTHRESHOLDWIDGET_H
