/****************************************************************************
** Meta object code from reading C++ file 'dialogMeasureDistance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogMeasureDistance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogMeasureDistance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__MeasureDistanceDialog_t {
    QByteArrayData data[12];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__MeasureDistanceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__MeasureDistanceDialog_t qt_meta_stringdata_GeometryWidget__MeasureDistanceDialog = {
    {
QT_MOC_LITERAL(0, 0, 37), // "GeometryWidget::MeasureDistan..."
QT_MOC_LITERAL(1, 38, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 25), // "on_geoSelectPoint_clicked"
QT_MOC_LITERAL(4, 88, 25), // "on_geoSelectCurve_clicked"
QT_MOC_LITERAL(5, 114, 29), // "on_geoSelectSurface_1_clicked"
QT_MOC_LITERAL(6, 144, 27), // "on_geoSelectSurface_clicked"
QT_MOC_LITERAL(7, 172, 12), // "shapeSlected"
QT_MOC_LITERAL(8, 185, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(9, 208, 3), // "set"
QT_MOC_LITERAL(10, 212, 5), // "index"
QT_MOC_LITERAL(11, 218, 14) // "on_TypeChanged"

    },
    "GeometryWidget::MeasureDistanceDialog\0"
    "on_closeButton_clicked\0\0"
    "on_geoSelectPoint_clicked\0"
    "on_geoSelectCurve_clicked\0"
    "on_geoSelectSurface_1_clicked\0"
    "on_geoSelectSurface_clicked\0shapeSlected\0"
    "Geometry::GeometrySet*\0set\0index\0"
    "on_TypeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__MeasureDistanceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    2,   54,    2, 0x08 /* Private */,
      11,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void GeometryWidget::MeasureDistanceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeasureDistanceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_closeButton_clicked(); break;
        case 1: _t->on_geoSelectPoint_clicked(); break;
        case 2: _t->on_geoSelectCurve_clicked(); break;
        case 3: _t->on_geoSelectSurface_1_clicked(); break;
        case 4: _t->on_geoSelectSurface_clicked(); break;
        case 5: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_TypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::MeasureDistanceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__MeasureDistanceDialog.data,
    qt_meta_data_GeometryWidget__MeasureDistanceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::MeasureDistanceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::MeasureDistanceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__MeasureDistanceDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::MeasureDistanceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeoDialogBase::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
