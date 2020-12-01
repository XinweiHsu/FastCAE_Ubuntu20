/****************************************************************************
** Meta object code from reading C++ file 'GeoCommandBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GeoCommandBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GeoCommandBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Command__GeoCommandBase_t {
    QByteArrayData data[12];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Command__GeoCommandBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Command__GeoCommandBase_t qt_meta_stringdata_Command__GeoCommandBase = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Command::GeoCommandBase"
QT_MOC_LITERAL(1, 24, 13), // "updateGeoTree"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "showSet"
QT_MOC_LITERAL(4, 47, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(5, 70, 1), // "s"
QT_MOC_LITERAL(6, 72, 1), // "r"
QT_MOC_LITERAL(7, 74, 9), // "showDatum"
QT_MOC_LITERAL(8, 84, 24), // "Geometry::GeometryDatum*"
QT_MOC_LITERAL(9, 109, 18), // "removeDisplayActor"
QT_MOC_LITERAL(10, 128, 23), // "removeDisplayDatumActor"
QT_MOC_LITERAL(11, 152, 13) // "updateActions"

    },
    "Command::GeoCommandBase\0updateGeoTree\0"
    "\0showSet\0Geometry::GeometrySet*\0s\0r\0"
    "showDatum\0Geometry::GeometryDatum*\0"
    "removeDisplayActor\0removeDisplayDatumActor\0"
    "updateActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Command__GeoCommandBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x26 /* Public | MethodCloned */,
       7,    1,   58,    2, 0x06 /* Public */,
       9,    1,   61,    2, 0x06 /* Public */,
      10,    1,   64,    2, 0x06 /* Public */,
      11,    0,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,

       0        // eod
};

void Command::GeoCommandBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeoCommandBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGeoTree(); break;
        case 1: _t->showSet((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->showSet((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1]))); break;
        case 3: _t->showDatum((*reinterpret_cast< Geometry::GeometryDatum*(*)>(_a[1]))); break;
        case 4: _t->removeDisplayActor((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1]))); break;
        case 5: _t->removeDisplayDatumActor((*reinterpret_cast< Geometry::GeometryDatum*(*)>(_a[1]))); break;
        case 6: _t->updateActions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeoCommandBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoCommandBase::updateGeoTree)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeoCommandBase::*)(Geometry::GeometrySet * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoCommandBase::showSet)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GeoCommandBase::*)(Geometry::GeometryDatum * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoCommandBase::showDatum)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GeoCommandBase::*)(Geometry::GeometrySet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoCommandBase::removeDisplayActor)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GeoCommandBase::*)(Geometry::GeometryDatum * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoCommandBase::removeDisplayDatumActor)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GeoCommandBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoCommandBase::updateActions)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Command::GeoCommandBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Command__GeoCommandBase.data,
    qt_meta_data_Command__GeoCommandBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Command::GeoCommandBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Command::GeoCommandBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Command__GeoCommandBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Command::GeoCommandBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Command::GeoCommandBase::updateGeoTree()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Command::GeoCommandBase::showSet(Geometry::GeometrySet * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void Command::GeoCommandBase::showDatum(Geometry::GeometryDatum * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Command::GeoCommandBase::removeDisplayActor(Geometry::GeometrySet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Command::GeoCommandBase::removeDisplayDatumActor(Geometry::GeometryDatum * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Command::GeoCommandBase::updateActions()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
