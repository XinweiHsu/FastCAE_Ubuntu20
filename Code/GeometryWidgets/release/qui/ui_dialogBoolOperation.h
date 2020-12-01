/********************************************************************************
** Form generated from reading UI file 'dialogBoolOperation.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBOOLOPERATION_H
#define UI_DIALOGBOOLOPERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BoolOptionDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *edgelabel;
    QPushButton *geoSelectSurface;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *edgelabel_1;
    QPushButton *geoSelectSurface_1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BoolOptionDialog)
    {
        if (BoolOptionDialog->objectName().isEmpty())
            BoolOptionDialog->setObjectName(QString::fromUtf8("BoolOptionDialog"));
        BoolOptionDialog->resize(340, 181);
        gridLayout_3 = new QGridLayout(BoolOptionDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(BoolOptionDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        edgelabel = new QLabel(groupBox);
        edgelabel->setObjectName(QString::fromUtf8("edgelabel"));

        gridLayout->addWidget(edgelabel, 0, 0, 1, 1);

        geoSelectSurface = new QPushButton(groupBox);
        geoSelectSurface->setObjectName(QString::fromUtf8("geoSelectSurface"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geoSelectSurface->sizePolicy().hasHeightForWidth());
        geoSelectSurface->setSizePolicy(sizePolicy);
        geoSelectSurface->setMinimumSize(QSize(32, 32));
        geoSelectSurface->setMaximumSize(QSize(32, 32));
        geoSelectSurface->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectbody.png);"));
        geoSelectSurface->setCheckable(true);

        gridLayout->addWidget(geoSelectSurface, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(BoolOptionDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        edgelabel_1 = new QLabel(groupBox_2);
        edgelabel_1->setObjectName(QString::fromUtf8("edgelabel_1"));

        gridLayout_2->addWidget(edgelabel_1, 0, 0, 1, 1);

        geoSelectSurface_1 = new QPushButton(groupBox_2);
        geoSelectSurface_1->setObjectName(QString::fromUtf8("geoSelectSurface_1"));
        sizePolicy.setHeightForWidth(geoSelectSurface_1->sizePolicy().hasHeightForWidth());
        geoSelectSurface_1->setSizePolicy(sizePolicy);
        geoSelectSurface_1->setMinimumSize(QSize(32, 32));
        geoSelectSurface_1->setMaximumSize(QSize(32, 32));
        geoSelectSurface_1->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectbody.png);"));
        geoSelectSurface_1->setCheckable(true);

        gridLayout_2->addWidget(geoSelectSurface_1, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(BoolOptionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(BoolOptionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BoolOptionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BoolOptionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BoolOptionDialog);
    } // setupUi

    void retranslateUi(QDialog *BoolOptionDialog)
    {
        BoolOptionDialog->setWindowTitle(QCoreApplication::translate("BoolOptionDialog", "Bool Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BoolOptionDialog", "Body 1", nullptr));
        edgelabel->setText(QCoreApplication::translate("BoolOptionDialog", "Selected body(0)", nullptr));
        geoSelectSurface->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("BoolOptionDialog", "Body 2", nullptr));
        edgelabel_1->setText(QCoreApplication::translate("BoolOptionDialog", "Selected body(0)", nullptr));
        geoSelectSurface_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BoolOptionDialog: public Ui_BoolOptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOOLOPERATION_H
