/********************************************************************************
** Form generated from reading UI file 'DialogAddSolver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDSOLVER_H
#define UI_DIALOGADDSOLVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddSolverDialog
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QRadioButton *sdRadioButton;
    QRadioButton *tpradioButton;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout;
    QLineEdit *pathlineEdit;
    QPushButton *fileSelect;
    QLineEdit *arguementsLineEdit;
    QLineEdit *processkeyLineEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *templateRadioButton;
    QRadioButton *fileRadioButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *templateLineEdit;
    QPushButton *fileSelect_1;
    QComboBox *FileComboBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QComboBox *transformerComboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *out_OkButton;
    QPushButton *out_CancelButton;

    void setupUi(QDialog *AddSolverDialog)
    {
        if (AddSolverDialog->objectName().isEmpty())
            AddSolverDialog->setObjectName(QString::fromUtf8("AddSolverDialog"));
        AddSolverDialog->resize(346, 364);
        gridLayout_5 = new QGridLayout(AddSolverDialog);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(AddSolverDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        sdRadioButton = new QRadioButton(groupBox);
        sdRadioButton->setObjectName(QString::fromUtf8("sdRadioButton"));
        sdRadioButton->setChecked(true);

        gridLayout_4->addWidget(sdRadioButton, 0, 0, 1, 1);

        tpradioButton = new QRadioButton(groupBox);
        tpradioButton->setObjectName(QString::fromUtf8("tpradioButton"));

        gridLayout_4->addWidget(tpradioButton, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(AddSolverDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(AddSolverDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(AddSolverDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(AddSolverDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        nameLineEdit = new QLineEdit(AddSolverDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        verticalLayout_4->addWidget(nameLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pathlineEdit = new QLineEdit(AddSolverDialog);
        pathlineEdit->setObjectName(QString::fromUtf8("pathlineEdit"));

        horizontalLayout->addWidget(pathlineEdit);

        fileSelect = new QPushButton(AddSolverDialog);
        fileSelect->setObjectName(QString::fromUtf8("fileSelect"));
        fileSelect->setMinimumSize(QSize(32, 22));
        fileSelect->setMaximumSize(QSize(28, 27));
        fileSelect->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/icon/open.png);"));

        horizontalLayout->addWidget(fileSelect);


        verticalLayout_4->addLayout(horizontalLayout);

        arguementsLineEdit = new QLineEdit(AddSolverDialog);
        arguementsLineEdit->setObjectName(QString::fromUtf8("arguementsLineEdit"));

        verticalLayout_4->addWidget(arguementsLineEdit);

        processkeyLineEdit = new QLineEdit(AddSolverDialog);
        processkeyLineEdit->setObjectName(QString::fromUtf8("processkeyLineEdit"));

        verticalLayout_4->addWidget(processkeyLineEdit);


        gridLayout_3->addLayout(verticalLayout_4, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(AddSolverDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        templateRadioButton = new QRadioButton(groupBox_2);
        templateRadioButton->setObjectName(QString::fromUtf8("templateRadioButton"));
        templateRadioButton->setChecked(true);

        verticalLayout_2->addWidget(templateRadioButton);

        fileRadioButton = new QRadioButton(groupBox_2);
        fileRadioButton->setObjectName(QString::fromUtf8("fileRadioButton"));

        verticalLayout_2->addWidget(fileRadioButton);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        templateLineEdit = new QLineEdit(groupBox_2);
        templateLineEdit->setObjectName(QString::fromUtf8("templateLineEdit"));

        horizontalLayout_7->addWidget(templateLineEdit);

        fileSelect_1 = new QPushButton(groupBox_2);
        fileSelect_1->setObjectName(QString::fromUtf8("fileSelect_1"));
        fileSelect_1->setMinimumSize(QSize(0, 25));
        fileSelect_1->setMaximumSize(QSize(16777215, 25));
        fileSelect_1->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/icon/open.png);"));

        horizontalLayout_7->addWidget(fileSelect_1);


        verticalLayout->addLayout(horizontalLayout_7);

        FileComboBox = new QComboBox(groupBox_2);
        FileComboBox->setObjectName(QString::fromUtf8("FileComboBox"));

        verticalLayout->addWidget(FileComboBox);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(AddSolverDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_5);

        transformerComboBox = new QComboBox(groupBox_3);
        transformerComboBox->setObjectName(QString::fromUtf8("transformerComboBox"));

        horizontalLayout_8->addWidget(transformerComboBox);


        gridLayout_2->addLayout(horizontalLayout_8, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        out_OkButton = new QPushButton(AddSolverDialog);
        out_OkButton->setObjectName(QString::fromUtf8("out_OkButton"));

        horizontalLayout_2->addWidget(out_OkButton);

        out_CancelButton = new QPushButton(AddSolverDialog);
        out_CancelButton->setObjectName(QString::fromUtf8("out_CancelButton"));

        horizontalLayout_2->addWidget(out_CancelButton);


        gridLayout_5->addLayout(horizontalLayout_2, 4, 0, 1, 1);


        retranslateUi(AddSolverDialog);

        QMetaObject::connectSlotsByName(AddSolverDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSolverDialog)
    {
        AddSolverDialog->setWindowTitle(QCoreApplication::translate("AddSolverDialog", "Add Solver", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddSolverDialog", "Solver Type", nullptr));
        sdRadioButton->setText(QCoreApplication::translate("AddSolverDialog", "Self Develop", nullptr));
        tpradioButton->setText(QCoreApplication::translate("AddSolverDialog", "Thrid Party", nullptr));
        label->setText(QCoreApplication::translate("AddSolverDialog", "Solver name:", nullptr));
        label_2->setText(QCoreApplication::translate("AddSolverDialog", "File path:", nullptr));
        label_3->setText(QCoreApplication::translate("AddSolverDialog", "Start arguements:", nullptr));
        label_4->setText(QCoreApplication::translate("AddSolverDialog", "Process key word:", nullptr));
        fileSelect->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("AddSolverDialog", "Input File", nullptr));
        templateRadioButton->setText(QCoreApplication::translate("AddSolverDialog", "Template", nullptr));
        fileRadioButton->setText(QCoreApplication::translate("AddSolverDialog", "File format", nullptr));
        fileSelect_1->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("AddSolverDialog", "Output Transform", nullptr));
        label_5->setText(QCoreApplication::translate("AddSolverDialog", "Transformer:", nullptr));
        out_OkButton->setText(QCoreApplication::translate("AddSolverDialog", "OK", nullptr));
        out_CancelButton->setText(QCoreApplication::translate("AddSolverDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSolverDialog: public Ui_AddSolverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDSOLVER_H
