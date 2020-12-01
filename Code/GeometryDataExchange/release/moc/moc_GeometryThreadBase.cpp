/****************************************************************************
** Meta object code from reading C++ file 'GeometryThreadBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GeometryThreadBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GeometryThreadBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Geometry__GeometryThreadBase_t {
    QByteArrayData data[11];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Geometry__GeometryThreadBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Geometry__GeometryThreadBase_t qt_meta_stringdata_Geometry__GeometryThreadBase = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Geometry::GeometryThreadBase"
QT_MOC_LITERAL(1, 29, 18), // "updateGeometryTree"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 19), // "updateActionsStates"
QT_MOC_LITERAL(4, 69, 10), // "ShowSetSig"
QT_MOC_LITERAL(5, 80, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(6, 103, 1), // "s"
QT_MOC_LITERAL(7, 105, 1), // "r"
QT_MOC_LITERAL(8, 107, 22), // "showGeometryMessageSig"
QT_MOC_LITERAL(9, 130, 19), // "ModuleBase::Message"
QT_MOC_LITERAL(10, 150, 22) // "updatePreGeometryActor"

    },
    "Geometry::GeometryThreadBase\0"
    "updateGeometryTree\0\0updateActionsStates\0"
    "ShowSetSig\0Geometry::GeometrySet*\0s\0"
    "r\0showGeometryMessageSig\0ModuleBase::Message\0"
    "updatePreGeometryActor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Geometry__GeometryThreadBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    2,   46,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x26 /* Public | MethodCloned */,
       8,    1,   54,    2, 0x06 /* Public */,
      10,    0,   57,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,

       0        // eod
};

void Geometry::GeometryThreadBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeometryThreadBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGeometryTree(); break;
        case 1: _t->updateActionsStates(); break;
        case 2: _t->ShowSetSig((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->ShowSetSig((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1]))); break;
        case 4: _t->showGeometryMessageSig((*reinterpret_cast< ModuleBase::Message(*)>(_a[1]))); break;
        case 5: _t->updatePreGeometryActor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
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
            using _t = void (GeometryThreadBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeometryThreadBase::updateGeometryTree)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeometryThreadBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeometryThreadBase::updateActionsStates)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GeometryThreadBase::*)(Geometry::GeometrySet * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeometryThreadBase::ShowSetSig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GeometryThreadBase::*)(ModuleBase::Message );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeometryThreadBase::showGeometryMessageSig)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GeometryThreadBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeometryThreadBase::updatePreGeometryActor)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Geometry::GeometryThreadBase::staticMetaObject = { {
    QMetaObject::SuperData::link<ModuleBase::ThreadTask::staticMetaObject>(),
    qt_meta_stringdata_Geometry__GeometryThreadBase.data,
    qt_meta_data_Geometry__GeometryThreadBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Geometry::GeometryThreadBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Geometry::GeometryThreadBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Geometry__GeometryThreadBase.stringdata0))
        return static_cast<void*>(this);
    return ModuleBase::ThreadTask::qt_metacast(_clname);
}

int Geometry::GeometryThreadBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModuleBase::ThreadTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Geometry::GeometryThreadBase::updateGeometryTree()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Geometry::GeometryThreadBase::updateActionsStates()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Geometry::GeometryThreadBase::ShowSetSig(Geometry::GeometrySet * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void Geometry::GeometryThreadBase::showGeometryMessageSig(ModuleBase::Message _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Geometry::GeometryThreadBase::updatePreGeometryActor()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
