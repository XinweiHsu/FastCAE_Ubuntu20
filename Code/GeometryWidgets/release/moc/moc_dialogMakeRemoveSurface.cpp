/****************************************************************************
** Meta object code from reading C++ file 'dialogMakeRemoveSurface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogMakeRemoveSurface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogMakeRemoveSurface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__MakeRemoveSurfaceDialog_t {
    QByteArrayData data[7];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__MakeRemoveSurfaceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__MakeRemoveSurfaceDialog_t qt_meta_stringdata_GeometryWidget__MakeRemoveSurfaceDialog = {
    {
QT_MOC_LITERAL(0, 0, 39), // "GeometryWidget::MakeRemoveSur..."
QT_MOC_LITERAL(1, 40, 29), // "on_geoSelectSurface_1_clicked"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 12), // "shapeSlected"
QT_MOC_LITERAL(4, 84, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(5, 107, 3), // "set"
QT_MOC_LITERAL(6, 111, 5) // "shape"

    },
    "GeometryWidget::MakeRemoveSurfaceDialog\0"
    "on_geoSelectSurface_1_clicked\0\0"
    "shapeSlected\0Geometry::GeometrySet*\0"
    "set\0shape"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__MakeRemoveSurfaceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,

       0        // eod
};

void GeometryWidget::MakeRemoveSurfaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MakeRemoveSurfaceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_geoSelectSurface_1_clicked(); break;
        case 1: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::MakeRemoveSurfaceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__MakeRemoveSurfaceDialog.data,
    qt_meta_data_GeometryWidget__MakeRemoveSurfaceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::MakeRemoveSurfaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::MakeRemoveSurfaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__MakeRemoveSurfaceDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::MakeRemoveSurfaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeoDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
