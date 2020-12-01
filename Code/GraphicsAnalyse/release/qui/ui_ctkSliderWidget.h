/********************************************************************************
** Form generated from reading UI file 'ctkSliderWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKSLIDERWIDGET_H
#define UI_CTKSLIDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkDoubleSlider.h"
#include "ctkDoubleSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_ctkSliderWidget
{
public:
    QHBoxLayout *hboxLayout;
    ctkDoubleSlider *Slider;
    ctkDoubleSpinBox *SpinBox;

    void setupUi(QWidget *ctkSliderWidget)
    {
        if (ctkSliderWidget->objectName().isEmpty())
            ctkSliderWidget->setObjectName(QString::fromUtf8("ctkSliderWidget"));
        ctkSliderWidget->resize(183, 27);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkSliderWidget->sizePolicy().hasHeightForWidth());
        ctkSliderWidget->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(ctkSliderWidget);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        Slider = new ctkDoubleSlider(ctkSliderWidget);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setOrientation(Qt::Horizontal);

        hboxLayout->addWidget(Slider);

        SpinBox = new ctkDoubleSpinBox(ctkSliderWidget);
        SpinBox->setObjectName(QString::fromUtf8("SpinBox"));

        hboxLayout->addWidget(SpinBox);


        retranslateUi(ctkSliderWidget);

        QMetaObject::connectSlotsByName(ctkSliderWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkSliderWidget)
    {
        ctkSliderWidget->setWindowTitle(QCoreApplication::translate("ctkSliderWidget", "ctkSliderWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkSliderWidget: public Ui_ctkSliderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKSLIDERWIDGET_H
