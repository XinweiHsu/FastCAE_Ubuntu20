/********************************************************************************
** Form generated from reading UI file 'DialogCreateSet.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATESET_H
#define UI_DIALOGCREATESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CreateSetDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_name;
    QLineEdit *nameLineEdit;
    QLabel *label_type;
    QComboBox *typeComboBox;
    QCheckBox *checkBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_id;
    QLineEdit *idLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_angle;
    QDoubleSpinBox *doubleSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateSetDialog)
    {
        if (CreateSetDialog->objectName().isEmpty())
            CreateSetDialog->setObjectName(QString::fromUtf8("CreateSetDialog"));
        CreateSetDialog->resize(371, 236);
        CreateSetDialog->setMinimumSize(QSize(371, 236));
        CreateSetDialog->setMaximumSize(QSize(371, 236));
        gridLayout_2 = new QGridLayout(CreateSetDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_name = new QLabel(CreateSetDialog);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setMinimumSize(QSize(66, 25));
        label_name->setMaximumSize(QSize(66, 25));

        gridLayout_2->addWidget(label_name, 0, 0, 1, 1);

        nameLineEdit = new QLineEdit(CreateSetDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(135, 25));
        nameLineEdit->setMaximumSize(QSize(16777215, 25));

        gridLayout_2->addWidget(nameLineEdit, 0, 1, 1, 1);

        label_type = new QLabel(CreateSetDialog);
        label_type->setObjectName(QString::fromUtf8("label_type"));
        label_type->setMinimumSize(QSize(66, 25));
        label_type->setMaximumSize(QSize(66, 25));

        gridLayout_2->addWidget(label_type, 1, 0, 1, 1);

        typeComboBox = new QComboBox(CreateSetDialog);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));
        typeComboBox->setEnabled(true);
        typeComboBox->setMinimumSize(QSize(135, 25));
        typeComboBox->setMaximumSize(QSize(16777215, 25));

        gridLayout_2->addWidget(typeComboBox, 1, 1, 1, 1);

        checkBox = new QCheckBox(CreateSetDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMinimumSize(QSize(0, 25));
        checkBox->setMaximumSize(QSize(16777215, 25));
        checkBox->setChecked(true);

        gridLayout_2->addWidget(checkBox, 2, 0, 1, 2);

        groupBox = new QGroupBox(CreateSetDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_id = new QLabel(groupBox);
        label_id->setObjectName(QString::fromUtf8("label_id"));
        label_id->setEnabled(true);
        label_id->setMinimumSize(QSize(66, 25));
        label_id->setMaximumSize(QSize(66, 25));

        horizontalLayout->addWidget(label_id);

        idLineEdit = new QLineEdit(groupBox);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setEnabled(false);
        idLineEdit->setMinimumSize(QSize(133, 25));
        idLineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(idLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_angle = new QLabel(groupBox);
        label_angle->setObjectName(QString::fromUtf8("label_angle"));
        label_angle->setMinimumSize(QSize(66, 25));
        label_angle->setMaximumSize(QSize(66, 25));

        horizontalLayout_2->addWidget(label_angle);

        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(133, 25));
        doubleSpinBox->setMaximumSize(QSize(16777215, 25));
        doubleSpinBox->setMinimum(-360.000000000000000);
        doubleSpinBox->setMaximum(360.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(CreateSetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(0, 25));
        buttonBox->setMaximumSize(QSize(16777215, 25));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 2);


        retranslateUi(CreateSetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateSetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateSetDialog, SLOT(reject()));

        typeComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CreateSetDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateSetDialog)
    {
        CreateSetDialog->setWindowTitle(QCoreApplication::translate("CreateSetDialog", "Create Set", nullptr));
        label_name->setText(QCoreApplication::translate("CreateSetDialog", "Set Name : ", nullptr));
        label_type->setText(QCoreApplication::translate("CreateSetDialog", "Set Type : ", nullptr));
        typeComboBox->setItemText(0, QCoreApplication::translate("CreateSetDialog", "Node", nullptr));
        typeComboBox->setItemText(1, QCoreApplication::translate("CreateSetDialog", "Element", nullptr));

#if QT_CONFIG(tooltip)
        checkBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        checkBox->setText(QCoreApplication::translate("CreateSetDialog", "Find ConplanarIds", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateSetDialog", "Find Condition", nullptr));
        label_id->setText(QCoreApplication::translate("CreateSetDialog", "Id : ", nullptr));
        label_angle->setText(QCoreApplication::translate("CreateSetDialog", "minAngle : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateSetDialog: public Ui_CreateSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATESET_H
