/****************************************************************************
** Meta object code from reading C++ file 'GmshDialogBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GmshDialogBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GmshDialogBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gmsh__GmshDialogBase_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gmsh__GmshDialogBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gmsh__GmshDialogBase_t qt_meta_stringdata_Gmsh__GmshDialogBase = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Gmsh::GmshDialogBase"
QT_MOC_LITERAL(1, 21, 10), // "showDialog"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "QDialog*"
QT_MOC_LITERAL(4, 42, 19), // "highLightMeshKernal"
QT_MOC_LITERAL(5, 62, 21) // "MeshData::MeshKernal*"

    },
    "Gmsh::GmshDialogBase\0showDialog\0\0"
    "QDialog*\0highLightMeshKernal\0"
    "MeshData::MeshKernal*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gmsh__GmshDialogBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void Gmsh::GmshDialogBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GmshDialogBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showDialog((*reinterpret_cast< QDialog*(*)>(_a[1]))); break;
        case 1: _t->highLightMeshKernal((*reinterpret_cast< MeshData::MeshKernal*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDialog* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GmshDialogBase::*)(QDialog * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshDialogBase::showDialog)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GmshDialogBase::*)(MeshData::MeshKernal * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshDialogBase::highLightMeshKernal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gmsh::GmshDialogBase::staticMetaObject = { {
    QMetaObject::SuperData::link<GeometryWidget::GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_Gmsh__GmshDialogBase.data,
    qt_meta_data_Gmsh__GmshDialogBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gmsh::GmshDialogBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gmsh::GmshDialogBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gmsh__GmshDialogBase.stringdata0))
        return static_cast<void*>(this);
    return GeometryWidget::GeoDialogBase::qt_metacast(_clname);
}

int Gmsh::GmshDialogBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeometryWidget::GeoDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Gmsh::GmshDialogBase::showDialog(QDialog * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gmsh::GmshDialogBase::highLightMeshKernal(MeshData::MeshKernal * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
