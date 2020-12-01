/****************************************************************************
** Meta object code from reading C++ file 'ProjectTreeExtend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ProjectTreeExtend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectTreeExtend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProjectTree__ProjectTreeExtend_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectTree__ProjectTreeExtend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectTree__ProjectTreeExtend_t qt_meta_stringdata_ProjectTree__ProjectTreeExtend = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ProjectTree::ProjectTreeExtend"
QT_MOC_LITERAL(1, 31, 11), // "rootConMenu"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11) // "itemConMenu"

    },
    "ProjectTree::ProjectTreeExtend\0"
    "rootConMenu\0\0itemConMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectTree__ProjectTreeExtend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       3,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void ProjectTree::ProjectTreeExtend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectTreeExtend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rootConMenu((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->itemConMenu((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProjectTree::ProjectTreeExtend::staticMetaObject = { {
    QMetaObject::SuperData::link<ProjectTreeWithBasicNode::staticMetaObject>(),
    qt_meta_stringdata_ProjectTree__ProjectTreeExtend.data,
    qt_meta_data_ProjectTree__ProjectTreeExtend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProjectTree::ProjectTreeExtend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectTree::ProjectTreeExtend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectTree__ProjectTreeExtend.stringdata0))
        return static_cast<void*>(this);
    return ProjectTreeWithBasicNode::qt_metacast(_clname);
}

int ProjectTree::ProjectTreeExtend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProjectTreeWithBasicNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
