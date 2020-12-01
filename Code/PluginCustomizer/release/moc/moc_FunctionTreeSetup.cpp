/****************************************************************************
** Meta object code from reading C++ file 'FunctionTreeSetup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../FunctionTreeSetup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FunctionTreeSetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FastCAEDesigner__FunctionTreeSetup_t {
    QByteArrayData data[19];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FastCAEDesigner__FunctionTreeSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FastCAEDesigner__FunctionTreeSetup_t qt_meta_stringdata_FastCAEDesigner__FunctionTreeSetup = {
    {
QT_MOC_LITERAL(0, 0, 34), // "FastCAEDesigner::FunctionTree..."
QT_MOC_LITERAL(1, 35, 25), // "OnProjectTreeRightClicked"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 5), // "point"
QT_MOC_LITERAL(4, 68, 13), // "OnInsertChild"
QT_MOC_LITERAL(5, 82, 10), // "OnHideThis"
QT_MOC_LITERAL(6, 93, 10), // "OnShowThis"
QT_MOC_LITERAL(7, 104, 10), // "childindex"
QT_MOC_LITERAL(8, 115, 12), // "OnDeleteItem"
QT_MOC_LITERAL(9, 128, 19), // "OnInsertPhysicsTree"
QT_MOC_LITERAL(10, 148, 26), // "OnProjectTreeDoubleClicked"
QT_MOC_LITERAL(11, 175, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(12, 192, 8), // "treeItem"
QT_MOC_LITERAL(13, 201, 24), // "OnProjectTreeItemClicked"
QT_MOC_LITERAL(14, 226, 5), // "index"
QT_MOC_LITERAL(15, 232, 20), // "OnInsertMaterialTree"
QT_MOC_LITERAL(16, 253, 23), // "OnDeleteAllMaterialItem"
QT_MOC_LITERAL(17, 277, 22), // "onShowParameterLinkage"
QT_MOC_LITERAL(18, 300, 4) // "type"

    },
    "FastCAEDesigner::FunctionTreeSetup\0"
    "OnProjectTreeRightClicked\0\0point\0"
    "OnInsertChild\0OnHideThis\0OnShowThis\0"
    "childindex\0OnDeleteItem\0OnInsertPhysicsTree\0"
    "OnProjectTreeDoubleClicked\0QTreeWidgetItem*\0"
    "treeItem\0OnProjectTreeItemClicked\0"
    "index\0OnInsertMaterialTree\0"
    "OnDeleteAllMaterialItem\0onShowParameterLinkage\0"
    "type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FastCAEDesigner__FunctionTreeSetup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      13,    2,   82,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,
      16,    0,   88,    2, 0x08 /* Private */,
      17,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void FastCAEDesigner::FunctionTreeSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FunctionTreeSetup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnProjectTreeRightClicked((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->OnInsertChild(); break;
        case 2: _t->OnHideThis(); break;
        case 3: _t->OnShowThis((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnDeleteItem(); break;
        case 5: _t->OnInsertPhysicsTree(); break;
        case 6: _t->OnProjectTreeDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->OnProjectTreeItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->OnInsertMaterialTree(); break;
        case 9: _t->OnDeleteAllMaterialItem(); break;
        case 10: _t->onShowParameterLinkage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FastCAEDesigner::FunctionTreeSetup::staticMetaObject = { {
    QMetaObject::SuperData::link<ModuleBase::DockWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_FastCAEDesigner__FunctionTreeSetup.data,
    qt_meta_data_FastCAEDesigner__FunctionTreeSetup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FastCAEDesigner::FunctionTreeSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FastCAEDesigner::FunctionTreeSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FastCAEDesigner__FunctionTreeSetup.stringdata0))
        return static_cast<void*>(this);
    return ModuleBase::DockWidgetBase::qt_metacast(_clname);
}

int FastCAEDesigner::FunctionTreeSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModuleBase::DockWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
