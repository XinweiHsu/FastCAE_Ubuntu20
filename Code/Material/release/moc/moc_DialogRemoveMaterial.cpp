/****************************************************************************
** Meta object code from reading C++ file 'DialogRemoveMaterial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogRemoveMaterial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogRemoveMaterial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Material__RemoveMaterialDialog_t {
    QByteArrayData data[9];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Material__RemoveMaterialDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Material__RemoveMaterialDialog_t qt_meta_stringdata_Material__RemoveMaterialDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Material::RemoveMaterialDialog"
QT_MOC_LITERAL(1, 31, 27), // "on_cancelPushButton_clicked"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 27), // "on_removePushButton_clicked"
QT_MOC_LITERAL(4, 88, 12), // "on_selectAll"
QT_MOC_LITERAL(5, 101, 14), // "on_clearSelect"
QT_MOC_LITERAL(6, 116, 11), // "itemChanged"
QT_MOC_LITERAL(7, 128, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 145, 4) // "item"

    },
    "Material::RemoveMaterialDialog\0"
    "on_cancelPushButton_clicked\0\0"
    "on_removePushButton_clicked\0on_selectAll\0"
    "on_clearSelect\0itemChanged\0QListWidgetItem*\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Material__RemoveMaterialDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void Material::RemoveMaterialDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoveMaterialDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cancelPushButton_clicked(); break;
        case 1: _t->on_removePushButton_clicked(); break;
        case 2: _t->on_selectAll(); break;
        case 3: _t->on_clearSelect(); break;
        case 4: _t->itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Material::RemoveMaterialDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFDialog::staticMetaObject>(),
    qt_meta_stringdata_Material__RemoveMaterialDialog.data,
    qt_meta_data_Material__RemoveMaterialDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Material::RemoveMaterialDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Material::RemoveMaterialDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Material__RemoveMaterialDialog.stringdata0))
        return static_cast<void*>(this);
    return QFDialog::qt_metacast(_clname);
}

int Material::RemoveMaterialDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
