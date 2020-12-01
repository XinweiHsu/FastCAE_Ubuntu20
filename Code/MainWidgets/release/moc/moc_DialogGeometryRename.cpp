/****************************************************************************
** Meta object code from reading C++ file 'DialogGeometryRename.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogGeometryRename.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogGeometryRename.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__GeometryRenameDialog_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__GeometryRenameDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__GeometryRenameDialog_t qt_meta_stringdata_MainWidget__GeometryRenameDialog = {
    {
QT_MOC_LITERAL(0, 0, 32), // "MainWidget::GeometryRenameDialog"
QT_MOC_LITERAL(1, 33, 11), // "disPlayProp"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 23), // "DataProperty::DataBase*"
QT_MOC_LITERAL(4, 70, 4) // "pops"

    },
    "MainWidget::GeometryRenameDialog\0"
    "disPlayProp\0\0DataProperty::DataBase*\0"
    "pops"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__GeometryRenameDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MainWidget::GeometryRenameDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeometryRenameDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disPlayProp((*reinterpret_cast< DataProperty::DataBase*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeometryRenameDialog::*)(DataProperty::DataBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeometryRenameDialog::disPlayProp)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::GeometryRenameDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFDialog::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__GeometryRenameDialog.data,
    qt_meta_data_MainWidget__GeometryRenameDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::GeometryRenameDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::GeometryRenameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__GeometryRenameDialog.stringdata0))
        return static_cast<void*>(this);
    return QFDialog::qt_metacast(_clname);
}

int MainWidget::GeometryRenameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::GeometryRenameDialog::disPlayProp(DataProperty::DataBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
