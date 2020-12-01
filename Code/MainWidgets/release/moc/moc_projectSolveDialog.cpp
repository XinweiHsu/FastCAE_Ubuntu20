/****************************************************************************
** Meta object code from reading C++ file 'projectSolveDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../projectSolveDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectSolveDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__ProjcctSolveDialog_t {
    QByteArrayData data[10];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__ProjcctSolveDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__ProjcctSolveDialog_t qt_meta_stringdata_MainWidget__ProjcctSolveDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "MainWidget::ProjcctSolveDialog"
QT_MOC_LITERAL(1, 31, 12), // "solveProject"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "modelIndex"
QT_MOC_LITERAL(4, 56, 11), // "solverIndex"
QT_MOC_LITERAL(5, 68, 19), // "sig_display_message"
QT_MOC_LITERAL(6, 88, 19), // "ModuleBase::Message"
QT_MOC_LITERAL(7, 108, 7), // "message"
QT_MOC_LITERAL(8, 116, 22), // "on_solveButton_clicked"
QT_MOC_LITERAL(9, 139, 23) // "on_cancleButton_clicked"

    },
    "MainWidget::ProjcctSolveDialog\0"
    "solveProject\0\0modelIndex\0solverIndex\0"
    "sig_display_message\0ModuleBase::Message\0"
    "message\0on_solveButton_clicked\0"
    "on_cancleButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__ProjcctSolveDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   42,    2, 0x08 /* Private */,
       9,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWidget::ProjcctSolveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjcctSolveDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->solveProject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sig_display_message((*reinterpret_cast< ModuleBase::Message(*)>(_a[1]))); break;
        case 2: _t->on_solveButton_clicked(); break;
        case 3: _t->on_cancleButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            using _t = void (ProjcctSolveDialog::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjcctSolveDialog::solveProject)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProjcctSolveDialog::*)(ModuleBase::Message );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjcctSolveDialog::sig_display_message)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::ProjcctSolveDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFDialog::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__ProjcctSolveDialog.data,
    qt_meta_data_MainWidget__ProjcctSolveDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::ProjcctSolveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::ProjcctSolveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__ProjcctSolveDialog.stringdata0))
        return static_cast<void*>(this);
    return QFDialog::qt_metacast(_clname);
}

int MainWidget::ProjcctSolveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::ProjcctSolveDialog::solveProject(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWidget::ProjcctSolveDialog::sig_display_message(ModuleBase::Message _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
