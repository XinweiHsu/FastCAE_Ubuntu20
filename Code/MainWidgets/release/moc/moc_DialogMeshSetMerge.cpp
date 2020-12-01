/****************************************************************************
** Meta object code from reading C++ file 'DialogMeshSetMerge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogMeshSetMerge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogMeshSetMerge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__MeshSetMergeDialog_t {
    QByteArrayData data[7];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__MeshSetMergeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__MeshSetMergeDialog_t qt_meta_stringdata_MainWidget__MeshSetMergeDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "MainWidget::MeshSetMergeDialog"
QT_MOC_LITERAL(1, 31, 14), // "on_typeChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(4, 68, 23), // "on_removeButton_clicked"
QT_MOC_LITERAL(5, 92, 18), // "on_btn_add_clicked"
QT_MOC_LITERAL(6, 111, 18) // "on_btn_del_clicked"

    },
    "MainWidget::MeshSetMergeDialog\0"
    "on_typeChanged\0\0on_addButton_clicked\0"
    "on_removeButton_clicked\0on_btn_add_clicked\0"
    "on_btn_del_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__MeshSetMergeDialog[] = {

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
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWidget::MeshSetMergeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeshSetMergeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_typeChanged(); break;
        case 1: _t->on_addButton_clicked(); break;
        case 2: _t->on_removeButton_clicked(); break;
        case 3: _t->on_btn_add_clicked(); break;
        case 4: _t->on_btn_del_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::MeshSetMergeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFDialog::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__MeshSetMergeDialog.data,
    qt_meta_data_MainWidget__MeshSetMergeDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::MeshSetMergeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::MeshSetMergeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__MeshSetMergeDialog.stringdata0))
        return static_cast<void*>(this);
    return QFDialog::qt_metacast(_clname);
}

int MainWidget::MeshSetMergeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
