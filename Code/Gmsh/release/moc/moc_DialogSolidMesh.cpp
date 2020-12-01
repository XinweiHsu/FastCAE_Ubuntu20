/****************************************************************************
** Meta object code from reading C++ file 'DialogSolidMesh.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogSolidMesh.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogSolidMesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gmsh__SolidMeshDialog_t {
    QByteArrayData data[10];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gmsh__SolidMeshDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gmsh__SolidMeshDialog_t qt_meta_stringdata_Gmsh__SolidMeshDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Gmsh::SolidMeshDialog"
QT_MOC_LITERAL(1, 22, 27), // "on_geoSelectSurface_clicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "shapeSlected"
QT_MOC_LITERAL(4, 64, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(5, 87, 3), // "set"
QT_MOC_LITERAL(6, 91, 5), // "index"
QT_MOC_LITERAL(7, 97, 22), // "on_localButton_clicked"
QT_MOC_LITERAL(8, 120, 20), // "on_selectall_clicked"
QT_MOC_LITERAL(9, 141, 24) // "on_selectvisible_clicked"

    },
    "Gmsh::SolidMeshDialog\0on_geoSelectSurface_clicked\0"
    "\0shapeSlected\0Geometry::GeometrySet*\0"
    "set\0index\0on_localButton_clicked\0"
    "on_selectall_clicked\0on_selectvisible_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gmsh__SolidMeshDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gmsh::SolidMeshDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SolidMeshDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_geoSelectSurface_clicked(); break;
        case 1: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_localButton_clicked(); break;
        case 3: _t->on_selectall_clicked(); break;
        case 4: _t->on_selectvisible_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gmsh::SolidMeshDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GmshDialogBase::staticMetaObject>(),
    qt_meta_stringdata_Gmsh__SolidMeshDialog.data,
    qt_meta_data_Gmsh__SolidMeshDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gmsh::SolidMeshDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gmsh::SolidMeshDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gmsh__SolidMeshDialog.stringdata0))
        return static_cast<void*>(this);
    return GmshDialogBase::qt_metacast(_clname);
}

int Gmsh::SolidMeshDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GmshDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
