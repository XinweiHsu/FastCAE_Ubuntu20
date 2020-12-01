/****************************************************************************
** Meta object code from reading C++ file 'dialogMirrorFeature.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogMirrorFeature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogMirrorFeature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__MirorFeatureDialog_t {
    QByteArrayData data[13];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__MirorFeatureDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__MirorFeatureDialog_t qt_meta_stringdata_GeometryWidget__MirorFeatureDialog = {
    {
QT_MOC_LITERAL(0, 0, 34), // "GeometryWidget::MirorFeatureD..."
QT_MOC_LITERAL(1, 35, 14), // "on_TypeChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "index"
QT_MOC_LITERAL(4, 57, 27), // "on_geoSelectSurface_clicked"
QT_MOC_LITERAL(5, 85, 29), // "on_geoSelectSurface_1_clicked"
QT_MOC_LITERAL(6, 115, 12), // "shapeSlected"
QT_MOC_LITERAL(7, 128, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(8, 151, 3), // "set"
QT_MOC_LITERAL(9, 155, 18), // "pointWidgetClicked"
QT_MOC_LITERAL(10, 174, 15), // "GeoPointWidget*"
QT_MOC_LITERAL(11, 190, 1), // "g"
QT_MOC_LITERAL(12, 192, 18) // "on_radioButtonUser"

    },
    "GeometryWidget::MirorFeatureDialog\0"
    "on_TypeChanged\0\0index\0on_geoSelectSurface_clicked\0"
    "on_geoSelectSurface_1_clicked\0"
    "shapeSlected\0Geometry::GeometrySet*\0"
    "set\0pointWidgetClicked\0GeoPointWidget*\0"
    "g\0on_radioButtonUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__MirorFeatureDialog[] = {

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
       6,    2,   49,    2, 0x08 /* Private */,
       9,    1,   54,    2, 0x08 /* Private */,
      12,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    3,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void GeometryWidget::MirorFeatureDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MirorFeatureDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_TypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_geoSelectSurface_clicked(); break;
        case 2: _t->on_geoSelectSurface_1_clicked(); break;
        case 3: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->pointWidgetClicked((*reinterpret_cast< GeoPointWidget*(*)>(_a[1]))); break;
        case 5: _t->on_radioButtonUser(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::MirorFeatureDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__MirorFeatureDialog.data,
    qt_meta_data_GeometryWidget__MirorFeatureDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::MirorFeatureDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::MirorFeatureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__MirorFeatureDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::MirorFeatureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
