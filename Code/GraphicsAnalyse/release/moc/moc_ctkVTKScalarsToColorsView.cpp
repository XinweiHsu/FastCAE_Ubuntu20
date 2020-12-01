/****************************************************************************
** Meta object code from reading C++ file 'ctkVTKScalarsToColorsView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Visualization/VTK/Widgets/ctkVTKScalarsToColorsView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkVTKScalarsToColorsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkVTKScalarsToColorsView_t {
    QByteArrayData data[14];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkVTKScalarsToColorsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkVTKScalarsToColorsView_t qt_meta_stringdata_ctkVTKScalarsToColorsView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ctkVTKScalarsToColorsView"
QT_MOC_LITERAL(1, 26, 9), // "editPoint"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 48, 4), // "plot"
QT_MOC_LITERAL(5, 53, 7), // "pointId"
QT_MOC_LITERAL(6, 61, 13), // "moveAllPoints"
QT_MOC_LITERAL(7, 75, 7), // "xOffset"
QT_MOC_LITERAL(8, 83, 7), // "yOffset"
QT_MOC_LITERAL(9, 91, 20), // "dontMoveFirstAndLast"
QT_MOC_LITERAL(10, 112, 15), // "spreadAllPoints"
QT_MOC_LITERAL(11, 128, 6), // "factor"
QT_MOC_LITERAL(12, 135, 15), // "onBoundsChanged"
QT_MOC_LITERAL(13, 151, 14) // "bordersVisible"

    },
    "ctkVTKScalarsToColorsView\0editPoint\0"
    "\0vtkObject*\0plot\0pointId\0moveAllPoints\0"
    "xOffset\0yOffset\0dontMoveFirstAndLast\0"
    "spreadAllPoints\0factor\0onBoundsChanged\0"
    "bordersVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkVTKScalarsToColorsView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x0a /* Public */,
       6,    3,   59,    2, 0x0a /* Public */,
       6,    2,   66,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   71,    2, 0x2a /* Public | MethodCloned */,
      10,    2,   74,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x2a /* Public | MethodCloned */,
      10,    0,   82,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::VoidStar,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,    7,    8,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    7,    8,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   11,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkVTKScalarsToColorsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkVTKScalarsToColorsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editPoint((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 1: _t->moveAllPoints((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->moveAllPoints((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->moveAllPoints((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->spreadAllPoints((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->spreadAllPoints((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->spreadAllPoints(); break;
        case 7: _t->onBoundsChanged(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkVTKScalarsToColorsView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->areBordersVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkVTKScalarsToColorsView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBordersVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkVTKScalarsToColorsView::staticMetaObject = { {
    QMetaObject::SuperData::link<ctkVTKChartView::staticMetaObject>(),
    qt_meta_stringdata_ctkVTKScalarsToColorsView.data,
    qt_meta_data_ctkVTKScalarsToColorsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkVTKScalarsToColorsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkVTKScalarsToColorsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkVTKScalarsToColorsView.stringdata0))
        return static_cast<void*>(this);
    return ctkVTKChartView::qt_metacast(_clname);
}

int ctkVTKScalarsToColorsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkVTKChartView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
