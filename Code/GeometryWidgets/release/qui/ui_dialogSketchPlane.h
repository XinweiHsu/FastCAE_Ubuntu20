/********************************************************************************
** Form generated from reading UI file 'dialogSketchPlane.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSKETCHPLANE_H
#define UI_DIALOGSKETCHPLANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SketchPlaneDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonXOY;
    QRadioButton *radioButtonYOZ;
    QRadioButton *radioButtonXOZ;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonUser;
    QPushButton *geoSelectSurface;
    QCheckBox *checkBoxReverse;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SketchPlaneDialog)
    {
        if (SketchPlaneDialog->objectName().isEmpty())
            SketchPlaneDialog->setObjectName(QString::fromUtf8("SketchPlaneDialog"));
        SketchPlaneDialog->resize(324, 198);
        gridLayout_2 = new QGridLayout(SketchPlaneDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(SketchPlaneDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonXOY = new QRadioButton(groupBox_2);
        radioButtonXOY->setObjectName(QString::fromUtf8("radioButtonXOY"));
        radioButtonXOY->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonXOY);

        radioButtonYOZ = new QRadioButton(groupBox_2);
        radioButtonYOZ->setObjectName(QString::fromUtf8("radioButtonYOZ"));

        horizontalLayout_4->addWidget(radioButtonYOZ);

        radioButtonXOZ = new QRadioButton(groupBox_2);
        radioButtonXOZ->setObjectName(QString::fromUtf8("radioButtonXOZ"));
        radioButtonXOZ->setChecked(false);

        horizontalLayout_4->addWidget(radioButtonXOZ);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonUser = new QRadioButton(groupBox_2);
        radioButtonUser->setObjectName(QString::fromUtf8("radioButtonUser"));

        horizontalLayout->addWidget(radioButtonUser);

        geoSelectSurface = new QPushButton(groupBox_2);
        geoSelectSurface->setObjectName(QString::fromUtf8("geoSelectSurface"));
        geoSelectSurface->setMinimumSize(QSize(32, 32));
        geoSelectSurface->setMaximumSize(QSize(32, 32));
        geoSelectSurface->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectface.png);"));

        horizontalLayout->addWidget(geoSelectSurface);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        checkBoxReverse = new QCheckBox(SketchPlaneDialog);
        checkBoxReverse->setObjectName(QString::fromUtf8("checkBoxReverse"));

        gridLayout_2->addWidget(checkBoxReverse, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SketchPlaneDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(SketchPlaneDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SketchPlaneDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SketchPlaneDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SketchPlaneDialog);
    } // setupUi

    void retranslateUi(QDialog *SketchPlaneDialog)
    {
        SketchPlaneDialog->setWindowTitle(QCoreApplication::translate("SketchPlaneDialog", "Sketch Plane", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SketchPlaneDialog", "Plane", nullptr));
        radioButtonXOY->setText(QCoreApplication::translate("SketchPlaneDialog", "XOY plane", nullptr));
        radioButtonYOZ->setText(QCoreApplication::translate("SketchPlaneDialog", "YOZ plane", nullptr));
        radioButtonXOZ->setText(QCoreApplication::translate("SketchPlaneDialog", "XOZ plane", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("SketchPlaneDialog", "Select a plane", nullptr));
        geoSelectSurface->setText(QString());
        checkBoxReverse->setText(QCoreApplication::translate("SketchPlaneDialog", "Reverse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SketchPlaneDialog: public Ui_SketchPlaneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSKETCHPLANE_H
