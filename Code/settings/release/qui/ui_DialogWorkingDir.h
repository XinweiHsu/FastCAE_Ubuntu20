/********************************************************************************
** Form generated from reading UI file 'DialogWorkingDir.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWORKINGDIR_H
#define UI_DIALOGWORKINGDIR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogWorkingDir
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogWorkingDir)
    {
        if (DialogWorkingDir->objectName().isEmpty())
            DialogWorkingDir->setObjectName(QString::fromUtf8("DialogWorkingDir"));
        DialogWorkingDir->resize(400, 108);
        gridLayout = new QGridLayout(DialogWorkingDir);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogWorkingDir);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(DialogWorkingDir);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        pushButton = new QPushButton(DialogWorkingDir);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QUI/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(DialogWorkingDir);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(DialogWorkingDir);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogWorkingDir, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogWorkingDir, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogWorkingDir);
    } // setupUi

    void retranslateUi(QDialog *DialogWorkingDir)
    {
        DialogWorkingDir->setWindowTitle(QCoreApplication::translate("DialogWorkingDir", "Working Dir", nullptr));
        label->setText(QCoreApplication::translate("DialogWorkingDir", "Working Dir\357\274\232", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogWorkingDir: public Ui_DialogWorkingDir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWORKINGDIR_H
