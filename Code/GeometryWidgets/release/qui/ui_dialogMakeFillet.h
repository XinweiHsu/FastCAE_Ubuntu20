/********************************************************************************
** Form generated from reading UI file 'dialogMakeFillet.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAKEFILLET_H
#define UI_DIALOGMAKEFILLET_H

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

class Ui_CreateFilterDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *edgelabel;
    QPushButton *geoSelectCurve;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditRadius;
    QLabel *label_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateFilterDialog)
    {
        if (CreateFilterDialog->objectName().isEmpty())
            CreateFilterDialog->setObjectName(QString::fromUtf8("CreateFilterDialog"));
        CreateFilterDialog->resize(400, 171);
        gridLayout_3 = new QGridLayout(CreateFilterDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(CreateFilterDialog);
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

        gridLayout->addWidget(geoSelectCurve, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(CreateFilterDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditRadius = new QLineEdit(groupBox_2);
        lineEditRadius->setObjectName(QString::fromUtf8("lineEditRadius"));

        horizontalLayout_3->addWidget(lineEditRadius);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateFilterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(CreateFilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateFilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateFilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateFilterDialog)
    {
        CreateFilterDialog->setWindowTitle(QCoreApplication::translate("CreateFilterDialog", "Create Fillet", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateFilterDialog", "Edge", nullptr));
        edgelabel->setText(QCoreApplication::translate("CreateFilterDialog", "Selected edge(0)", nullptr));
        geoSelectCurve->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("CreateFilterDialog", "Distance", nullptr));
        label_3->setText(QCoreApplication::translate("CreateFilterDialog", "Radius:", nullptr));
        lineEditRadius->setText(QCoreApplication::translate("CreateFilterDialog", "1.00", nullptr));
        label_6->setText(QCoreApplication::translate("CreateFilterDialog", "mm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateFilterDialog: public Ui_CreateFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAKEFILLET_H
