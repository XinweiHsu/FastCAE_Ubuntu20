/********************************************************************************
** Form generated from reading UI file 'FileDialogDirectory.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEDIALOGDIRECTORY_H
#define UI_FILEDIALOGDIRECTORY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FileDialogDirectory
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *FilePath;
    QPushButton *up_pushButton;
    QPushButton *cmbFilePath;
    QSplitter *splitter;
    QTreeView *mTreeView;
    QTreeWidget *mPipelineTree;
    QGridLayout *_2;
    QComboBox *FileType;
    QLineEdit *FileName;
    QLabel *label;
    QPushButton *Cancel;
    QPushButton *OKChoice;
    QLabel *label_2;

    void setupUi(QDialog *FileDialogDirectory)
    {
        if (FileDialogDirectory->objectName().isEmpty())
            FileDialogDirectory->setObjectName(QString::fromUtf8("FileDialogDirectory"));
        FileDialogDirectory->resize(764, 407);
        FileDialogDirectory->setMinimumSize(QSize(607, 397));
        verticalLayout = new QVBoxLayout(FileDialogDirectory);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(FileDialogDirectory);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        FilePath = new QLineEdit(FileDialogDirectory);
        FilePath->setObjectName(QString::fromUtf8("FilePath"));

        horizontalLayout->addWidget(FilePath);

        up_pushButton = new QPushButton(FileDialogDirectory);
        up_pushButton->setObjectName(QString::fromUtf8("up_pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        up_pushButton->setIcon(icon);

        horizontalLayout->addWidget(up_pushButton);

        cmbFilePath = new QPushButton(FileDialogDirectory);
        cmbFilePath->setObjectName(QString::fromUtf8("cmbFilePath"));

        horizontalLayout->addWidget(cmbFilePath);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(FileDialogDirectory);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        mTreeView = new QTreeView(splitter);
        mTreeView->setObjectName(QString::fromUtf8("mTreeView"));
        mTreeView->setMinimumSize(QSize(500, 0));
        mTreeView->setMaximumSize(QSize(16777215, 16777215));
        mTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mTreeView->setTextElideMode(Qt::ElideNone);
        mTreeView->setRootIsDecorated(true);
        splitter->addWidget(mTreeView);
        mPipelineTree = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("FileName"));
        mPipelineTree->setHeaderItem(__qtreewidgetitem);
        mPipelineTree->setObjectName(QString::fromUtf8("mPipelineTree"));
        mPipelineTree->setSelectionMode(QAbstractItemView::SingleSelection);
        mPipelineTree->setIndentation(10);
        mPipelineTree->setExpandsOnDoubleClick(false);
        splitter->addWidget(mPipelineTree);
        mPipelineTree->header()->setVisible(false);

        verticalLayout->addWidget(splitter);

        _2 = new QGridLayout();
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        FileType = new QComboBox(FileDialogDirectory);
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->addItem(QString());
        FileType->setObjectName(QString::fromUtf8("FileType"));

        _2->addWidget(FileType, 1, 1, 1, 1);

        FileName = new QLineEdit(FileDialogDirectory);
        FileName->setObjectName(QString::fromUtf8("FileName"));
        FileName->setEnabled(false);

        _2->addWidget(FileName, 0, 1, 1, 1);

        label = new QLabel(FileDialogDirectory);
        label->setObjectName(QString::fromUtf8("label"));

        _2->addWidget(label, 1, 0, 1, 1);

        Cancel = new QPushButton(FileDialogDirectory);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        _2->addWidget(Cancel, 1, 2, 1, 1);

        OKChoice = new QPushButton(FileDialogDirectory);
        OKChoice->setObjectName(QString::fromUtf8("OKChoice"));

        _2->addWidget(OKChoice, 0, 2, 1, 1);

        label_2 = new QLabel(FileDialogDirectory);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        _2->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addLayout(_2);

        splitter->raise();

        retranslateUi(FileDialogDirectory);

        QMetaObject::connectSlotsByName(FileDialogDirectory);
    } // setupUi

    void retranslateUi(QDialog *FileDialogDirectory)
    {
        FileDialogDirectory->setWindowTitle(QCoreApplication::translate("FileDialogDirectory", "Open file", nullptr));
        label_3->setText(QCoreApplication::translate("FileDialogDirectory", "File path", nullptr));
        up_pushButton->setText(QString());
        cmbFilePath->setText(QCoreApplication::translate("FileDialogDirectory", "Open", nullptr));
        FileType->setItemText(0, QCoreApplication::translate("FileDialogDirectory", "Data Files (*.vtk  *.vtu *.vtr *.vts *.vtp *.dat *.moor *.cgns *.msh *.sol *.obj *.igs *.iges *.neu *.stl *.cntm *.pre *.hot *.e)", nullptr));
        FileType->setItemText(1, QCoreApplication::translate("FileDialogDirectory", "Vtk Files(*.vtk *.vtu *.vtr *.vts *.vtp)", nullptr));
        FileType->setItemText(2, QCoreApplication::translate("FileDialogDirectory", "Neu Files(*.neu)", nullptr));
        FileType->setItemText(3, QCoreApplication::translate("FileDialogDirectory", "Stl Files(*.stl)", nullptr));
        FileType->setItemText(4, QCoreApplication::translate("FileDialogDirectory", "Dat Files(*.dat *.pre *.hot)", nullptr));
        FileType->setItemText(5, QCoreApplication::translate("FileDialogDirectory", "Sol Files(*.sol)", nullptr));
        FileType->setItemText(6, QCoreApplication::translate("FileDialogDirectory", "Cgns Files(*.cgns)", nullptr));
        FileType->setItemText(7, QCoreApplication::translate("FileDialogDirectory", "Igs Files(*.iges *.igs)", nullptr));
        FileType->setItemText(8, QCoreApplication::translate("FileDialogDirectory", "Cntm Files(*.cntm)", nullptr));
        FileType->setItemText(9, QCoreApplication::translate("FileDialogDirectory", "ExodusII Files(*. e)", nullptr));

        FileType->setCurrentText(QCoreApplication::translate("FileDialogDirectory", "Data Files (*.vtk  *.vtu *.vtr *.vts *.vtp *.dat *.moor *.cgns *.msh *.sol *.obj *.igs *.iges *.neu *.stl *.cntm *.pre *.hot *.e)", nullptr));
        label->setText(QCoreApplication::translate("FileDialogDirectory", "File type", nullptr));
        Cancel->setText(QCoreApplication::translate("FileDialogDirectory", "cancel", nullptr));
        OKChoice->setText(QCoreApplication::translate("FileDialogDirectory", "ok", nullptr));
        label_2->setText(QCoreApplication::translate("FileDialogDirectory", "File name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileDialogDirectory: public Ui_FileDialogDirectory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEDIALOGDIRECTORY_H
