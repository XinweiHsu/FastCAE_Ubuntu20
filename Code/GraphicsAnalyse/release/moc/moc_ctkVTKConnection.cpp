/****************************************************************************
** Meta object code from reading C++ file 'ctkVTKConnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Visualization/VTK/Core/ctkVTKConnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkVTKConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkVTKConnection_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkVTKConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkVTKConnection_t qt_meta_stringdata_ctkVTKConnection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ctkVTKConnection"
QT_MOC_LITERAL(1, 17, 11), // "emitExecute"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "vtkObject*"
QT_MOC_LITERAL(4, 41, 6), // "caller"
QT_MOC_LITERAL(5, 48, 9), // "call_data"
QT_MOC_LITERAL(6, 58, 9), // "vtk_event"
QT_MOC_LITERAL(7, 68, 11), // "client_data"
QT_MOC_LITERAL(8, 80, 16), // "vtkObjectDeleted"
QT_MOC_LITERAL(9, 97, 14) // "qobjectDeleted"

    },
    "ctkVTKConnection\0emitExecute\0\0vtkObject*\0"
    "caller\0call_data\0vtk_event\0client_data\0"
    "vtkObjectDeleted\0qobjectDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkVTKConnection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       1,    4,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   48,    2, 0x09 /* Protected */,
       9,    0,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::VoidStar, QMetaType::ULong, QMetaType::VoidStar,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ctkVTKConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkVTKConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitExecute((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< vtkObject*(*)>(_a[2]))); break;
        case 1: _t->emitExecute((*reinterpret_cast< vtkObject*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 2: _t->vtkObjectDeleted(); break;
        case 3: _t->qobjectDeleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkVTKConnection::*)(vtkObject * , vtkObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKConnection::emitExecute)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkVTKConnection::*)(vtkObject * , void * , unsigned long , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKConnection::emitExecute)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ctkVTKConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ctkVTKConnection.data,
    qt_meta_data_ctkVTKConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkVTKConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkVTKConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkVTKConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ctkVTKConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ctkVTKConnection::emitExecute(vtkObject * _t1, vtkObject * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkVTKConnection::emitExecute(vtkObject * _t1, void * _t2, unsigned long _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
