/****************************************************************************
** Meta object code from reading C++ file 'savescriptdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../savescriptdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savescriptdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_saveScriptDialog_t {
    QByteArrayData data[17];
    char stringdata0[412];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_saveScriptDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_saveScriptDialog_t qt_meta_stringdata_saveScriptDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "saveScriptDialog"
QT_MOC_LITERAL(1, 17, 29), // "on_saveImage_checkBox_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "checked"
QT_MOC_LITERAL(4, 56, 31), // "on_imagePath_pushButton_clicked"
QT_MOC_LITERAL(5, 88, 27), // "on_saveAvi_checkBox_clicked"
QT_MOC_LITERAL(6, 116, 29), // "on_aviPath_pushButton_clicked"
QT_MOC_LITERAL(7, 146, 32), // "on_scriptPath_pushButton_clicked"
QT_MOC_LITERAL(8, 179, 26), // "on_save_pushButton_clicked"
QT_MOC_LITERAL(9, 206, 27), // "on_close_pushButton_clicked"
QT_MOC_LITERAL(10, 234, 27), // "on_wid_lineEdit_textChanged"
QT_MOC_LITERAL(11, 262, 4), // "arg1"
QT_MOC_LITERAL(12, 267, 27), // "on_hei_lineEdit_textChanged"
QT_MOC_LITERAL(13, 295, 28), // "on_autoExit_checkBox_clicked"
QT_MOC_LITERAL(14, 324, 32), // "on_exitTime_spinBox_valueChanged"
QT_MOC_LITERAL(15, 357, 28), // "on_plotSize_checkBox_clicked"
QT_MOC_LITERAL(16, 386, 25) // "on_adapt_checkBox_clicked"

    },
    "saveScriptDialog\0on_saveImage_checkBox_clicked\0"
    "\0checked\0on_imagePath_pushButton_clicked\0"
    "on_saveAvi_checkBox_clicked\0"
    "on_aviPath_pushButton_clicked\0"
    "on_scriptPath_pushButton_clicked\0"
    "on_save_pushButton_clicked\0"
    "on_close_pushButton_clicked\0"
    "on_wid_lineEdit_textChanged\0arg1\0"
    "on_hei_lineEdit_textChanged\0"
    "on_autoExit_checkBox_clicked\0"
    "on_exitTime_spinBox_valueChanged\0"
    "on_plotSize_checkBox_clicked\0"
    "on_adapt_checkBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_saveScriptDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    1,   83,    2, 0x08 /* Private */,
       6,    0,   86,    2, 0x08 /* Private */,
       7,    0,   87,    2, 0x08 /* Private */,
       8,    0,   88,    2, 0x08 /* Private */,
       9,    0,   89,    2, 0x08 /* Private */,
      10,    1,   90,    2, 0x08 /* Private */,
      12,    1,   93,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,
      15,    1,  102,    2, 0x08 /* Private */,
      16,    1,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void saveScriptDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<saveScriptDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_saveImage_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_imagePath_pushButton_clicked(); break;
        case 2: _t->on_saveAvi_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_aviPath_pushButton_clicked(); break;
        case 4: _t->on_scriptPath_pushButton_clicked(); break;
        case 5: _t->on_save_pushButton_clicked(); break;
        case 6: _t->on_close_pushButton_clicked(); break;
        case 7: _t->on_wid_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_hei_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_autoExit_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_exitTime_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_plotSize_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_adapt_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject saveScriptDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_saveScriptDialog.data,
    qt_meta_data_saveScriptDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *saveScriptDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *saveScriptDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_saveScriptDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int saveScriptDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
