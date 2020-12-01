/********************************************************************************
** Form generated from reading UI file 'smoothfilterpropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOOTHFILTERPROPFORM_H
#define UI_SMOOTHFILTERPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_smoothFilterPropForm
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *cellToPoint_radioButton;
    QRadioButton *meshSmooth_radioButton;
    QGroupBox *smooth_groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *coef_spinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *smoothFilterPropForm)
    {
        if (smoothFilterPropForm->objectName().isEmpty())
            smoothFilterPropForm->setObjectName(QString::fromUtf8("smoothFilterPropForm"));
        smoothFilterPropForm->resize(319, 206);
        verticalLayout = new QVBoxLayout(smoothFilterPropForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cellToPoint_radioButton = new QRadioButton(smoothFilterPropForm);
        cellToPoint_radioButton->setObjectName(QString::fromUtf8("cellToPoint_radioButton"));

        verticalLayout->addWidget(cellToPoint_radioButton);

        meshSmooth_radioButton = new QRadioButton(smoothFilterPropForm);
        meshSmooth_radioButton->setObjectName(QString::fromUtf8("meshSmooth_radioButton"));

        verticalLayout->addWidget(meshSmooth_radioButton);

        smooth_groupBox = new QGroupBox(smoothFilterPropForm);
        smooth_groupBox->setObjectName(QString::fromUtf8("smooth_groupBox"));
        horizontalLayout = new QHBoxLayout(smooth_groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(smooth_groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        coef_spinBox = new QSpinBox(smooth_groupBox);
        coef_spinBox->setObjectName(QString::fromUtf8("coef_spinBox"));
        coef_spinBox->setMinimum(1);
        coef_spinBox->setMaximum(60);
        coef_spinBox->setValue(5);

        horizontalLayout->addWidget(coef_spinBox);


        verticalLayout->addWidget(smooth_groupBox);

        verticalSpacer = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(smoothFilterPropForm);

        QMetaObject::connectSlotsByName(smoothFilterPropForm);
    } // setupUi

    void retranslateUi(QWidget *smoothFilterPropForm)
    {
        smoothFilterPropForm->setWindowTitle(QCoreApplication::translate("smoothFilterPropForm", "Smooth Property", nullptr));
        cellToPoint_radioButton->setText(QCoreApplication::translate("smoothFilterPropForm", "Cell Interpolation", nullptr));
        meshSmooth_radioButton->setText(QCoreApplication::translate("smoothFilterPropForm", "Mesh Smooth", nullptr));
        smooth_groupBox->setTitle(QCoreApplication::translate("smoothFilterPropForm", "mesh smooth", nullptr));
        label->setText(QCoreApplication::translate("smoothFilterPropForm", "smooth coefficient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class smoothFilterPropForm: public Ui_smoothFilterPropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOOTHFILTERPROPFORM_H
