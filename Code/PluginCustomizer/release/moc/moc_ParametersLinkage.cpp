/****************************************************************************
** Meta object code from reading C++ file 'ParametersLinkage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ParametersLinkage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParametersLinkage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FastCAEDesigner__ParametersLinkage_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FastCAEDesigner__ParametersLinkage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FastCAEDesigner__ParametersLinkage_t qt_meta_stringdata_FastCAEDesigner__ParametersLinkage = {
    {
QT_MOC_LITERAL(0, 0, 34), // "FastCAEDesigner::ParametersLi..."
QT_MOC_LITERAL(1, 35, 20), // "onLastStepQPBClicked"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 20), // "onNextStepQPBClicked"
QT_MOC_LITERAL(4, 78, 17), // "setParameterValue"
QT_MOC_LITERAL(5, 96, 5), // "index"
QT_MOC_LITERAL(6, 102, 9) // "OnTimeout"

    },
    "FastCAEDesigner::ParametersLinkage\0"
    "onLastStepQPBClicked\0\0onNextStepQPBClicked\0"
    "setParameterValue\0index\0OnTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FastCAEDesigner__ParametersLinkage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void FastCAEDesigner::ParametersLinkage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParametersLinkage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLastStepQPBClicked(); break;
        case 1: _t->onNextStepQPBClicked(); break;
        case 2: _t->setParameterValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FastCAEDesigner::ParametersLinkage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FastCAEDesigner__ParametersLinkage.data,
    qt_meta_data_FastCAEDesigner__ParametersLinkage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FastCAEDesigner::ParametersLinkage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FastCAEDesigner::ParametersLinkage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FastCAEDesigner__ParametersLinkage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FastCAEDesigner::ParametersLinkage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
