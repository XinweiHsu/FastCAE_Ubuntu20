/********************************************************************************
** Form generated from reading UI file 'contourfilterpropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTOURFILTERPROPFORM_H
#define UI_CONTOURFILTERPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contourFilterPropForm
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QDoubleSpinBox *val_spinbox;
    QCheckBox *reflection_checkBox;
    QGroupBox *reflection_groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *reflection_comboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *contourFilterPropForm)
    {
        if (contourFilterPropForm->objectName().isEmpty())
            contourFilterPropForm->setObjectName(QString::fromUtf8("contourFilterPropForm"));
        contourFilterPropForm->resize(251, 188);
        verticalLayout = new QVBoxLayout(contourFilterPropForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(contourFilterPropForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(contourFilterPropForm);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(contourFilterPropForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        val_spinbox = new QDoubleSpinBox(contourFilterPropForm);
        val_spinbox->setObjectName(QString::fromUtf8("val_spinbox"));
        val_spinbox->setSingleStep(0.010000000000000);

        gridLayout->addWidget(val_spinbox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        reflection_checkBox = new QCheckBox(contourFilterPropForm);
        reflection_checkBox->setObjectName(QString::fromUtf8("reflection_checkBox"));

        verticalLayout->addWidget(reflection_checkBox);

        reflection_groupBox = new QGroupBox(contourFilterPropForm);
        reflection_groupBox->setObjectName(QString::fromUtf8("reflection_groupBox"));
        horizontalLayout = new QHBoxLayout(reflection_groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(reflection_groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        reflection_comboBox = new QComboBox(reflection_groupBox);
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->setObjectName(QString::fromUtf8("reflection_comboBox"));

        horizontalLayout->addWidget(reflection_comboBox);


        verticalLayout->addWidget(reflection_groupBox);

        verticalSpacer = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(contourFilterPropForm);

        QMetaObject::connectSlotsByName(contourFilterPropForm);
    } // setupUi

    void retranslateUi(QWidget *contourFilterPropForm)
    {
        contourFilterPropForm->setWindowTitle(QCoreApplication::translate("contourFilterPropForm", "Contour Property", nullptr));
        label->setText(QCoreApplication::translate("contourFilterPropForm", "contour by", nullptr));
        label_2->setText(QCoreApplication::translate("contourFilterPropForm", "value", nullptr));
        reflection_checkBox->setText(QCoreApplication::translate("contourFilterPropForm", "Reflection", nullptr));
        reflection_groupBox->setTitle(QCoreApplication::translate("contourFilterPropForm", "reflection", nullptr));
        label_3->setText(QCoreApplication::translate("contourFilterPropForm", "reflection:", nullptr));
        reflection_comboBox->setItemText(0, QCoreApplication::translate("contourFilterPropForm", "X_MIN", nullptr));
        reflection_comboBox->setItemText(1, QCoreApplication::translate("contourFilterPropForm", "Y_MIN", nullptr));
        reflection_comboBox->setItemText(2, QCoreApplication::translate("contourFilterPropForm", "Z_MIN", nullptr));
        reflection_comboBox->setItemText(3, QCoreApplication::translate("contourFilterPropForm", "X_MAX", nullptr));
        reflection_comboBox->setItemText(4, QCoreApplication::translate("contourFilterPropForm", "Y_MAX", nullptr));
        reflection_comboBox->setItemText(5, QCoreApplication::translate("contourFilterPropForm", "Z_MAX", nullptr));
        reflection_comboBox->setItemText(6, QCoreApplication::translate("contourFilterPropForm", "X", nullptr));
        reflection_comboBox->setItemText(7, QCoreApplication::translate("contourFilterPropForm", "Y", nullptr));
        reflection_comboBox->setItemText(8, QCoreApplication::translate("contourFilterPropForm", "Z", nullptr));

    } // retranslateUi

};

namespace Ui {
    class contourFilterPropForm: public Ui_contourFilterPropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTOURFILTERPROPFORM_H
