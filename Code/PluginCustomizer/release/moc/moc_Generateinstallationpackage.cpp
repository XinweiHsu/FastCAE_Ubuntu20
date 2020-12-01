/****************************************************************************
** Meta object code from reading C++ file 'Generateinstallationpackage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Generateinstallationpackage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Generateinstallationpackage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FastCAEDesigner__Generateinstallationpackage_t {
    QByteArrayData data[16];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FastCAEDesigner__Generateinstallationpackage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FastCAEDesigner__Generateinstallationpackage_t qt_meta_stringdata_FastCAEDesigner__Generateinstallationpackage = {
    {
QT_MOC_LITERAL(0, 0, 44), // "FastCAEDesigner::Generateinst..."
QT_MOC_LITERAL(1, 45, 21), // "slot_console_finished"
QT_MOC_LITERAL(2, 67, 0), // ""
QT_MOC_LITERAL(3, 68, 4), // "code"
QT_MOC_LITERAL(4, 73, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(5, 94, 6), // "status"
QT_MOC_LITERAL(6, 101, 19), // "slot_console_output"
QT_MOC_LITERAL(7, 121, 26), // "slot_console_state_changed"
QT_MOC_LITERAL(8, 148, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(9, 171, 5), // "state"
QT_MOC_LITERAL(10, 177, 26), // "slot_console_process_error"
QT_MOC_LITERAL(11, 204, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(12, 227, 17), // "OnPathPBtnClicked"
QT_MOC_LITERAL(13, 245, 21), // "OnGeneratePBtnClicked"
QT_MOC_LITERAL(14, 267, 9), // "OnTimeout"
QT_MOC_LITERAL(15, 277, 10) // "OnTimeOver"

    },
    "FastCAEDesigner::Generateinstallationpackage\0"
    "slot_console_finished\0\0code\0"
    "QProcess::ExitStatus\0status\0"
    "slot_console_output\0slot_console_state_changed\0"
    "QProcess::ProcessState\0state\0"
    "slot_console_process_error\0"
    "QProcess::ProcessError\0OnPathPBtnClicked\0"
    "OnGeneratePBtnClicked\0OnTimeout\0"
    "OnTimeOver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FastCAEDesigner__Generateinstallationpackage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,
      14,    0,   68,    2, 0x08 /* Private */,
      15,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FastCAEDesigner::Generateinstallationpackage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Generateinstallationpackage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_console_finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 1: _t->slot_console_output(); break;
        case 2: _t->slot_console_state_changed((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 3: _t->slot_console_process_error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 4: _t->OnPathPBtnClicked(); break;
        case 5: _t->OnGeneratePBtnClicked(); break;
        case 6: _t->OnTimeout(); break;
        case 7: _t->OnTimeOver(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FastCAEDesigner::Generateinstallationpackage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FastCAEDesigner__Generateinstallationpackage.data,
    qt_meta_data_FastCAEDesigner__Generateinstallationpackage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FastCAEDesigner::Generateinstallationpackage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FastCAEDesigner::Generateinstallationpackage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FastCAEDesigner__Generateinstallationpackage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FastCAEDesigner::Generateinstallationpackage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
