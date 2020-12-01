/********************************************************************************
** Form generated from reading UI file 'ctkVTKScalarsToColorsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKVTKSCALARSTOCOLORSWIDGET_H
#define UI_CTKVTKSCALARSTOCOLORSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ctkExpandButton.h>
#include "ctkColorPickerButton.h"
#include "ctkDoubleRangeSlider.h"
#include "ctkVTKScalarsToColorsView.h"

QT_BEGIN_NAMESPACE

class Ui_ctkVTKScalarsToColorsWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *topLayout_groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *TopLayout;
    QSpacerItem *TopSpacer;
    QLabel *PointIdLabel;
    QSpinBox *PointIdSpinBox;
    ctkColorPickerButton *ColorPickerButton;
    QLabel *XLabel;
    QDoubleSpinBox *XSpinBox;
    QLabel *OpacityLabel;
    QDoubleSpinBox *OpacitySpinBox;
    QLabel *MidPointLabel;
    QDoubleSpinBox *MidPointSpinBox;
    QLabel *SharpnessLabel;
    QDoubleSpinBox *SharpnessSpinBox;
    ctkExpandButton *ExpandButton;
    ctkDoubleRangeSlider *YRangeSlider;
    ctkVTKScalarsToColorsView *View;
    ctkDoubleRangeSlider *XRangeSlider;

    void setupUi(QWidget *ctkVTKScalarsToColorsWidget)
    {
        if (ctkVTKScalarsToColorsWidget->objectName().isEmpty())
            ctkVTKScalarsToColorsWidget->setObjectName(QString::fromUtf8("ctkVTKScalarsToColorsWidget"));
        ctkVTKScalarsToColorsWidget->resize(508, 360);
        verticalLayout_2 = new QVBoxLayout(ctkVTKScalarsToColorsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        topLayout_groupBox = new QGroupBox(ctkVTKScalarsToColorsWidget);
        topLayout_groupBox->setObjectName(QString::fromUtf8("topLayout_groupBox"));
        topLayout_groupBox->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(topLayout_groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TopLayout = new QHBoxLayout();
        TopLayout->setObjectName(QString::fromUtf8("TopLayout"));
        TopSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TopLayout->addItem(TopSpacer);

        PointIdLabel = new QLabel(topLayout_groupBox);
        PointIdLabel->setObjectName(QString::fromUtf8("PointIdLabel"));

        TopLayout->addWidget(PointIdLabel);

        PointIdSpinBox = new QSpinBox(topLayout_groupBox);
        PointIdSpinBox->setObjectName(QString::fromUtf8("PointIdSpinBox"));
        PointIdSpinBox->setEnabled(false);
        PointIdSpinBox->setMinimum(-1);
        PointIdSpinBox->setMaximum(-1);

        TopLayout->addWidget(PointIdSpinBox);

        ColorPickerButton = new ctkColorPickerButton(topLayout_groupBox);
        ColorPickerButton->setObjectName(QString::fromUtf8("ColorPickerButton"));
        ColorPickerButton->setEnabled(false);
        ColorPickerButton->setProperty("displayColorName", QVariant(false));

        TopLayout->addWidget(ColorPickerButton);

        XLabel = new QLabel(topLayout_groupBox);
        XLabel->setObjectName(QString::fromUtf8("XLabel"));

        TopLayout->addWidget(XLabel);

        XSpinBox = new QDoubleSpinBox(topLayout_groupBox);
        XSpinBox->setObjectName(QString::fromUtf8("XSpinBox"));
        XSpinBox->setEnabled(false);

        TopLayout->addWidget(XSpinBox);

        OpacityLabel = new QLabel(topLayout_groupBox);
        OpacityLabel->setObjectName(QString::fromUtf8("OpacityLabel"));

        TopLayout->addWidget(OpacityLabel);

        OpacitySpinBox = new QDoubleSpinBox(topLayout_groupBox);
        OpacitySpinBox->setObjectName(QString::fromUtf8("OpacitySpinBox"));
        OpacitySpinBox->setEnabled(false);
        OpacitySpinBox->setMaximum(1.000000000000000);
        OpacitySpinBox->setSingleStep(0.100000000000000);

        TopLayout->addWidget(OpacitySpinBox);

        MidPointLabel = new QLabel(topLayout_groupBox);
        MidPointLabel->setObjectName(QString::fromUtf8("MidPointLabel"));

        TopLayout->addWidget(MidPointLabel);

        MidPointSpinBox = new QDoubleSpinBox(topLayout_groupBox);
        MidPointSpinBox->setObjectName(QString::fromUtf8("MidPointSpinBox"));
        MidPointSpinBox->setEnabled(false);
        MidPointSpinBox->setMaximum(1.000000000000000);
        MidPointSpinBox->setSingleStep(0.100000000000000);

        TopLayout->addWidget(MidPointSpinBox);

        SharpnessLabel = new QLabel(topLayout_groupBox);
        SharpnessLabel->setObjectName(QString::fromUtf8("SharpnessLabel"));

        TopLayout->addWidget(SharpnessLabel);

        SharpnessSpinBox = new QDoubleSpinBox(topLayout_groupBox);
        SharpnessSpinBox->setObjectName(QString::fromUtf8("SharpnessSpinBox"));
        SharpnessSpinBox->setEnabled(false);
        SharpnessSpinBox->setMaximum(1.000000000000000);
        SharpnessSpinBox->setSingleStep(0.100000000000000);

        TopLayout->addWidget(SharpnessSpinBox);

        ExpandButton = new ctkExpandButton(topLayout_groupBox);
        ExpandButton->setObjectName(QString::fromUtf8("ExpandButton"));
        ExpandButton->setContextMenuPolicy(Qt::DefaultContextMenu);

        TopLayout->addWidget(ExpandButton);


        verticalLayout->addLayout(TopLayout);


        verticalLayout_2->addWidget(topLayout_groupBox);

        YRangeSlider = new ctkDoubleRangeSlider(ctkVTKScalarsToColorsWidget);
        YRangeSlider->setObjectName(QString::fromUtf8("YRangeSlider"));
        YRangeSlider->setMaximumSize(QSize(16777215, 16777215));
        YRangeSlider->setProperty("maximum", QVariant(1.000000000000000));
        YRangeSlider->setProperty("singleStep", QVariant(0.010000000000000));

        verticalLayout_2->addWidget(YRangeSlider);

        View = new ctkVTKScalarsToColorsView(ctkVTKScalarsToColorsWidget);
        View->setObjectName(QString::fromUtf8("View"));

        verticalLayout_2->addWidget(View);

        XRangeSlider = new ctkDoubleRangeSlider(ctkVTKScalarsToColorsWidget);
        XRangeSlider->setObjectName(QString::fromUtf8("XRangeSlider"));
        XRangeSlider->setMaximumSize(QSize(16777215, 16777215));
        XRangeSlider->setProperty("maximum", QVariant(1.000000000000000));
        XRangeSlider->setProperty("singleStep", QVariant(0.010000000000000));
        XRangeSlider->setProperty("maximumValue", QVariant(1.000000000000000));

        verticalLayout_2->addWidget(XRangeSlider);


        retranslateUi(ctkVTKScalarsToColorsWidget);

        QMetaObject::connectSlotsByName(ctkVTKScalarsToColorsWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkVTKScalarsToColorsWidget)
    {
        ctkVTKScalarsToColorsWidget->setWindowTitle(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "ScalarsToColorsWidget", nullptr));
        topLayout_groupBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        PointIdLabel->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Point ID", nullptr));
#endif // QT_CONFIG(tooltip)
        PointIdLabel->setText(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Point:", nullptr));
#if QT_CONFIG(tooltip)
        PointIdSpinBox->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Point ID", nullptr));
#endif // QT_CONFIG(tooltip)
        ColorPickerButton->setText(QString());
#if QT_CONFIG(tooltip)
        XLabel->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "X coordinate of the current point", nullptr));
#endif // QT_CONFIG(tooltip)
        XLabel->setText(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "X:", nullptr));
#if QT_CONFIG(tooltip)
        XSpinBox->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "X coordinate of the current point", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        OpacityLabel->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Opacity of the current point", nullptr));
#endif // QT_CONFIG(tooltip)
        OpacityLabel->setText(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "O:", nullptr));
#if QT_CONFIG(tooltip)
        OpacitySpinBox->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Opacity of the current point", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidPointLabel->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Position of the midpoint", nullptr));
#endif // QT_CONFIG(tooltip)
        MidPointLabel->setText(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "M:", nullptr));
#if QT_CONFIG(tooltip)
        MidPointSpinBox->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Position of the midpoint", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SharpnessLabel->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Sharpness of the midpoint", nullptr));
#endif // QT_CONFIG(tooltip)
        SharpnessLabel->setText(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "S:", nullptr));
#if QT_CONFIG(tooltip)
        SharpnessSpinBox->setToolTip(QCoreApplication::translate("ctkVTKScalarsToColorsWidget", "Sharpness of the midpoint", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class ctkVTKScalarsToColorsWidget: public Ui_ctkVTKScalarsToColorsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKVTKSCALARSTOCOLORSWIDGET_H
