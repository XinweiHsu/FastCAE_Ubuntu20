/****************************************************************************
** Meta object code from reading C++ file 'projectTreeBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../projectTreeBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectTreeBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProjectTree__ProjectTreeBase_t {
    QByteArrayData data[21];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectTree__ProjectTreeBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectTree__ProjectTreeBase_t qt_meta_stringdata_ProjectTree__ProjectTreeBase = {
    {
QT_MOC_LITERAL(0, 0, 28), // "ProjectTree::ProjectTreeBase"
QT_MOC_LITERAL(1, 29, 11), // "disPlayProp"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "DataProperty::DataBase*"
QT_MOC_LITERAL(4, 66, 4), // "pops"
QT_MOC_LITERAL(5, 71, 17), // "dispalyParaWidget"
QT_MOC_LITERAL(6, 89, 8), // "QWidget*"
QT_MOC_LITERAL(7, 98, 1), // "w"
QT_MOC_LITERAL(8, 100, 17), // "openPostWindowSig"
QT_MOC_LITERAL(9, 118, 21), // "Post::PostWindowBase*"
QT_MOC_LITERAL(10, 140, 18), // "showPostWindowInfo"
QT_MOC_LITERAL(11, 159, 2), // "id"
QT_MOC_LITERAL(12, 162, 4), // "type"
QT_MOC_LITERAL(13, 167, 18), // "solveStatusChanged"
QT_MOC_LITERAL(14, 186, 10), // "solveBegin"
QT_MOC_LITERAL(15, 197, 8), // "proIndex"
QT_MOC_LITERAL(16, 206, 13), // "solveFinished"
QT_MOC_LITERAL(17, 220, 5), // "proid"
QT_MOC_LITERAL(18, 226, 20), // "realTimeWindowOpened"
QT_MOC_LITERAL(19, 247, 25), // "Post::RealTimeWindowBase*"
QT_MOC_LITERAL(20, 273, 20) // "realTimeWindowClosed"

    },
    "ProjectTree::ProjectTreeBase\0disPlayProp\0"
    "\0DataProperty::DataBase*\0pops\0"
    "dispalyParaWidget\0QWidget*\0w\0"
    "openPostWindowSig\0Post::PostWindowBase*\0"
    "showPostWindowInfo\0id\0type\0"
    "solveStatusChanged\0solveBegin\0proIndex\0"
    "solveFinished\0proid\0realTimeWindowOpened\0"
    "Post::RealTimeWindowBase*\0"
    "realTimeWindowClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectTree__ProjectTreeBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,
      10,    2,   68,    2, 0x06 /* Public */,
      13,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   74,    2, 0x09 /* Protected */,
      16,    1,   77,    2, 0x09 /* Protected */,
      18,    2,   80,    2, 0x09 /* Protected */,
      20,    1,   85,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,    7,   11,
    QMetaType::Void, 0x80000000 | 19,    7,

       0        // eod
};

void ProjectTree::ProjectTreeBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectTreeBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->disPlayProp((*reinterpret_cast< DataProperty::DataBase*(*)>(_a[1]))); break;
        case 1: _t->dispalyParaWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->openPostWindowSig((*reinterpret_cast< Post::PostWindowBase*(*)>(_a[1]))); break;
        case 3: _t->showPostWindowInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->solveStatusChanged(); break;
        case 5: _t->solveBegin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->solveFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->realTimeWindowOpened((*reinterpret_cast< Post::RealTimeWindowBase*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->realTimeWindowClosed((*reinterpret_cast< Post::RealTimeWindowBase*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectTreeBase::*)(DataProperty::DataBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectTreeBase::disPlayProp)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProjectTreeBase::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectTreeBase::dispalyParaWidget)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProjectTreeBase::*)(Post::PostWindowBase * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectTreeBase::openPostWindowSig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProjectTreeBase::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectTreeBase::showPostWindowInfo)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProjectTreeBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectTreeBase::solveStatusChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProjectTree::ProjectTreeBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ProjectTree__ProjectTreeBase.data,
    qt_meta_data_ProjectTree__ProjectTreeBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProjectTree::ProjectTreeBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectTree::ProjectTreeBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectTree__ProjectTreeBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProjectTree::ProjectTreeBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ProjectTree::ProjectTreeBase::disPlayProp(DataProperty::DataBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProjectTree::ProjectTreeBase::dispalyParaWidget(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProjectTree::ProjectTreeBase::openPostWindowSig(Post::PostWindowBase * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProjectTree::ProjectTreeBase::showPostWindowInfo(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProjectTree::ProjectTreeBase::solveStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
