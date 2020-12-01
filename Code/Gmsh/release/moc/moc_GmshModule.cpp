/****************************************************************************
** Meta object code from reading C++ file 'GmshModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../GmshModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GmshModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gmsh__GmshModule_t {
    QByteArrayData data[21];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gmsh__GmshModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gmsh__GmshModule_t qt_meta_stringdata_Gmsh__GmshModule = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Gmsh::GmshModule"
QT_MOC_LITERAL(1, 17, 10), // "showDialog"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "QDialog*"
QT_MOC_LITERAL(4, 38, 1), // "d"
QT_MOC_LITERAL(5, 40, 14), // "updateMeshTree"
QT_MOC_LITERAL(6, 55, 13), // "updateActions"
QT_MOC_LITERAL(7, 69, 11), // "generateSig"
QT_MOC_LITERAL(8, 81, 9), // "GMshPara*"
QT_MOC_LITERAL(9, 91, 4), // "para"
QT_MOC_LITERAL(10, 96, 27), // "printMessageToMessageWindow"
QT_MOC_LITERAL(11, 124, 19), // "ModuleBase::Message"
QT_MOC_LITERAL(12, 144, 7), // "message"
QT_MOC_LITERAL(13, 152, 13), // "updateSetTree"
QT_MOC_LITERAL(14, 166, 15), // "preWindowOpened"
QT_MOC_LITERAL(15, 182, 22), // "MainWidget::PreWindow*"
QT_MOC_LITERAL(16, 205, 15), // "preWindowClosed"
QT_MOC_LITERAL(17, 221, 12), // "generateSlot"
QT_MOC_LITERAL(18, 234, 8), // "editMesh"
QT_MOC_LITERAL(19, 243, 3), // "dim"
QT_MOC_LITERAL(20, 247, 5) // "index"

    },
    "Gmsh::GmshModule\0showDialog\0\0QDialog*\0"
    "d\0updateMeshTree\0updateActions\0"
    "generateSig\0GMshPara*\0para\0"
    "printMessageToMessageWindow\0"
    "ModuleBase::Message\0message\0updateSetTree\0"
    "preWindowOpened\0MainWidget::PreWindow*\0"
    "preWindowClosed\0generateSlot\0editMesh\0"
    "dim\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gmsh__GmshModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,
      10,    1,   72,    2, 0x06 /* Public */,
      13,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   76,    2, 0x08 /* Private */,
      16,    0,   79,    2, 0x08 /* Private */,
      17,    1,   80,    2, 0x08 /* Private */,
      18,    2,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,

       0        // eod
};

void Gmsh::GmshModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GmshModule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showDialog((*reinterpret_cast< QDialog*(*)>(_a[1]))); break;
        case 1: _t->updateMeshTree(); break;
        case 2: _t->updateActions(); break;
        case 3: _t->generateSig((*reinterpret_cast< GMshPara*(*)>(_a[1]))); break;
        case 4: _t->printMessageToMessageWindow((*reinterpret_cast< ModuleBase::Message(*)>(_a[1]))); break;
        case 5: _t->updateSetTree(); break;
        case 6: _t->preWindowOpened((*reinterpret_cast< MainWidget::PreWindow*(*)>(_a[1]))); break;
        case 7: _t->preWindowClosed(); break;
        case 8: _t->generateSlot((*reinterpret_cast< GMshPara*(*)>(_a[1]))); break;
        case 9: _t->editMesh((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModuleBase::Message >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GmshModule::*)(QDialog * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshModule::showDialog)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GmshModule::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshModule::updateMeshTree)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GmshModule::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshModule::updateActions)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GmshModule::*)(GMshPara * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshModule::generateSig)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GmshModule::*)(ModuleBase::Message );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshModule::printMessageToMessageWindow)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GmshModule::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GmshModule::updateSetTree)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gmsh::GmshModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gmsh__GmshModule.data,
    qt_meta_data_Gmsh__GmshModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gmsh::GmshModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gmsh::GmshModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gmsh__GmshModule.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gmsh::GmshModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Gmsh::GmshModule::showDialog(QDialog * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gmsh::GmshModule::updateMeshTree()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Gmsh::GmshModule::updateActions()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Gmsh::GmshModule::generateSig(GMshPara * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Gmsh::GmshModule::printMessageToMessageWindow(ModuleBase::Message _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Gmsh::GmshModule::updateSetTree()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
