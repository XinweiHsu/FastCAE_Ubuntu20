/****************************************************************************
** Meta object code from reading C++ file 'PyAgent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PyAgent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PyAgent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Py__PythonAagent_t {
    QByteArrayData data[7];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Py__PythonAagent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Py__PythonAagent_t qt_meta_stringdata_Py__PythonAagent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Py::PythonAagent"
QT_MOC_LITERAL(1, 17, 9), // "printInfo"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "type"
QT_MOC_LITERAL(4, 33, 1), // "m"
QT_MOC_LITERAL(5, 35, 15), // "closeMainWindow"
QT_MOC_LITERAL(6, 51, 14) // "readerFinished"

    },
    "Py::PythonAagent\0printInfo\0\0type\0m\0"
    "closeMainWindow\0readerFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Py__PythonAagent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Py::PythonAagent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythonAagent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->printInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->closeMainWindow(); break;
        case 2: _t->readerFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PythonAagent::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PythonAagent::printInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PythonAagent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PythonAagent::closeMainWindow)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Py::PythonAagent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Py__PythonAagent.data,
    qt_meta_data_Py__PythonAagent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Py::PythonAagent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Py::PythonAagent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Py__PythonAagent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Py::PythonAagent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Py::PythonAagent::printInfo(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Py::PythonAagent::closeMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
