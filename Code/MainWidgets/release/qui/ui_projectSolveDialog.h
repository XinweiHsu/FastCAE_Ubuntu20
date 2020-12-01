/********************************************************************************
** Form generated from reading UI file 'projectSolveDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTSOLVEDIALOG_H
#define UI_PROJECTSOLVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_projectSolveDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *projectComboBox;
    QComboBox *solverComboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *solveButton;
    QPushButton *cancleButton;
    QLabel *label_2;

    void setupUi(QDialog *projectSolveDialog)
    {
        if (projectSolveDialog->objectName().isEmpty())
            projectSolveDialog->setObjectName(QString::fromUtf8("projectSolveDialog"));
        projectSolveDialog->resize(317, 108);
        gridLayout = new QGridLayout(projectSolveDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(projectSolveDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        projectComboBox = new QComboBox(projectSolveDialog);
        projectComboBox->setObjectName(QString::fromUtf8("projectComboBox"));

        gridLayout->addWidget(projectComboBox, 0, 1, 1, 1);

        solverComboBox = new QComboBox(projectSolveDialog);
        solverComboBox->setObjectName(QString::fromUtf8("solverComboBox"));

        gridLayout->addWidget(solverComboBox, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        solveButton = new QPushButton(projectSolveDialog);
        solveButton->setObjectName(QString::fromUtf8("solveButton"));

        horizontalLayout->addWidget(solveButton);

        cancleButton = new QPushButton(projectSolveDialog);
        cancleButton->setObjectName(QString::fromUtf8("cancleButton"));

        horizontalLayout->addWidget(cancleButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        label_2 = new QLabel(projectSolveDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(projectSolveDialog);

        QMetaObject::connectSlotsByName(projectSolveDialog);
    } // setupUi

    void retranslateUi(QDialog *projectSolveDialog)
    {
        projectSolveDialog->setWindowTitle(QCoreApplication::translate("projectSolveDialog", "Solve Project", nullptr));
        label->setText(QCoreApplication::translate("projectSolveDialog", "Project:", nullptr));
        solveButton->setText(QCoreApplication::translate("projectSolveDialog", "Solve", nullptr));
        cancleButton->setText(QCoreApplication::translate("projectSolveDialog", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("projectSolveDialog", "Solver:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class projectSolveDialog: public Ui_projectSolveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSOLVEDIALOG_H
