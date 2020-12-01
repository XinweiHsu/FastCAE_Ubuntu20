/****************************************************************************
** Meta object code from reading C++ file 'DialogVTKTransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogVTKTransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogVTKTransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__DialogVTKTransform_t {
    QByteArrayData data[10];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__DialogVTKTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__DialogVTKTransform_t qt_meta_stringdata_MainWidget__DialogVTKTransform = {
    {
QT_MOC_LITERAL(0, 0, 30), // "MainWidget::DialogVTKTransform"
QT_MOC_LITERAL(1, 31, 27), // "enabledCustomRotateAxisSlot"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 28), // "disabledCustomRotateAxisSlot"
QT_MOC_LITERAL(4, 89, 6), // "accept"
QT_MOC_LITERAL(5, 96, 22), // "selectedComponentsSlot"
QT_MOC_LITERAL(6, 119, 25), // "QList<MeshData::MeshSet*>"
QT_MOC_LITERAL(7, 145, 10), // "components"
QT_MOC_LITERAL(8, 156, 30), // "customContextMenuRequestedSlot"
QT_MOC_LITERAL(9, 187, 5) // "point"

    },
    "MainWidget::DialogVTKTransform\0"
    "enabledCustomRotateAxisSlot\0\0"
    "disabledCustomRotateAxisSlot\0accept\0"
    "selectedComponentsSlot\0QList<MeshData::MeshSet*>\0"
    "components\0customContextMenuRequestedSlot\0"
    "point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__DialogVTKTransform[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QPoint,    9,

       0        // eod
};

void MainWidget::DialogVTKTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogVTKTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledCustomRotateAxisSlot(); break;
        case 1: _t->disabledCustomRotateAxisSlot(); break;
        case 2: _t->accept(); break;
        case 3: _t->selectedComponentsSlot((*reinterpret_cast< QList<MeshData::MeshSet*>(*)>(_a[1]))); break;
        case 4: _t->customContextMenuRequestedSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::DialogVTKTransform::staticMetaObject = { {
    QMetaObject::SuperData::link<QFDialog::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__DialogVTKTransform.data,
    qt_meta_data_MainWidget__DialogVTKTransform,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::DialogVTKTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::DialogVTKTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__DialogVTKTransform.stringdata0))
        return static_cast<void*>(this);
    return QFDialog::qt_metacast(_clname);
}

int MainWidget::DialogVTKTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_MainWidget__DialogSelectComponents_t {
    QByteArrayData data[6];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__DialogSelectComponents_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__DialogSelectComponents_t qt_meta_stringdata_MainWidget__DialogSelectComponents = {
    {
QT_MOC_LITERAL(0, 0, 34), // "MainWidget::DialogSelectCompo..."
QT_MOC_LITERAL(1, 35, 21), // "selectedComponentsSig"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 25), // "QList<MeshData::MeshSet*>"
QT_MOC_LITERAL(4, 84, 10), // "components"
QT_MOC_LITERAL(5, 95, 6) // "accept"

    },
    "MainWidget::DialogSelectComponents\0"
    "selectedComponentsSig\0\0QList<MeshData::MeshSet*>\0"
    "components\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__DialogSelectComponents[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MainWidget::DialogSelectComponents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogSelectComponents *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedComponentsSig((*reinterpret_cast< QList<MeshData::MeshSet*>(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogSelectComponents::*)(QList<MeshData::MeshSet*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogSelectComponents::selectedComponentsSig)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::DialogSelectComponents::staticMetaObject = { {
    QMetaObject::SuperData::link<QFDialog::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__DialogSelectComponents.data,
    qt_meta_data_MainWidget__DialogSelectComponents,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::DialogSelectComponents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::DialogSelectComponents::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__DialogSelectComponents.stringdata0))
        return static_cast<void*>(this);
    return QFDialog::qt_metacast(_clname);
}

int MainWidget::DialogSelectComponents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MainWidget::DialogSelectComponents::selectedComponentsSig(QList<MeshData::MeshSet*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
