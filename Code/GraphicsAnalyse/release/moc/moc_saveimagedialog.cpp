/****************************************************************************
** Meta object code from reading C++ file 'saveimagedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../saveimagedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saveimagedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_saveImageDialog_t {
    QByteArrayData data[12];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_saveImageDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_saveImageDialog_t qt_meta_stringdata_saveImageDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "saveImageDialog"
QT_MOC_LITERAL(1, 16, 29), // "on_saveImage_checkBox_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 7), // "checked"
QT_MOC_LITERAL(4, 55, 31), // "on_imagePath_pushButton_clicked"
QT_MOC_LITERAL(5, 87, 27), // "on_savePOV_checkBox_clicked"
QT_MOC_LITERAL(6, 115, 29), // "on_povPath_pushButton_clicked"
QT_MOC_LITERAL(7, 145, 26), // "on_save_pushButton_clicked"
QT_MOC_LITERAL(8, 172, 27), // "on_close_pushButton_clicked"
QT_MOC_LITERAL(9, 200, 27), // "on_wid_lineEdit_textChanged"
QT_MOC_LITERAL(10, 228, 4), // "arg1"
QT_MOC_LITERAL(11, 233, 27) // "on_hei_lineEdit_textChanged"

    },
    "saveImageDialog\0on_saveImage_checkBox_clicked\0"
    "\0checked\0on_imagePath_pushButton_clicked\0"
    "on_savePOV_checkBox_clicked\0"
    "on_povPath_pushButton_clicked\0"
    "on_save_pushButton_clicked\0"
    "on_close_pushButton_clicked\0"
    "on_wid_lineEdit_textChanged\0arg1\0"
    "on_hei_lineEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_saveImageDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      11,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void saveImageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<saveImageDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_saveImage_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_imagePath_pushButton_clicked(); break;
        case 2: _t->on_savePOV_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_povPath_pushButton_clicked(); break;
        case 4: _t->on_save_pushButton_clicked(); break;
        case 5: _t->on_close_pushButton_clicked(); break;
        case 6: _t->on_wid_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_hei_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject saveImageDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_saveImageDialog.data,
    qt_meta_data_saveImageDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *saveImageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *saveImageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_saveImageDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int saveImageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
