/********************************************************************************
** Form generated from reading UI file 'DialogMeshChecking.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMESHCHECKING_H
#define UI_DIALOGMESHCHECKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeshCheckingDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *statusLabel;
    QLabel *gifLabel;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QTableWidget *inputTab;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QTableWidget *checkedTab;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QLabel *minlabel;
    QDoubleSpinBox *minBox;
    QLabel *maxlabel;
    QDoubleSpinBox *maxBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *checkButton;
    QPushButton *closeButton;

    void setupUi(QDialog *MeshCheckingDialog)
    {
        if (MeshCheckingDialog->objectName().isEmpty())
            MeshCheckingDialog->setObjectName(QString::fromUtf8("MeshCheckingDialog"));
        MeshCheckingDialog->resize(593, 645);
        gridLayout_2 = new QGridLayout(MeshCheckingDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(MeshCheckingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(MeshCheckingDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBox);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tabWidget = new QTabWidget(MeshCheckingDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        statusLabel = new QLabel(tab);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy1);
        statusLabel->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Arial Black\";"));
        statusLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(statusLabel, 2, 0, 1, 1);

        gifLabel = new QLabel(tab);
        gifLabel->setObjectName(QString::fromUtf8("gifLabel"));

        gridLayout_3->addWidget(gifLabel, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        inputTab = new QTableWidget(groupBox);
        if (inputTab->columnCount() < 2)
            inputTab->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        inputTab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        inputTab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        inputTab->setObjectName(QString::fromUtf8("inputTab"));

        gridLayout_8->addWidget(inputTab, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        checkedTab = new QTableWidget(groupBox_2);
        if (checkedTab->columnCount() < 2)
            checkedTab->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        checkedTab->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        checkedTab->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        checkedTab->setObjectName(QString::fromUtf8("checkedTab"));

        gridLayout_7->addWidget(checkedTab, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(MeshCheckingDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        minlabel = new QLabel(MeshCheckingDialog);
        minlabel->setObjectName(QString::fromUtf8("minlabel"));

        horizontalLayout->addWidget(minlabel);

        minBox = new QDoubleSpinBox(MeshCheckingDialog);
        minBox->setObjectName(QString::fromUtf8("minBox"));
        sizePolicy1.setHeightForWidth(minBox->sizePolicy().hasHeightForWidth());
        minBox->setSizePolicy(sizePolicy1);
        minBox->setMaximumSize(QSize(100, 16777215));
        minBox->setDecimals(6);
        minBox->setMinimum(-1000000000000000000000.000000000000000);
        minBox->setMaximum(1000000000000000044885712678075916785549312.000000000000000);

        horizontalLayout->addWidget(minBox);

        maxlabel = new QLabel(MeshCheckingDialog);
        maxlabel->setObjectName(QString::fromUtf8("maxlabel"));

        horizontalLayout->addWidget(maxlabel);

        maxBox = new QDoubleSpinBox(MeshCheckingDialog);
        maxBox->setObjectName(QString::fromUtf8("maxBox"));
        sizePolicy1.setHeightForWidth(maxBox->sizePolicy().hasHeightForWidth());
        maxBox->setSizePolicy(sizePolicy1);
        maxBox->setMaximumSize(QSize(100, 16777215));
        maxBox->setDecimals(6);
        maxBox->setMinimum(-1000000000000000000000.000000000000000);
        maxBox->setMaximum(1000000000000000044885712678075916785549312.000000000000000);

        horizontalLayout->addWidget(maxBox);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        checkButton = new QPushButton(MeshCheckingDialog);
        checkButton->setObjectName(QString::fromUtf8("checkButton"));

        horizontalLayout_3->addWidget(checkButton);

        closeButton = new QPushButton(MeshCheckingDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout_3->addWidget(closeButton);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(MeshCheckingDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MeshCheckingDialog);
    } // setupUi

    void retranslateUi(QDialog *MeshCheckingDialog)
    {
        MeshCheckingDialog->setWindowTitle(QCoreApplication::translate("MeshCheckingDialog", "Mesh Quality", nullptr));
        label->setText(QCoreApplication::translate("MeshCheckingDialog", "Method\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MeshCheckingDialog", "None", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MeshCheckingDialog", "Area", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MeshCheckingDialog", "Aspect Beta", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MeshCheckingDialog", "Aspect Frobenius", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MeshCheckingDialog", "Aspect Gamma", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MeshCheckingDialog", "Aspect Ratio", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MeshCheckingDialog", "Collapse Ratio", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MeshCheckingDialog", "Condition", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MeshCheckingDialog", "Diagonal", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MeshCheckingDialog", "Dimension", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MeshCheckingDialog", "Distortion", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("MeshCheckingDialog", "Edge Ratio", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("MeshCheckingDialog", "Jacobin", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("MeshCheckingDialog", "Max Angle", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("MeshCheckingDialog", "Max Aspect Frobenius", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("MeshCheckingDialog", "Max Edge Ratio", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("MeshCheckingDialog", "Mad Aspect Frobenius", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("MeshCheckingDialog", "Min angle", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("MeshCheckingDialog", "Normal", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("MeshCheckingDialog", "Oddy", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("MeshCheckingDialog", "Radius Ratio", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("MeshCheckingDialog", "Relative Size Squared", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("MeshCheckingDialog", "Scalaed Jacobin", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("MeshCheckingDialog", "Shape", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("MeshCheckingDialog", "Shape and size", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("MeshCheckingDialog", "Shear", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("MeshCheckingDialog", "Shear and size", nullptr));
        comboBox->setItemText(27, QCoreApplication::translate("MeshCheckingDialog", "Skew", nullptr));
        comboBox->setItemText(28, QCoreApplication::translate("MeshCheckingDialog", "Strech", nullptr));
        comboBox->setItemText(29, QCoreApplication::translate("MeshCheckingDialog", "Taper", nullptr));
        comboBox->setItemText(30, QCoreApplication::translate("MeshCheckingDialog", "Volume", nullptr));
        comboBox->setItemText(31, QCoreApplication::translate("MeshCheckingDialog", "Warpage", nullptr));

        statusLabel->setText(QCoreApplication::translate("MeshCheckingDialog", "Checking...", nullptr));
        gifLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MeshCheckingDialog", "waitting", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MeshCheckingDialog", "Input", nullptr));
        QTableWidgetItem *___qtablewidgetitem = inputTab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MeshCheckingDialog", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = inputTab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MeshCheckingDialog", "Count", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MeshCheckingDialog", "Checked", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = checkedTab->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MeshCheckingDialog", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = checkedTab->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MeshCheckingDialog", "Count", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MeshCheckingDialog", "Basic", nullptr));
        checkBox->setText(QCoreApplication::translate("MeshCheckingDialog", "Show out of range elements while close", nullptr));
        minlabel->setText(QCoreApplication::translate("MeshCheckingDialog", "Min", nullptr));
        maxlabel->setText(QCoreApplication::translate("MeshCheckingDialog", "Max:", nullptr));
        checkButton->setText(QCoreApplication::translate("MeshCheckingDialog", "Check", nullptr));
        closeButton->setText(QCoreApplication::translate("MeshCheckingDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeshCheckingDialog: public Ui_MeshCheckingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMESHCHECKING_H
