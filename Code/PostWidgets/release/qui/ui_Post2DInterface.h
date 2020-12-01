/********************************************************************************
** Form generated from reading UI file 'Post2DInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POST2DINTERFACE_H
#define UI_POST2DINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Post2DInterface
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *plotLayout;

    void setupUi(QWidget *Post2DInterface)
    {
        if (Post2DInterface->objectName().isEmpty())
            Post2DInterface->setObjectName(QString::fromUtf8("Post2DInterface"));
        Post2DInterface->resize(781, 510);
        gridLayout_2 = new QGridLayout(Post2DInterface);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        plotLayout = new QGridLayout();
        plotLayout->setObjectName(QString::fromUtf8("plotLayout"));

        gridLayout_2->addLayout(plotLayout, 0, 0, 1, 1);


        retranslateUi(Post2DInterface);

        QMetaObject::connectSlotsByName(Post2DInterface);
    } // setupUi

    void retranslateUi(QWidget *Post2DInterface)
    {
        Post2DInterface->setWindowTitle(QCoreApplication::translate("Post2DInterface", "2D Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Post2DInterface: public Ui_Post2DInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POST2DINTERFACE_H
