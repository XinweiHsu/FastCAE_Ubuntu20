/********************************************************************************
** Form generated from reading UI file 'dialogMakeLoft.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAKELOFT_H
#define UI_DIALOGMAKELOFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateLoftDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *topedgelabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *geoSelectCurve;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *removeButton;
    QCheckBox *solidCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateLoftDialog)
    {
        if (CreateLoftDialog->objectName().isEmpty())
            CreateLoftDialog->setObjectName(QString::fromUtf8("CreateLoftDialog"));
        CreateLoftDialog->resize(490, 572);
        gridLayout_3 = new QGridLayout(CreateLoftDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(CreateLoftDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        topedgelabel = new QLabel(groupBox);
        topedgelabel->setObjectName(QString::fromUtf8("topedgelabel"));

        horizontalLayout->addWidget(topedgelabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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

        horizontalLayout->addWidget(geoSelectCurve);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/add.png);"));

        horizontalLayout_2->addWidget(addButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(CreateLoftDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidget = new QTableWidget(groupBox_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(368, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        removeButton = new QPushButton(groupBox_2);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/remove.png);"));

        gridLayout_2->addWidget(removeButton, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 2);

        solidCheckBox = new QCheckBox(CreateLoftDialog);
        solidCheckBox->setObjectName(QString::fromUtf8("solidCheckBox"));

        gridLayout_3->addWidget(solidCheckBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateLoftDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(CreateLoftDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateLoftDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateLoftDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateLoftDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateLoftDialog)
    {
        CreateLoftDialog->setWindowTitle(QCoreApplication::translate("CreateLoftDialog", "Create Loft", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateLoftDialog", "Section", nullptr));
        topedgelabel->setText(QCoreApplication::translate("CreateLoftDialog", "Selected Edge(0)", nullptr));
        geoSelectCurve->setText(QString());
        label->setText(QCoreApplication::translate("CreateLoftDialog", "Add new section", nullptr));
        addButton->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("CreateLoftDialog", "Sections", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CreateLoftDialog", "Section", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CreateLoftDialog", "Numbers", nullptr));
        removeButton->setText(QString());
        solidCheckBox->setText(QCoreApplication::translate("CreateLoftDialog", "Generate Solid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateLoftDialog: public Ui_CreateLoftDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAKELOFT_H
