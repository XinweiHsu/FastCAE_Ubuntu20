/****************************************************************************
** Meta object code from reading C++ file 'XRandomWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../XRandomWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XRandomWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XRandomWidget_t {
    QByteArrayData data[6];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XRandomWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XRandomWidget_t qt_meta_stringdata_XRandomWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "XRandomWidget"
QT_MOC_LITERAL(1, 14, 23), // "slot_clicked_btn_random"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "slot_clicked_radio_btn"
QT_MOC_LITERAL(4, 62, 6), // "bCheck"
QT_MOC_LITERAL(5, 69, 16) // "slot_check_value"

    },
    "XRandomWidget\0slot_clicked_btn_random\0"
    "\0slot_clicked_radio_btn\0bCheck\0"
    "slot_check_value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XRandomWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void XRandomWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XRandomWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_clicked_btn_random(); break;
        case 1: _t->slot_clicked_radio_btn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slot_check_value(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XRandomWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_XRandomWidget.data,
    qt_meta_data_XRandomWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XRandomWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XRandomWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XRandomWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int XRandomWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
