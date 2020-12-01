/****************************************************************************
** Meta object code from reading C++ file 'DialogLocalSetting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogLocalSetting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogLocalSetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gmsh__LocalSettingDialog_t {
    QByteArrayData data[16];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gmsh__LocalSettingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gmsh__LocalSettingDialog_t qt_meta_stringdata_Gmsh__LocalSettingDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Gmsh::LocalSettingDialog"
QT_MOC_LITERAL(1, 25, 13), // "setSelectMode"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 25), // "highLightGeometrySolidSig"
QT_MOC_LITERAL(4, 66, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(5, 89, 25), // "clearGeometryHighLightSig"
QT_MOC_LITERAL(6, 115, 25), // "on_PointAddButton_clicked"
QT_MOC_LITERAL(7, 141, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(8, 164, 27), // "on_geoSelectSurface_clicked"
QT_MOC_LITERAL(9, 192, 15), // "updateInterface"
QT_MOC_LITERAL(10, 208, 4), // "type"
QT_MOC_LITERAL(11, 213, 15), // "onCustomChecked"
QT_MOC_LITERAL(12, 229, 10), // "changeData"
QT_MOC_LITERAL(13, 240, 12), // "shapeSlected"
QT_MOC_LITERAL(14, 253, 3), // "set"
QT_MOC_LITERAL(15, 257, 5) // "index"

    },
    "Gmsh::LocalSettingDialog\0setSelectMode\0"
    "\0highLightGeometrySolidSig\0"
    "Geometry::GeometrySet*\0clearGeometryHighLightSig\0"
    "on_PointAddButton_clicked\0"
    "on_closeButton_clicked\0"
    "on_geoSelectSurface_clicked\0updateInterface\0"
    "type\0onCustomChecked\0changeData\0"
    "shapeSlected\0set\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gmsh__LocalSettingDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    3,   67,    2, 0x06 /* Public */,
       5,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    2,   82,    2, 0x08 /* Private */,
      13,    2,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,   14,   15,

       0        // eod
};

void Gmsh::LocalSettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalSettingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSelectMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->highLightGeometrySolidSig((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->clearGeometryHighLightSig(); break;
        case 3: _t->on_PointAddButton_clicked(); break;
        case 4: _t->on_closeButton_clicked(); break;
        case 5: _t->on_geoSelectSurface_clicked(); break;
        case 6: _t->updateInterface((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onCustomChecked(); break;
        case 8: _t->changeData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocalSettingDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalSettingDialog::setSelectMode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LocalSettingDialog::*)(Geometry::GeometrySet * , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalSettingDialog::highLightGeometrySolidSig)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LocalSettingDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalSettingDialog::clearGeometryHighLightSig)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gmsh::LocalSettingDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gmsh__LocalSettingDialog.data,
    qt_meta_data_Gmsh__LocalSettingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gmsh::LocalSettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gmsh::LocalSettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gmsh__LocalSettingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gmsh::LocalSettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Gmsh::LocalSettingDialog::setSelectMode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gmsh::LocalSettingDialog::highLightGeometrySolidSig(Geometry::GeometrySet * _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gmsh::LocalSettingDialog::clearGeometryHighLightSig()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
