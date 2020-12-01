/****************************************************************************
** Meta object code from reading C++ file 'ctkVTKThresholdWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Visualization/VTK/Widgets/ctkVTKThresholdWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkVTKThresholdWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkVTKThresholdWidget_t {
    QByteArrayData data[13];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkVTKThresholdWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkVTKThresholdWidget_t qt_meta_stringdata_ctkVTKThresholdWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ctkVTKThresholdWidget"
QT_MOC_LITERAL(1, 22, 20), // "setPiecewiseFunction"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 21), // "vtkPiecewiseFunction*"
QT_MOC_LITERAL(4, 66, 8), // "function"
QT_MOC_LITERAL(5, 75, 8), // "setRange"
QT_MOC_LITERAL(6, 84, 3), // "min"
QT_MOC_LITERAL(7, 88, 3), // "max"
QT_MOC_LITERAL(8, 92, 18), // "setThresholdValues"
QT_MOC_LITERAL(9, 111, 10), // "setOpacity"
QT_MOC_LITERAL(10, 122, 7), // "opacity"
QT_MOC_LITERAL(11, 130, 27), // "updateFromPiecewiseFunction"
QT_MOC_LITERAL(12, 158, 12) // "useSharpness"

    },
    "ctkVTKThresholdWidget\0setPiecewiseFunction\0"
    "\0vtkPiecewiseFunction*\0function\0"
    "setRange\0min\0max\0setThresholdValues\0"
    "setOpacity\0opacity\0updateFromPiecewiseFunction\0"
    "useSharpness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkVTKThresholdWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    2,   42,    2, 0x0a /* Public */,
       8,    2,   47,    2, 0x0a /* Public */,
       9,    1,   52,    2, 0x0a /* Public */,
      11,    0,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Double, 0x00094103,
      12, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkVTKThresholdWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkVTKThresholdWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPiecewiseFunction((*reinterpret_cast< vtkPiecewiseFunction*(*)>(_a[1]))); break;
        case 1: _t->setRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->setThresholdValues((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->setOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updateFromPiecewiseFunction(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkVTKThresholdWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->opacity(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->useSharpness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkVTKThresholdWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOpacity(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setUseSharpness(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkVTKThresholdWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ctkVTKThresholdWidget.data,
    qt_meta_data_ctkVTKThresholdWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkVTKThresholdWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkVTKThresholdWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkVTKThresholdWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkVTKThresholdWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
