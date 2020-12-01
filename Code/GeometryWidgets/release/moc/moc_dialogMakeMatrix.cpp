/****************************************************************************
** Meta object code from reading C++ file 'dialogMakeMatrix.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogMakeMatrix.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogMakeMatrix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__MakeMatrixDialog_t {
    QByteArrayData data[15];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__MakeMatrixDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__MakeMatrixDialog_t qt_meta_stringdata_GeometryWidget__MakeMatrixDialog = {
    {
QT_MOC_LITERAL(0, 0, 32), // "GeometryWidget::MakeMatrixDialog"
QT_MOC_LITERAL(1, 33, 18), // "on_radioButtonUser"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 19), // "on_radio2ButtonUser"
QT_MOC_LITERAL(4, 73, 19), // "on_radio3ButtonUser"
QT_MOC_LITERAL(5, 93, 14), // "on_TypeChanged"
QT_MOC_LITERAL(6, 108, 5), // "index"
QT_MOC_LITERAL(7, 114, 27), // "on_geoSelectSurface_clicked"
QT_MOC_LITERAL(8, 142, 23), // "showLinearDir2InfoChbox"
QT_MOC_LITERAL(9, 166, 12), // "shapeSlected"
QT_MOC_LITERAL(10, 179, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(11, 202, 3), // "set"
QT_MOC_LITERAL(12, 206, 18), // "pointWidgetClicked"
QT_MOC_LITERAL(13, 225, 15), // "GeoPointWidget*"
QT_MOC_LITERAL(14, 241, 1) // "w"

    },
    "GeometryWidget::MakeMatrixDialog\0"
    "on_radioButtonUser\0\0on_radio2ButtonUser\0"
    "on_radio3ButtonUser\0on_TypeChanged\0"
    "index\0on_geoSelectSurface_clicked\0"
    "showLinearDir2InfoChbox\0shapeSlected\0"
    "Geometry::GeometrySet*\0set\0"
    "pointWidgetClicked\0GeoPointWidget*\0w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__MakeMatrixDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    2,   62,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,    6,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void GeometryWidget::MakeMatrixDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MakeMatrixDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioButtonUser(); break;
        case 1: _t->on_radio2ButtonUser(); break;
        case 2: _t->on_radio3ButtonUser(); break;
        case 3: _t->on_TypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_geoSelectSurface_clicked(); break;
        case 5: _t->showLinearDir2InfoChbox(); break;
        case 6: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->pointWidgetClicked((*reinterpret_cast< GeoPointWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::MakeMatrixDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__MakeMatrixDialog.data,
    qt_meta_data_GeometryWidget__MakeMatrixDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::MakeMatrixDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::MakeMatrixDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__MakeMatrixDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::MakeMatrixDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeoDialogBase::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
