/********************************************************************************
** Form generated from reading UI file 'ctkVTKScalarBarWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKVTKSCALARBARWIDGET_H
#define UI_CTKVTKSCALARBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "ctkVTKTextPropertyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ctkVTKScalarBarWidget
{
public:
    QGridLayout *gridLayout_3;
    QCheckBox *DisplayScalarBarCheckBox;
    QGroupBox *TitleGroupBox;
    QGridLayout *gridLayout;
    ctkVTKTextPropertyWidget *TitleTextPropertyWidget;
    QGroupBox *LabelsGroupBox;
    QGridLayout *gridLayout_2;
    ctkVTKTextPropertyWidget *LabelsTextPropertyWidget;
    QLabel *MaxNumberOfColorsLabel;
    QSpinBox *MaxNumberOfColorsSpinBox;
    QLabel *NumberOfLabelsLabel;
    QSpinBox *NumberOfLabelsSpinBox;

    void setupUi(QWidget *ctkVTKScalarBarWidget)
    {
        if (ctkVTKScalarBarWidget->objectName().isEmpty())
            ctkVTKScalarBarWidget->setObjectName(QString::fromUtf8("ctkVTKScalarBarWidget"));
        ctkVTKScalarBarWidget->resize(311, 535);
        gridLayout_3 = new QGridLayout(ctkVTKScalarBarWidget);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        DisplayScalarBarCheckBox = new QCheckBox(ctkVTKScalarBarWidget);
        DisplayScalarBarCheckBox->setObjectName(QString::fromUtf8("DisplayScalarBarCheckBox"));

        gridLayout_3->addWidget(DisplayScalarBarCheckBox, 0, 0, 1, 2);

        TitleGroupBox = new QGroupBox(ctkVTKScalarBarWidget);
        TitleGroupBox->setObjectName(QString::fromUtf8("TitleGroupBox"));
        TitleGroupBox->setFlat(true);
        gridLayout = new QGridLayout(TitleGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TitleTextPropertyWidget = new ctkVTKTextPropertyWidget(TitleGroupBox);
        TitleTextPropertyWidget->setObjectName(QString::fromUtf8("TitleTextPropertyWidget"));

        gridLayout->addWidget(TitleTextPropertyWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(TitleGroupBox, 1, 0, 1, 2);

        LabelsGroupBox = new QGroupBox(ctkVTKScalarBarWidget);
        LabelsGroupBox->setObjectName(QString::fromUtf8("LabelsGroupBox"));
        LabelsGroupBox->setFlat(true);
        gridLayout_2 = new QGridLayout(LabelsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        LabelsTextPropertyWidget = new ctkVTKTextPropertyWidget(LabelsGroupBox);
        LabelsTextPropertyWidget->setObjectName(QString::fromUtf8("LabelsTextPropertyWidget"));

        gridLayout_2->addWidget(LabelsTextPropertyWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(LabelsGroupBox, 2, 0, 1, 2);

        MaxNumberOfColorsLabel = new QLabel(ctkVTKScalarBarWidget);
        MaxNumberOfColorsLabel->setObjectName(QString::fromUtf8("MaxNumberOfColorsLabel"));

        gridLayout_3->addWidget(MaxNumberOfColorsLabel, 3, 0, 1, 1);

        MaxNumberOfColorsSpinBox = new QSpinBox(ctkVTKScalarBarWidget);
        MaxNumberOfColorsSpinBox->setObjectName(QString::fromUtf8("MaxNumberOfColorsSpinBox"));
        MaxNumberOfColorsSpinBox->setMinimum(2);
        MaxNumberOfColorsSpinBox->setMaximum(9999);

        gridLayout_3->addWidget(MaxNumberOfColorsSpinBox, 3, 1, 1, 1);

        NumberOfLabelsLabel = new QLabel(ctkVTKScalarBarWidget);
        NumberOfLabelsLabel->setObjectName(QString::fromUtf8("NumberOfLabelsLabel"));

        gridLayout_3->addWidget(NumberOfLabelsLabel, 4, 0, 1, 1);

        NumberOfLabelsSpinBox = new QSpinBox(ctkVTKScalarBarWidget);
        NumberOfLabelsSpinBox->setObjectName(QString::fromUtf8("NumberOfLabelsSpinBox"));
        NumberOfLabelsSpinBox->setMaximum(64);

        gridLayout_3->addWidget(NumberOfLabelsSpinBox, 4, 1, 1, 1);


        retranslateUi(ctkVTKScalarBarWidget);

        QMetaObject::connectSlotsByName(ctkVTKScalarBarWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkVTKScalarBarWidget)
    {
        ctkVTKScalarBarWidget->setWindowTitle(QCoreApplication::translate("ctkVTKScalarBarWidget", "vtkScalarBarWidget", nullptr));
        DisplayScalarBarCheckBox->setText(QCoreApplication::translate("ctkVTKScalarBarWidget", "Display scalar bar", nullptr));
        TitleGroupBox->setTitle(QCoreApplication::translate("ctkVTKScalarBarWidget", "Title properties:", nullptr));
        LabelsGroupBox->setTitle(QCoreApplication::translate("ctkVTKScalarBarWidget", "Labels properties:", nullptr));
        LabelsTextPropertyWidget->setTextLabel(QCoreApplication::translate("ctkVTKScalarBarWidget", "Format:", nullptr));
        MaxNumberOfColorsLabel->setText(QCoreApplication::translate("ctkVTKScalarBarWidget", "Maximum number of colors:", nullptr));
        NumberOfLabelsLabel->setText(QCoreApplication::translate("ctkVTKScalarBarWidget", "Number of labels:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkVTKScalarBarWidget: public Ui_ctkVTKScalarBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKVTKSCALARBARWIDGET_H
