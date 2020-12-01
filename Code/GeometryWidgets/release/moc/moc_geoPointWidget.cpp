/****************************************************************************
** Meta object code from reading C++ file 'geoPointWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../geoPointWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geoPointWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__GeoPointWidget_t {
    QByteArrayData data[10];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__GeoPointWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__GeoPointWidget_t qt_meta_stringdata_GeometryWidget__GeoPointWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "GeometryWidget::GeoPointWidget"
QT_MOC_LITERAL(1, 31, 13), // "buttonCkicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "GeoPointWidget*"
QT_MOC_LITERAL(4, 62, 13), // "setSelectMode"
QT_MOC_LITERAL(5, 76, 25), // "clearGeometryHighLightSig"
QT_MOC_LITERAL(6, 102, 25), // "highLightGeometryPointSig"
QT_MOC_LITERAL(7, 128, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(8, 151, 25), // "on_geoSelectPoint_clicked"
QT_MOC_LITERAL(9, 177, 11) // "selectPoint"

    },
    "GeometryWidget::GeoPointWidget\0"
    "buttonCkicked\0\0GeoPointWidget*\0"
    "setSelectMode\0clearGeometryHighLightSig\0"
    "highLightGeometryPointSig\0"
    "Geometry::GeometrySet*\0on_geoSelectPoint_clicked\0"
    "selectPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__GeoPointWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    0,   50,    2, 0x06 /* Public */,
       6,    3,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   58,    2, 0x08 /* Private */,
       9,    2,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Bool,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,

       0        // eod
};

void GeometryWidget::GeoPointWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeoPointWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonCkicked((*reinterpret_cast< GeoPointWidget*(*)>(_a[1]))); break;
        case 1: _t->setSelectMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clearGeometryHighLightSig(); break;
        case 3: _t->highLightGeometryPointSig((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->on_geoSelectPoint_clicked(); break;
        case 5: _t->selectPoint((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GeoPointWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeoPointWidget::*)(GeoPointWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoPointWidget::buttonCkicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeoPointWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoPointWidget::setSelectMode)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GeoPointWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoPointWidget::clearGeometryHighLightSig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GeoPointWidget::*)(Geometry::GeometrySet * , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoPointWidget::highLightGeometryPointSig)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::GeoPointWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__GeoPointWidget.data,
    qt_meta_data_GeometryWidget__GeoPointWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::GeoPointWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::GeoPointWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__GeoPointWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GeometryWidget::GeoPointWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GeometryWidget::GeoPointWidget::buttonCkicked(GeoPointWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GeometryWidget::GeoPointWidget::setSelectMode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GeometryWidget::GeoPointWidget::clearGeometryHighLightSig()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GeometryWidget::GeoPointWidget::highLightGeometryPointSig(Geometry::GeometrySet * _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
