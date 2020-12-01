/********************************************************************************
** Form generated from reading UI file 'EditorDependencyFiles.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORDEPENDENCYFILES_H
#define UI_EDITORDEPENDENCYFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_EditorDependencyFiles
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *SelectFilesPBtn;
    QPushButton *deletePBtn;
    QPushButton *ClearPBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkPBtn;
    QPushButton *CancelPBtn;

    void setupUi(QDialog *EditorDependencyFiles)
    {
        if (EditorDependencyFiles->objectName().isEmpty())
            EditorDependencyFiles->setObjectName(QString::fromUtf8("EditorDependencyFiles"));
        EditorDependencyFiles->resize(583, 496);
        gridLayout = new QGridLayout(EditorDependencyFiles);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(EditorDependencyFiles);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        SelectFilesPBtn = new QPushButton(EditorDependencyFiles);
        SelectFilesPBtn->setObjectName(QString::fromUtf8("SelectFilesPBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SelectFilesPBtn->sizePolicy().hasHeightForWidth());
        SelectFilesPBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(SelectFilesPBtn);

        deletePBtn = new QPushButton(EditorDependencyFiles);
        deletePBtn->setObjectName(QString::fromUtf8("deletePBtn"));
        sizePolicy.setHeightForWidth(deletePBtn->sizePolicy().hasHeightForWidth());
        deletePBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(deletePBtn);

        ClearPBtn = new QPushButton(EditorDependencyFiles);
        ClearPBtn->setObjectName(QString::fromUtf8("ClearPBtn"));
        sizePolicy.setHeightForWidth(ClearPBtn->sizePolicy().hasHeightForWidth());
        ClearPBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(ClearPBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OkPBtn = new QPushButton(EditorDependencyFiles);
        OkPBtn->setObjectName(QString::fromUtf8("OkPBtn"));

        horizontalLayout->addWidget(OkPBtn);

        CancelPBtn = new QPushButton(EditorDependencyFiles);
        CancelPBtn->setObjectName(QString::fromUtf8("CancelPBtn"));

        horizontalLayout->addWidget(CancelPBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(EditorDependencyFiles);

        QMetaObject::connectSlotsByName(EditorDependencyFiles);
    } // setupUi

    void retranslateUi(QDialog *EditorDependencyFiles)
    {
        EditorDependencyFiles->setWindowTitle(QCoreApplication::translate("EditorDependencyFiles", "Slover dependency files", nullptr));
        SelectFilesPBtn->setText(QCoreApplication::translate("EditorDependencyFiles", "Select", nullptr));
        deletePBtn->setText(QCoreApplication::translate("EditorDependencyFiles", "Delete", nullptr));
        ClearPBtn->setText(QCoreApplication::translate("EditorDependencyFiles", "Clear All", nullptr));
        OkPBtn->setText(QCoreApplication::translate("EditorDependencyFiles", "Ok", nullptr));
        CancelPBtn->setText(QCoreApplication::translate("EditorDependencyFiles", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorDependencyFiles: public Ui_EditorDependencyFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORDEPENDENCYFILES_H
