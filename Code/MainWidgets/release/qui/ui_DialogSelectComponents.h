/********************************************************************************
** Form generated from reading UI file 'DialogSelectComponents.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSELECTCOMPONENTS_H
#define UI_DIALOGSELECTCOMPONENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogSelectComponents
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacer;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QListWidget *listWidget;

    void setupUi(QDialog *DialogSelectComponents)
    {
        if (DialogSelectComponents->objectName().isEmpty())
            DialogSelectComponents->setObjectName(QString::fromUtf8("DialogSelectComponents"));
        DialogSelectComponents->resize(420, 220);
        DialogSelectComponents->setMinimumSize(QSize(420, 220));
        gridLayout = new QGridLayout(DialogSelectComponents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacer = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer, 1, 0, 1, 1);

        okButton = new QPushButton(DialogSelectComponents);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 1, 1, 1, 1);

        cancelButton = new QPushButton(DialogSelectComponents);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 1, 2, 1, 1);

        listWidget = new QListWidget(DialogSelectComponents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout->addWidget(listWidget, 0, 0, 1, 3);


        retranslateUi(DialogSelectComponents);
        QObject::connect(okButton, SIGNAL(clicked()), DialogSelectComponents, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), DialogSelectComponents, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogSelectComponents);
    } // setupUi

    void retranslateUi(QDialog *DialogSelectComponents)
    {
        DialogSelectComponents->setWindowTitle(QCoreApplication::translate("DialogSelectComponents", "Dialog", nullptr));
        okButton->setText(QCoreApplication::translate("DialogSelectComponents", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("DialogSelectComponents", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSelectComponents: public Ui_DialogSelectComponents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSELECTCOMPONENTS_H
