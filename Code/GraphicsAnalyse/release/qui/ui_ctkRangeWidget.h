/********************************************************************************
** Form generated from reading UI file 'ctkRangeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKRANGEWIDGET_H
#define UI_CTKRANGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "ctkDoubleRangeSlider.h"
#include "ctkDoubleSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_ctkRangeWidget
{
public:
    QGridLayout *GridLayout;
    ctkDoubleSpinBox *MinimumSpinBox;
    ctkDoubleRangeSlider *Slider;
    ctkDoubleSpinBox *MaximumSpinBox;

    void setupUi(QWidget *ctkRangeWidget)
    {
        if (ctkRangeWidget->objectName().isEmpty())
            ctkRangeWidget->setObjectName(QString::fromUtf8("ctkRangeWidget"));
        ctkRangeWidget->resize(302, 27);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkRangeWidget->sizePolicy().hasHeightForWidth());
        ctkRangeWidget->setSizePolicy(sizePolicy);
        GridLayout = new QGridLayout(ctkRangeWidget);
        GridLayout->setContentsMargins(0, 0, 0, 0);
        GridLayout->setObjectName(QString::fromUtf8("GridLayout"));
        MinimumSpinBox = new ctkDoubleSpinBox(ctkRangeWidget);
        MinimumSpinBox->setObjectName(QString::fromUtf8("MinimumSpinBox"));

        GridLayout->addWidget(MinimumSpinBox, 0, 0, 1, 1);

        Slider = new ctkDoubleRangeSlider(ctkRangeWidget);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setOrientation(Qt::Horizontal);

        GridLayout->addWidget(Slider, 0, 1, 1, 1);

        MaximumSpinBox = new ctkDoubleSpinBox(ctkRangeWidget);
        MaximumSpinBox->setObjectName(QString::fromUtf8("MaximumSpinBox"));

        GridLayout->addWidget(MaximumSpinBox, 0, 2, 1, 1);


        retranslateUi(ctkRangeWidget);

        QMetaObject::connectSlotsByName(ctkRangeWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkRangeWidget)
    {
        ctkRangeWidget->setWindowTitle(QCoreApplication::translate("ctkRangeWidget", "ctkSliderSpinBoxWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkRangeWidget: public Ui_ctkRangeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKRANGEWIDGET_H
