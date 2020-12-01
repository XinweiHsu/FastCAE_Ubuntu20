/****************************************************************************
** Meta object code from reading C++ file 'ParaCheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ParaCheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParaCheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelfDefObj__ParaCheck_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelfDefObj__ParaCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelfDefObj__ParaCheck_t qt_meta_stringdata_SelfDefObj__ParaCheck = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SelfDefObj::ParaCheck"
QT_MOC_LITERAL(1, 22, 14), // "lockGraphFocus"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 1), // "b"
QT_MOC_LITERAL(4, 40, 11), // "dataChanged"
QT_MOC_LITERAL(5, 52, 28), // "DataProperty::ParameterBase*"
QT_MOC_LITERAL(6, 81, 1), // "p"
QT_MOC_LITERAL(7, 83, 12) // "stateChanged"

    },
    "SelfDefObj::ParaCheck\0lockGraphFocus\0"
    "\0b\0dataChanged\0DataProperty::ParameterBase*\0"
    "p\0stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelfDefObj__ParaCheck[] = {

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

void SelfDefObj::ParaCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParaCheck *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lockGraphFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->dataChanged((*reinterpret_cast< DataProperty::ParameterBase*(*)>(_a[1]))); break;
        case 2: _t->stateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParaCheck::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParaCheck::lockGraphFocus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParaCheck::*)(DataProperty::ParameterBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParaCheck::dataChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelfDefObj::ParaCheck::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_SelfDefObj__ParaCheck.data,
    qt_meta_data_SelfDefObj__ParaCheck,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelfDefObj::ParaCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelfDefObj::ParaCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelfDefObj__ParaCheck.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SelfDefParaWidgetBase"))
        return static_cast< SelfDefParaWidgetBase*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int SelfDefObj::ParaCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
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
void SelfDefObj::ParaCheck::lockGraphFocus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SelfDefObj::ParaCheck::dataChanged(DataProperty::ParameterBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
