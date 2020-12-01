/****************************************************************************
** Meta object code from reading C++ file 'DialogMeshChecking.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogMeshChecking.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogMeshChecking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__MeshCheckingDialog_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__MeshCheckingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__MeshCheckingDialog_t qt_meta_stringdata_MainWidget__MeshCheckingDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "MainWidget::MeshCheckingDialog"
QT_MOC_LITERAL(1, 31, 9), // "highLight"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "vtkDataSet*"
QT_MOC_LITERAL(4, 54, 1), // "d"
QT_MOC_LITERAL(5, 56, 10), // "setDisplay"
QT_MOC_LITERAL(6, 67, 15), // "checkerFinished"
QT_MOC_LITERAL(7, 83, 22), // "on_checkButton_clicked"
QT_MOC_LITERAL(8, 106, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(9, 129, 19) // "on_checkbox_changed"

    },
    "MainWidget::MeshCheckingDialog\0highLight\0"
    "\0vtkDataSet*\0d\0setDisplay\0checkerFinished\0"
    "on_checkButton_clicked\0on_closeButton_clicked\0"
    "on_checkbox_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__MeshCheckingDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWidget::MeshCheckingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeshCheckingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->highLight((*reinterpret_cast< vtkDataSet*(*)>(_a[1]))); break;
        case 1: _t->setDisplay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->checkerFinished(); break;
        case 3: _t->on_checkButton_clicked(); break;
        case 4: _t->on_closeButton_clicked(); break;
        case 5: _t->on_checkbox_changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MeshCheckingDialog::*)(vtkDataSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MeshCheckingDialog::highLight)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MeshCheckingDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MeshCheckingDialog::setDisplay)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::MeshCheckingDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFDialog::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__MeshCheckingDialog.data,
    qt_meta_data_MainWidget__MeshCheckingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::MeshCheckingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::MeshCheckingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__MeshCheckingDialog.stringdata0))
        return static_cast<void*>(this);
    return QFDialog::qt_metacast(_clname);
}

int MainWidget::MeshCheckingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::MeshCheckingDialog::highLight(vtkDataSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWidget::MeshCheckingDialog::setDisplay(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
