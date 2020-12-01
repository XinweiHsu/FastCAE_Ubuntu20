/****************************************************************************
** Meta object code from reading C++ file 'dialogMakeExtrusion.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogMakeExtrusion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogMakeExtrusion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__CreateExtrusionDialog_t {
    QByteArrayData data[8];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__CreateExtrusionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__CreateExtrusionDialog_t qt_meta_stringdata_GeometryWidget__CreateExtrusionDialog = {
    {
QT_MOC_LITERAL(0, 0, 37), // "GeometryWidget::CreateExtrusi..."
QT_MOC_LITERAL(1, 38, 12), // "shapeSlected"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(4, 75, 3), // "set"
QT_MOC_LITERAL(5, 79, 5), // "shape"
QT_MOC_LITERAL(6, 85, 25), // "on_geoSelectCurve_clicked"
QT_MOC_LITERAL(7, 111, 18) // "on_radioButtonUser"

    },
    "GeometryWidget::CreateExtrusionDialog\0"
    "shapeSlected\0\0Geometry::GeometrySet*\0"
    "set\0shape\0on_geoSelectCurve_clicked\0"
    "on_radioButtonUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__CreateExtrusionDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       6,    0,   34,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GeometryWidget::CreateExtrusionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateExtrusionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_geoSelectCurve_clicked(); break;
        case 2: _t->on_radioButtonUser(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::CreateExtrusionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__CreateExtrusionDialog.data,
    qt_meta_data_GeometryWidget__CreateExtrusionDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::CreateExtrusionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::CreateExtrusionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__CreateExtrusionDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::CreateExtrusionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeoDialogBase::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
