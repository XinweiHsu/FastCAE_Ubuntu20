/****************************************************************************
** Meta object code from reading C++ file 'dialogMakeRevol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogMakeRevol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogMakeRevol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__CreateRevolDialog_t {
    QByteArrayData data[13];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__CreateRevolDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__CreateRevolDialog_t qt_meta_stringdata_GeometryWidget__CreateRevolDialog = {
    {
QT_MOC_LITERAL(0, 0, 33), // "GeometryWidget::CreateRevolDi..."
QT_MOC_LITERAL(1, 34, 12), // "shapeSlected"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(4, 71, 3), // "set"
QT_MOC_LITERAL(5, 75, 5), // "index"
QT_MOC_LITERAL(6, 81, 25), // "on_geoSelectCurve_clicked"
QT_MOC_LITERAL(7, 107, 27), // "on_geoSelectCurve_1_clicked"
QT_MOC_LITERAL(8, 135, 18), // "on_radioButtonUser"
QT_MOC_LITERAL(9, 154, 18), // "pointWidgetClicked"
QT_MOC_LITERAL(10, 173, 15), // "GeoPointWidget*"
QT_MOC_LITERAL(11, 189, 1), // "w"
QT_MOC_LITERAL(12, 191, 14) // "on_TypeChanged"

    },
    "GeometryWidget::CreateRevolDialog\0"
    "shapeSlected\0\0Geometry::GeometrySet*\0"
    "set\0index\0on_geoSelectCurve_clicked\0"
    "on_geoSelectCurve_1_clicked\0"
    "on_radioButtonUser\0pointWidgetClicked\0"
    "GeoPointWidget*\0w\0on_TypeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__CreateRevolDialog[] = {

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
       1,    2,   44,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    1,   52,    2, 0x08 /* Private */,
      12,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void GeometryWidget::CreateRevolDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateRevolDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_geoSelectCurve_clicked(); break;
        case 2: _t->on_geoSelectCurve_1_clicked(); break;
        case 3: _t->on_radioButtonUser(); break;
        case 4: _t->pointWidgetClicked((*reinterpret_cast< GeoPointWidget*(*)>(_a[1]))); break;
        case 5: _t->on_TypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GeoPointWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::CreateRevolDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__CreateRevolDialog.data,
    qt_meta_data_GeometryWidget__CreateRevolDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::CreateRevolDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::CreateRevolDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__CreateRevolDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::CreateRevolDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
