/****************************************************************************
** Meta object code from reading C++ file 'ctkVTKHistogram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Visualization/VTK/Widgets/ctkVTKHistogram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkVTKHistogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkVTKHistogram_t {
    QByteArrayData data[12];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkVTKHistogram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkVTKHistogram_t qt_meta_stringdata_ctkVTKHistogram = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkVTKHistogram"
QT_MOC_LITERAL(1, 16, 12), // "setDataArray"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "vtkDataArray*"
QT_MOC_LITERAL(4, 44, 9), // "dataArray"
QT_MOC_LITERAL(5, 54, 18), // "removeControlPoint"
QT_MOC_LITERAL(6, 73, 3), // "pos"
QT_MOC_LITERAL(7, 77, 5), // "build"
QT_MOC_LITERAL(8, 83, 9), // "component"
QT_MOC_LITERAL(9, 93, 8), // "maxValue"
QT_MOC_LITERAL(10, 102, 8), // "minValue"
QT_MOC_LITERAL(11, 111, 12) // "numberOfBins"

    },
    "ctkVTKHistogram\0setDataArray\0\0"
    "vtkDataArray*\0dataArray\0removeControlPoint\0"
    "pos\0build\0component\0maxValue\0minValue\0"
    "numberOfBins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkVTKHistogram[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       4,    0,   37,    2, 0x02 /* Public */,
       5,    1,   38,    2, 0x02 /* Public */,
       7,    0,   41,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 3,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::QVariant, 0x00095001,
      10, QMetaType::QVariant, 0x00095001,
      11, QMetaType::Int, 0x00095103,

       0        // eod
};

void ctkVTKHistogram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkVTKHistogram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setDataArray((*reinterpret_cast< vtkDataArray*(*)>(_a[1]))); break;
        case 1: { vtkDataArray* _r = _t->dataArray();
            if (_a[0]) *reinterpret_cast< vtkDataArray**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->removeControlPoint((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->build(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkVTKHistogram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->component(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->maxValue(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->minValue(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->numberOfBins(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkVTKHistogram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setComponent(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setNumberOfBins(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkVTKHistogram::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkHistogram::staticMetaObject>(),
    qt_meta_stringdata_ctkVTKHistogram.data,
    qt_meta_data_ctkVTKHistogram,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkVTKHistogram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkVTKHistogram::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkVTKHistogram.stringdata0))
        return static_cast<void*>(this);
    return ctkHistogram::qt_metacast(_clname);
}

int ctkVTKHistogram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkHistogram::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
