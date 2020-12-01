/****************************************************************************
** Meta object code from reading C++ file 'dialogMakeChamfer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogMakeChamfer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogMakeChamfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__CreateChamferDialog_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__CreateChamferDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__CreateChamferDialog_t qt_meta_stringdata_GeometryWidget__CreateChamferDialog = {
    {
QT_MOC_LITERAL(0, 0, 35), // "GeometryWidget::CreateChamfer..."
QT_MOC_LITERAL(1, 36, 25), // "on_geoSelectCurve_clicked"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 12), // "shapeSlected"
QT_MOC_LITERAL(4, 76, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(5, 99, 3), // "set"
QT_MOC_LITERAL(6, 103, 5), // "index"
QT_MOC_LITERAL(7, 109, 23) // "on_sectionComboxChanged"

    },
    "GeometryWidget::CreateChamferDialog\0"
    "on_geoSelectCurve_clicked\0\0shapeSlected\0"
    "Geometry::GeometrySet*\0set\0index\0"
    "on_sectionComboxChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__CreateChamferDialog[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    2,   30,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void GeometryWidget::CreateChamferDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateChamferDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_geoSelectCurve_clicked(); break;
        case 1: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_sectionComboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::CreateChamferDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__CreateChamferDialog.data,
    qt_meta_data_GeometryWidget__CreateChamferDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::CreateChamferDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::CreateChamferDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__CreateChamferDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::CreateChamferDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
