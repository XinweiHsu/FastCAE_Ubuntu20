/****************************************************************************
** Meta object code from reading C++ file 'ParaSpin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ParaSpin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParaSpin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelfDefObj__ParaSpin_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelfDefObj__ParaSpin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelfDefObj__ParaSpin_t qt_meta_stringdata_SelfDefObj__ParaSpin = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SelfDefObj::ParaSpin"
QT_MOC_LITERAL(1, 21, 14), // "lockGraphFocus"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "b"
QT_MOC_LITERAL(4, 39, 11), // "dataChanged"
QT_MOC_LITERAL(5, 51, 28), // "DataProperty::ParameterBase*"
QT_MOC_LITERAL(6, 80, 1), // "p"
QT_MOC_LITERAL(7, 82, 12) // "valueChanged"

    },
    "SelfDefObj::ParaSpin\0lockGraphFocus\0"
    "\0b\0dataChanged\0DataProperty::ParameterBase*\0"
    "p\0valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelfDefObj__ParaSpin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SelfDefObj::ParaSpin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParaSpin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lockGraphFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->dataChanged((*reinterpret_cast< DataProperty::ParameterBase*(*)>(_a[1]))); break;
        case 2: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParaSpin::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParaSpin::lockGraphFocus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParaSpin::*)(DataProperty::ParameterBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParaSpin::dataChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelfDefObj::ParaSpin::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_SelfDefObj__ParaSpin.data,
    qt_meta_data_SelfDefObj__ParaSpin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelfDefObj::ParaSpin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelfDefObj::ParaSpin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelfDefObj__ParaSpin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SelfDefParaWidgetBase"))
        return static_cast< SelfDefParaWidgetBase*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int SelfDefObj::ParaSpin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SelfDefObj::ParaSpin::lockGraphFocus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SelfDefObj::ParaSpin::dataChanged(DataProperty::ParameterBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
