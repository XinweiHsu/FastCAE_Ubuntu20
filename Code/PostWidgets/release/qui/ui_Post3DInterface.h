/********************************************************************************
** Form generated from reading UI file 'Post3DInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POST3DINTERFACE_H
#define UI_POST3DINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Post3DInterface
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *graphLayout;

    void setupUi(QWidget *Post3DInterface)
    {
        if (Post3DInterface->objectName().isEmpty())
            Post3DInterface->setObjectName(QString::fromUtf8("Post3DInterface"));
        Post3DInterface->resize(737, 482);
        gridLayout_2 = new QGridLayout(Post3DInterface);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        graphLayout = new QGridLayout();
        graphLayout->setObjectName(QString::fromUtf8("graphLayout"));

        gridLayout_2->addLayout(graphLayout, 0, 0, 1, 1);


        retranslateUi(Post3DInterface);

        QMetaObject::connectSlotsByName(Post3DInterface);
    } // setupUi

    void retranslateUi(QWidget *Post3DInterface)
    {
        Post3DInterface->setWindowTitle(QCoreApplication::translate("Post3DInterface", "3D Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Post3DInterface: public Ui_Post3DInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POST3DINTERFACE_H
