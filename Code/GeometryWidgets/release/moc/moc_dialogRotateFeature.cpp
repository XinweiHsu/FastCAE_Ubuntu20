/****************************************************************************
** Meta object code from reading C++ file 'dialogRotateFeature.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogRotateFeature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogRotateFeature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__RotateFeatureDialog_t {
    QByteArrayData data[13];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__RotateFeatureDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__RotateFeatureDialog_t qt_meta_stringdata_GeometryWidget__RotateFeatureDialog = {
    {
QT_MOC_LITERAL(0, 0, 35), // "GeometryWidget::RotateFeature..."
QT_MOC_LITERAL(1, 36, 14), // "on_TypeChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 5), // "index"
QT_MOC_LITERAL(4, 58, 27), // "on_geoSelectSurface_clicked"
QT_MOC_LITERAL(5, 86, 25), // "on_geoSelectCurve_clicked"
QT_MOC_LITERAL(6, 112, 18), // "pointWidgetClicked"
QT_MOC_LITERAL(7, 131, 15), // "GeoPointWidget*"
QT_MOC_LITERAL(8, 147, 1), // "w"
QT_MOC_LITERAL(9, 149, 18), // "on_radioButtonUser"
QT_MOC_LITERAL(10, 168, 12), // "shapeSlected"
QT_MOC_LITERAL(11, 181, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(12, 204, 3) // "set"

    },
    "GeometryWidget::RotateFeatureDialog\0"
    "on_TypeChanged\0\0index\0on_geoSelectSurface_clicked\0"
    "on_geoSelectCurve_clicked\0pointWidgetClicked\0"
    "GeoPointWidget*\0w\0on_radioButtonUser\0"
    "shapeSlected\0Geometry::GeometrySet*\0"
    "set"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__RotateFeatureDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    2,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,    3,

       0        // eod
};

void GeometryWidget::RotateFeatureDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RotateFeatureDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_TypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_geoSelectSurface_clicked(); break;
        case 2: _t->on_geoSelectCurve_clicked(); break;
        case 3: _t->pointWidgetClicked((*reinterpret_cast< GeoPointWidget*(*)>(_a[1]))); break;
        case 4: _t->on_radioButtonUser(); break;
        case 5: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::RotateFeatureDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__RotateFeatureDialog.data,
    qt_meta_data_GeometryWidget__RotateFeatureDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::RotateFeatureDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::RotateFeatureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__RotateFeatureDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::RotateFeatureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeoDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
