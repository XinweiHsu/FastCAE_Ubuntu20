/********************************************************************************
** Form generated from reading UI file 'ctkVTKTextPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKVTKTEXTPROPERTYWIDGET_H
#define UI_CTKVTKTEXTPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>
#include "ctkColorPickerButton.h"
#include "ctkDoubleSlider.h"

QT_BEGIN_NAMESPACE

class Ui_ctkVTKTextPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *TextLabel;
    QLineEdit *TextLineEdit;
    QLabel *ColorLabel;
    ctkColorPickerButton *ColorPickerButton;
    QLabel *OpacityLabel;
    ctkDoubleSlider *OpacitySlider;
    QLabel *FontLabel;
    QComboBox *FontComboBox;
    QLabel *StyleLabel;
    QCheckBox *BoldCheckBox;
    QCheckBox *ItalicCheckBox;
    QCheckBox *ShadowCheckBox;
    QLabel *SizeLabel;
    ctkDoubleSlider *SizeSlider;

    void setupUi(QWidget *ctkVTKTextPropertyWidget)
    {
        if (ctkVTKTextPropertyWidget->objectName().isEmpty())
            ctkVTKTextPropertyWidget->setObjectName(QString::fromUtf8("ctkVTKTextPropertyWidget"));
        ctkVTKTextPropertyWidget->resize(271, 169);
        gridLayout = new QGridLayout(ctkVTKTextPropertyWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel = new QLabel(ctkVTKTextPropertyWidget);
        TextLabel->setObjectName(QString::fromUtf8("TextLabel"));

        gridLayout->addWidget(TextLabel, 0, 0, 1, 1);

        TextLineEdit = new QLineEdit(ctkVTKTextPropertyWidget);
        TextLineEdit->setObjectName(QString::fromUtf8("TextLineEdit"));

        gridLayout->addWidget(TextLineEdit, 0, 1, 1, 3);

        ColorLabel = new QLabel(ctkVTKTextPropertyWidget);
        ColorLabel->setObjectName(QString::fromUtf8("ColorLabel"));

        gridLayout->addWidget(ColorLabel, 1, 0, 1, 1);

        ColorPickerButton = new ctkColorPickerButton(ctkVTKTextPropertyWidget);
        ColorPickerButton->setObjectName(QString::fromUtf8("ColorPickerButton"));

        gridLayout->addWidget(ColorPickerButton, 1, 1, 1, 3);

        OpacityLabel = new QLabel(ctkVTKTextPropertyWidget);
        OpacityLabel->setObjectName(QString::fromUtf8("OpacityLabel"));

        gridLayout->addWidget(OpacityLabel, 2, 0, 1, 1);

        OpacitySlider = new ctkDoubleSlider(ctkVTKTextPropertyWidget);
        OpacitySlider->setObjectName(QString::fromUtf8("OpacitySlider"));
        OpacitySlider->setSingleStep(0.100000000000000);
        OpacitySlider->setMaximum(1.000000000000000);
        OpacitySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(OpacitySlider, 2, 1, 1, 3);

        FontLabel = new QLabel(ctkVTKTextPropertyWidget);
        FontLabel->setObjectName(QString::fromUtf8("FontLabel"));

        gridLayout->addWidget(FontLabel, 3, 0, 1, 1);

        FontComboBox = new QComboBox(ctkVTKTextPropertyWidget);
        FontComboBox->addItem(QString());
        FontComboBox->addItem(QString());
        FontComboBox->addItem(QString());
        FontComboBox->setObjectName(QString::fromUtf8("FontComboBox"));

        gridLayout->addWidget(FontComboBox, 3, 1, 1, 3);

        StyleLabel = new QLabel(ctkVTKTextPropertyWidget);
        StyleLabel->setObjectName(QString::fromUtf8("StyleLabel"));

        gridLayout->addWidget(StyleLabel, 4, 0, 1, 1);

        BoldCheckBox = new QCheckBox(ctkVTKTextPropertyWidget);
        BoldCheckBox->setObjectName(QString::fromUtf8("BoldCheckBox"));

        gridLayout->addWidget(BoldCheckBox, 4, 1, 1, 1);

        ItalicCheckBox = new QCheckBox(ctkVTKTextPropertyWidget);
        ItalicCheckBox->setObjectName(QString::fromUtf8("ItalicCheckBox"));

        gridLayout->addWidget(ItalicCheckBox, 4, 2, 1, 1);

        ShadowCheckBox = new QCheckBox(ctkVTKTextPropertyWidget);
        ShadowCheckBox->setObjectName(QString::fromUtf8("ShadowCheckBox"));

        gridLayout->addWidget(ShadowCheckBox, 4, 3, 1, 1);

        SizeLabel = new QLabel(ctkVTKTextPropertyWidget);
        SizeLabel->setObjectName(QString::fromUtf8("SizeLabel"));

        gridLayout->addWidget(SizeLabel, 5, 0, 1, 1);

        SizeSlider = new ctkDoubleSlider(ctkVTKTextPropertyWidget);
        SizeSlider->setObjectName(QString::fromUtf8("SizeSlider"));
        SizeSlider->setSingleStep(1.000000000000000);
        SizeSlider->setMaximum(100.000000000000000);
        SizeSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SizeSlider, 5, 1, 1, 3);


        retranslateUi(ctkVTKTextPropertyWidget);

        QMetaObject::connectSlotsByName(ctkVTKTextPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkVTKTextPropertyWidget)
    {
        ctkVTKTextPropertyWidget->setWindowTitle(QCoreApplication::translate("ctkVTKTextPropertyWidget", "vtkTextProperty", nullptr));
        TextLabel->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "Text:", nullptr));
        ColorLabel->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "Color:", nullptr));
        OpacityLabel->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "Opacity:", nullptr));
        FontLabel->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "Font:", nullptr));
        FontComboBox->setItemText(0, QCoreApplication::translate("ctkVTKTextPropertyWidget", "Arial", nullptr));
        FontComboBox->setItemText(1, QCoreApplication::translate("ctkVTKTextPropertyWidget", "Courier", nullptr));
        FontComboBox->setItemText(2, QCoreApplication::translate("ctkVTKTextPropertyWidget", "Times", nullptr));

        StyleLabel->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "Style:", nullptr));
        BoldCheckBox->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "bold", nullptr));
        ItalicCheckBox->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "italic", nullptr));
        ShadowCheckBox->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "shadow", nullptr));
        SizeLabel->setText(QCoreApplication::translate("ctkVTKTextPropertyWidget", "Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkVTKTextPropertyWidget: public Ui_ctkVTKTextPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKVTKTEXTPROPERTYWIDGET_H
