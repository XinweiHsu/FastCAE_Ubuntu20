/****************************************************************************
** Meta object code from reading C++ file 'MesherControlerBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MesherControlerBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MesherControlerBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SolverControl__MesherControlerBase_t {
    QByteArrayData data[10];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SolverControl__MesherControlerBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SolverControl__MesherControlerBase_t qt_meta_stringdata_SolverControl__MesherControlerBase = {
    {
QT_MOC_LITERAL(0, 0, 34), // "SolverControl::MesherControle..."
QT_MOC_LITERAL(1, 35, 13), // "addProcessBar"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "QWidget*"
QT_MOC_LITERAL(4, 59, 1), // "w"
QT_MOC_LITERAL(5, 61, 11), // "sendMessage"
QT_MOC_LITERAL(6, 73, 10), // "importMesh"
QT_MOC_LITERAL(7, 84, 15), // "processFinished"
QT_MOC_LITERAL(8, 100, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(9, 121, 16) // "readSolverOutput"

    },
    "SolverControl::MesherControlerBase\0"
    "addProcessBar\0\0QWidget*\0w\0sendMessage\0"
    "importMesh\0processFinished\0"
    "QProcess::ExitStatus\0readSolverOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SolverControl__MesherControlerBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   48,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    2,    2,
    QMetaType::Void,

       0        // eod
};

void SolverControl::MesherControlerBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MesherControlerBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addProcessBar((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->importMesh((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->readSolverOutput(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MesherControlerBase::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MesherControlerBase::addProcessBar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MesherControlerBase::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MesherControlerBase::sendMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MesherControlerBase::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MesherControlerBase::importMesh)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SolverControl::MesherControlerBase::staticMetaObject = { {
    QMetaObject::SuperData::link<ModuleBase::ProcessBar::staticMetaObject>(),
    qt_meta_stringdata_SolverControl__MesherControlerBase.data,
    qt_meta_data_SolverControl__MesherControlerBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SolverControl::MesherControlerBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolverControl::MesherControlerBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SolverControl__MesherControlerBase.stringdata0))
        return static_cast<void*>(this);
    return ModuleBase::ProcessBar::qt_metacast(_clname);
}

int SolverControl::MesherControlerBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModuleBase::ProcessBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SolverControl::MesherControlerBase::addProcessBar(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SolverControl::MesherControlerBase::sendMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SolverControl::MesherControlerBase::importMesh(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
