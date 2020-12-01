/********************************************************************************
** Form generated from reading UI file 'DialogCreatePhysicsModel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATEPHYSICSMODEL_H
#define UI_DIALOGCREATEPHYSICSMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogCreateModel
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *nameLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *controlLayout;
    QLineEdit *projectName;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogCreateModel)
    {
        if (DialogCreateModel->objectName().isEmpty())
            DialogCreateModel->setObjectName(QString::fromUtf8("DialogCreateModel"));
        DialogCreateModel->resize(317, 112);
        verticalLayout = new QVBoxLayout(DialogCreateModel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameLayout = new QVBoxLayout();
        nameLayout->setObjectName(QString::fromUtf8("nameLayout"));
        label = new QLabel(DialogCreateModel);
        label->setObjectName(QString::fromUtf8("label"));

        nameLayout->addWidget(label);

        label_2 = new QLabel(DialogCreateModel);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        nameLayout->addWidget(label_2);


        gridLayout->addLayout(nameLayout, 0, 0, 1, 1);

        controlLayout = new QVBoxLayout();
        controlLayout->setObjectName(QString::fromUtf8("controlLayout"));
        projectName = new QLineEdit(DialogCreateModel);
        projectName->setObjectName(QString::fromUtf8("projectName"));

        controlLayout->addWidget(projectName);

        comboBox = new QComboBox(DialogCreateModel);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        controlLayout->addWidget(comboBox);


        gridLayout->addLayout(controlLayout, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(DialogCreateModel);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DialogCreateModel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogCreateModel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogCreateModel, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogCreateModel);
    } // setupUi

    void retranslateUi(QDialog *DialogCreateModel)
    {
        DialogCreateModel->setWindowTitle(QCoreApplication::translate("DialogCreateModel", "Create Case", nullptr));
        label->setText(QCoreApplication::translate("DialogCreateModel", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("DialogCreateModel", "Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCreateModel: public Ui_DialogCreateModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATEPHYSICSMODEL_H
