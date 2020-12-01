/********************************************************************************
** Form generated from reading UI file 'dialogCreateFace.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATEFACE_H
#define UI_DIALOGCREATEFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateFaceDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *namelineEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *edgelabel;
    QPushButton *geoSelectCurve;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateFaceDialog)
    {
        if (CreateFaceDialog->objectName().isEmpty())
            CreateFaceDialog->setObjectName(QString::fromUtf8("CreateFaceDialog"));
        CreateFaceDialog->resize(362, 139);
        gridLayout_2 = new QGridLayout(CreateFaceDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CreateFaceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        namelineEdit = new QLineEdit(CreateFaceDialog);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        horizontalLayout->addWidget(namelineEdit);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(CreateFaceDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        edgelabel = new QLabel(groupBox);
        edgelabel->setObjectName(QString::fromUtf8("edgelabel"));

        gridLayout->addWidget(edgelabel, 0, 0, 1, 1);

        geoSelectCurve = new QPushButton(groupBox);
        geoSelectCurve->setObjectName(QString::fromUtf8("geoSelectCurve"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geoSelectCurve->sizePolicy().hasHeightForWidth());
        geoSelectCurve->setSizePolicy(sizePolicy);
        geoSelectCurve->setMinimumSize(QSize(32, 32));
        geoSelectCurve->setMaximumSize(QSize(32, 32));
        geoSelectCurve->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));
        geoSelectCurve->setCheckable(true);
        geoSelectCurve->setChecked(false);

        gridLayout->addWidget(geoSelectCurve, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateFaceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(CreateFaceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateFaceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateFaceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateFaceDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateFaceDialog)
    {
        CreateFaceDialog->setWindowTitle(QCoreApplication::translate("CreateFaceDialog", "Create Face", nullptr));
        label->setText(QCoreApplication::translate("CreateFaceDialog", "Name:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateFaceDialog", "Select Edge", nullptr));
        edgelabel->setText(QCoreApplication::translate("CreateFaceDialog", "Selected edge(0)", nullptr));
        geoSelectCurve->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateFaceDialog: public Ui_CreateFaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATEFACE_H
