/********************************************************************************
** Form generated from reading UI file 'dialogMakeFillHole.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAKEFILLHOLE_H
#define UI_DIALOGMAKEFILLHOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FillHoleDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *geoSelectSurface_1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FillHoleDialog)
    {
        if (FillHoleDialog->objectName().isEmpty())
            FillHoleDialog->setObjectName(QString::fromUtf8("FillHoleDialog"));
        FillHoleDialog->resize(306, 144);
        gridLayout_2 = new QGridLayout(FillHoleDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(FillHoleDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        geoSelectSurface_1 = new QPushButton(groupBox);
        geoSelectSurface_1->setObjectName(QString::fromUtf8("geoSelectSurface_1"));
        geoSelectSurface_1->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectface.png);"));

        gridLayout->addWidget(geoSelectSurface_1, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(FillHoleDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(FillHoleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FillHoleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FillHoleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FillHoleDialog);
    } // setupUi

    void retranslateUi(QDialog *FillHoleDialog)
    {
        FillHoleDialog->setWindowTitle(QCoreApplication::translate("FillHoleDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FillHoleDialog", "Hole", nullptr));
        label->setText(QCoreApplication::translate("FillHoleDialog", "Selected Hole(0)", nullptr));
        geoSelectSurface_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FillHoleDialog: public Ui_FillHoleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAKEFILLHOLE_H
