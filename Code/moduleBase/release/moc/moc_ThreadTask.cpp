/****************************************************************************
** Meta object code from reading C++ file 'ThreadTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ThreadTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModuleBase__ThreadTask_t {
    QByteArrayData data[17];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModuleBase__ThreadTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModuleBase__ThreadTask_t qt_meta_stringdata_ModuleBase__ThreadTask = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ModuleBase::ThreadTask"
QT_MOC_LITERAL(1, 23, 5), // "start"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "showProcessBar"
QT_MOC_LITERAL(4, 45, 8), // "QWidget*"
QT_MOC_LITERAL(5, 54, 11), // "closeThread"
QT_MOC_LITERAL(6, 66, 17), // "setFinishedStatus"
QT_MOC_LITERAL(7, 84, 8), // "setRange"
QT_MOC_LITERAL(8, 93, 10), // "showButton"
QT_MOC_LITERAL(9, 104, 15), // "showInformation"
QT_MOC_LITERAL(10, 120, 1), // "s"
QT_MOC_LITERAL(11, 122, 10), // "updateMesh"
QT_MOC_LITERAL(12, 133, 14), // "threadFinished"
QT_MOC_LITERAL(13, 148, 10), // "threadWait"
QT_MOC_LITERAL(14, 159, 1), // "n"
QT_MOC_LITERAL(15, 161, 3), // "run"
QT_MOC_LITERAL(16, 165, 4) // "stop"

    },
    "ModuleBase::ThreadTask\0start\0\0"
    "showProcessBar\0QWidget*\0closeThread\0"
    "setFinishedStatus\0setRange\0showButton\0"
    "showInformation\0s\0updateMesh\0"
    "threadFinished\0threadWait\0n\0run\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModuleBase__ThreadTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,
       7,    2,   82,    2, 0x06 /* Public */,
       8,    1,   87,    2, 0x06 /* Public */,
       9,    1,   90,    2, 0x06 /* Public */,
      11,    0,   93,    2, 0x06 /* Public */,
      12,    0,   94,    2, 0x06 /* Public */,
      13,    1,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   98,    2, 0x0a /* Public */,
      16,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModuleBase::ThreadTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->showProcessBar((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->closeThread(); break;
        case 3: _t->setFinishedStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->showButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showInformation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->updateMesh(); break;
        case 8: _t->threadFinished(); break;
        case 9: _t->threadWait((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->run(); break;
        case 11: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::showProcessBar)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::closeThread)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::setFinishedStatus)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::setRange)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::showButton)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::showInformation)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::updateMesh)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::threadFinished)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ThreadTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadTask::threadWait)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModuleBase::ThreadTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ModuleBase__ThreadTask.data,
    qt_meta_data_ModuleBase__ThreadTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModuleBase::ThreadTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModuleBase::ThreadTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleBase__ThreadTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModuleBase::ThreadTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ModuleBase::ThreadTask::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ModuleBase::ThreadTask::showProcessBar(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModuleBase::ThreadTask::closeThread()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ModuleBase::ThreadTask::setFinishedStatus(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ModuleBase::ThreadTask::setRange(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ModuleBase::ThreadTask::showButton(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ModuleBase::ThreadTask::showInformation(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ModuleBase::ThreadTask::updateMesh()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ModuleBase::ThreadTask::threadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ModuleBase::ThreadTask::threadWait(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
