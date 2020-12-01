/****************************************************************************
** Meta object code from reading C++ file 'GeoCommandImport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GeoCommandImport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GeoCommandImport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Command__GeoCommandImport_t {
    QByteArrayData data[4];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Command__GeoCommandImport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Command__GeoCommandImport_t qt_meta_stringdata_Command__GeoCommandImport = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Command::GeoCommandImport"
QT_MOC_LITERAL(1, 26, 11), // "showMessage"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19) // "ModuleBase::Message"

    },
    "Command::GeoCommandImport\0showMessage\0"
    "\0ModuleBase::Message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Command__GeoCommandImport[] = {

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
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void Command::GeoCommandImport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeoCommandImport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMessage((*reinterpret_cast< ModuleBase::Message(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleBase::Message >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeoCommandImport::*)(ModuleBase::Message );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoCommandImport::showMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Command::GeoCommandImport::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoCommandBase::staticMetaObject>(),
    qt_meta_stringdata_Command__GeoCommandImport.data,
    qt_meta_data_Command__GeoCommandImport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Command::GeoCommandImport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Command::GeoCommandImport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Command__GeoCommandImport.stringdata0))
        return static_cast<void*>(this);
    return GeoCommandBase::qt_metacast(_clname);
}

int Command::GeoCommandImport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeoCommandBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Command::GeoCommandImport::showMessage(ModuleBase::Message _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
