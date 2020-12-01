/****************************************************************************
** Meta object code from reading C++ file 'SolverControlerBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SolverControlerBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SolverControlerBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SolverControl__SolverControlBase_t {
    QByteArrayData data[19];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SolverControl__SolverControlBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SolverControl__SolverControlBase_t qt_meta_stringdata_SolverControl__SolverControlBase = {
    {
QT_MOC_LITERAL(0, 0, 32), // "SolverControl::SolverControlBase"
QT_MOC_LITERAL(1, 33, 13), // "solverStarted"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "QWidget*"
QT_MOC_LITERAL(4, 57, 10), // "processBar"
QT_MOC_LITERAL(5, 68, 11), // "sendMessage"
QT_MOC_LITERAL(6, 80, 4), // "mess"
QT_MOC_LITERAL(7, 85, 13), // "processFinish"
QT_MOC_LITERAL(8, 99, 3), // "pid"
QT_MOC_LITERAL(9, 103, 12), // "openRealTime"
QT_MOC_LITERAL(10, 116, 25), // "Post::RealTimeWindowBase*"
QT_MOC_LITERAL(11, 142, 1), // "w"
QT_MOC_LITERAL(12, 144, 5), // "proID"
QT_MOC_LITERAL(13, 150, 16), // "readSolverOutput"
QT_MOC_LITERAL(14, 167, 15), // "processFinished"
QT_MOC_LITERAL(15, 183, 8), // "exitCode"
QT_MOC_LITERAL(16, 192, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(17, 213, 10), // "exitStatus"
QT_MOC_LITERAL(18, 224, 10) // "stopSolver"

    },
    "SolverControl::SolverControlBase\0"
    "solverStarted\0\0QWidget*\0processBar\0"
    "sendMessage\0mess\0processFinish\0pid\0"
    "openRealTime\0Post::RealTimeWindowBase*\0"
    "w\0proID\0readSolverOutput\0processFinished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "stopSolver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SolverControl__SolverControlBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       9,    2,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   63,    2, 0x09 /* Protected */,
      14,    2,   64,    2, 0x09 /* Protected */,
      18,    1,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 16,   15,   17,
    QMetaType::Void, 0x80000000 | 3,   11,

       0        // eod
};

void SolverControl::SolverControlBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SolverControlBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->solverStarted((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->processFinish((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->openRealTime((*reinterpret_cast< Post::RealTimeWindowBase*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->readSolverOutput(); break;
        case 5: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 6: _t->stopSolver((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SolverControlBase::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SolverControlBase::solverStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SolverControlBase::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SolverControlBase::sendMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SolverControlBase::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SolverControlBase::processFinish)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SolverControlBase::*)(Post::RealTimeWindowBase * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SolverControlBase::openRealTime)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SolverControl::SolverControlBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SolverControl__SolverControlBase.data,
    qt_meta_data_SolverControl__SolverControlBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SolverControl::SolverControlBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SolverControl::SolverControlBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SolverControl__SolverControlBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SolverControl::SolverControlBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SolverControl::SolverControlBase::solverStarted(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SolverControl::SolverControlBase::sendMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SolverControl::SolverControlBase::processFinish(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SolverControl::SolverControlBase::openRealTime(Post::RealTimeWindowBase * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
