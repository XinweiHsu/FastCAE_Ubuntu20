/****************************************************************************
** Meta object code from reading C++ file 'GmshThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GmshThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GmshThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gmsh__GmshThread_t {
    QByteArrayData data[12];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gmsh__GmshThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gmsh__GmshThread_t qt_meta_stringdata_Gmsh__GmshThread = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Gmsh::GmshThread"
QT_MOC_LITERAL(1, 17, 14), // "threadFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "GmshThread*"
QT_MOC_LITERAL(4, 45, 1), // "t"
QT_MOC_LITERAL(5, 47, 11), // "sendMessage"
QT_MOC_LITERAL(6, 59, 19), // "writeToSolveFileSig"
QT_MOC_LITERAL(7, 79, 11), // "vtkDataSet*"
QT_MOC_LITERAL(8, 91, 15), // "updateMeshActor"
QT_MOC_LITERAL(9, 107, 15), // "processFinished"
QT_MOC_LITERAL(10, 123, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(11, 144, 17) // "readProcessOutput"

    },
    "Gmsh::GmshThread\0threadFinished\0\0"
    "GmshThread*\0t\0sendMessage\0writeToSolveFileSig\0"
    "vtkDataSet*\0updateMeshActor\0processFinished\0"
    "QProcess::ExitStatus\0readProcessOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gmsh__GmshThread[] = {

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
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   54,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    2,    2,
    QMetaType::Void,

       0        // eod
};

void Gmsh::GmshThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GmshThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->threadFinished((*reinterpret_cast< GmshThread*(*)>(_a[1]))); break;
        case 1: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->writeToSolveFileSig((*reinterpret_cast< vtkDataSet*(*)>(_a[1]))); break;
        case 3: _t->updateMeshActor(); break;
        case 4: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->readProcessOutput(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GmshThread* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GmshThread::*)(GmshThread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshThread::threadFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GmshThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshThread::sendMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GmshThread::*)(vtkDataSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshThread::writeToSolveFileSig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GmshThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshThread::updateMeshActor)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gmsh::GmshThread::staticMetaObject = { {
    QMetaObject::SuperData::link<DataProperty::DataBase::staticMetaObject>(),
    qt_meta_stringdata_Gmsh__GmshThread.data,
    qt_meta_data_Gmsh__GmshThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gmsh::GmshThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gmsh::GmshThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gmsh__GmshThread.stringdata0))
        return static_cast<void*>(this);
    return DataProperty::DataBase::qt_metacast(_clname);
}

int Gmsh::GmshThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DataProperty::DataBase::qt_metacall(_c, _id, _a);
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
void Gmsh::GmshThread::threadFinished(GmshThread * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gmsh::GmshThread::sendMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gmsh::GmshThread::writeToSolveFileSig(vtkDataSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Gmsh::GmshThread::updateMeshActor()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
