/********************************************************************************
** Form generated from reading UI file 'EditorSolverManager.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORSOLVERMANAGER_H
#define UI_EDITORSOLVERMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_EditorSolverManager
{
public:
    QGridLayout *gridLayout;
    QListWidget *solverList;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *out_AddSolverButton;
    QPushButton *out_RemoveButton;
    QPushButton *out_ModifyButton;

    void setupUi(QDialog *EditorSolverManager)
    {
        if (EditorSolverManager->objectName().isEmpty())
            EditorSolverManager->setObjectName(QString::fromUtf8("EditorSolverManager"));
        EditorSolverManager->resize(266, 432);
        gridLayout = new QGridLayout(EditorSolverManager);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        solverList = new QListWidget(EditorSolverManager);
        solverList->setObjectName(QString::fromUtf8("solverList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(solverList->sizePolicy().hasHeightForWidth());
        solverList->setSizePolicy(sizePolicy);
        solverList->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(solverList, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        out_AddSolverButton = new QPushButton(EditorSolverManager);
        out_AddSolverButton->setObjectName(QString::fromUtf8("out_AddSolverButton"));

        horizontalLayout_2->addWidget(out_AddSolverButton);

        out_RemoveButton = new QPushButton(EditorSolverManager);
        out_RemoveButton->setObjectName(QString::fromUtf8("out_RemoveButton"));

        horizontalLayout_2->addWidget(out_RemoveButton);

        out_ModifyButton = new QPushButton(EditorSolverManager);
        out_ModifyButton->setObjectName(QString::fromUtf8("out_ModifyButton"));

        horizontalLayout_2->addWidget(out_ModifyButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(EditorSolverManager);

        QMetaObject::connectSlotsByName(EditorSolverManager);
    } // setupUi

    void retranslateUi(QDialog *EditorSolverManager)
    {
        EditorSolverManager->setWindowTitle(QCoreApplication::translate("EditorSolverManager", "Solver Manager", nullptr));
        out_AddSolverButton->setText(QCoreApplication::translate("EditorSolverManager", "Add", nullptr));
        out_RemoveButton->setText(QCoreApplication::translate("EditorSolverManager", "Remove", nullptr));
        out_ModifyButton->setText(QCoreApplication::translate("EditorSolverManager", "Modify", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorSolverManager: public Ui_EditorSolverManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORSOLVERMANAGER_H
