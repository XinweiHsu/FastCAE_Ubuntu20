/********************************************************************************
** Form generated from reading UI file 'refelctionfilterpropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFELCTIONFILTERPROPFORM_H
#define UI_REFELCTIONFILTERPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_refelctionFilterPropForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QCheckBox *copyInput_checkBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *refelctionFilterPropForm)
    {
        if (refelctionFilterPropForm->objectName().isEmpty())
            refelctionFilterPropForm->setObjectName(QString::fromUtf8("refelctionFilterPropForm"));
        refelctionFilterPropForm->resize(255, 185);
        verticalLayout = new QVBoxLayout(refelctionFilterPropForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(refelctionFilterPropForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(refelctionFilterPropForm);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        copyInput_checkBox = new QCheckBox(refelctionFilterPropForm);
        copyInput_checkBox->setObjectName(QString::fromUtf8("copyInput_checkBox"));

        verticalLayout->addWidget(copyInput_checkBox);

        verticalSpacer = new QSpacerItem(20, 136, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(refelctionFilterPropForm);

        QMetaObject::connectSlotsByName(refelctionFilterPropForm);
    } // setupUi

    void retranslateUi(QWidget *refelctionFilterPropForm)
    {
        refelctionFilterPropForm->setWindowTitle(QCoreApplication::translate("refelctionFilterPropForm", "Reflection Property", nullptr));
        label->setText(QCoreApplication::translate("refelctionFilterPropForm", "reflection:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("refelctionFilterPropForm", "X_MIN", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("refelctionFilterPropForm", "Y_MIN", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("refelctionFilterPropForm", "Z_MIN", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("refelctionFilterPropForm", "X_MAX", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("refelctionFilterPropForm", "Y_MAX", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("refelctionFilterPropForm", "Z_MAX", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("refelctionFilterPropForm", "X", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("refelctionFilterPropForm", "Y", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("refelctionFilterPropForm", "Z", nullptr));

        copyInput_checkBox->setText(QCoreApplication::translate("refelctionFilterPropForm", "Copy Input", nullptr));
    } // retranslateUi

};

namespace Ui {
    class refelctionFilterPropForm: public Ui_refelctionFilterPropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFELCTIONFILTERPROPFORM_H
