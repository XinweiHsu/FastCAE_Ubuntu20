/****************************************************************************
** Meta object code from reading C++ file 'consolecmddockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../consolecmddockwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consolecmddockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_consoleCmdDockWidget_t {
    QByteArrayData data[13];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_consoleCmdDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_consoleCmdDockWidget_t qt_meta_stringdata_consoleCmdDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "consoleCmdDockWidget"
QT_MOC_LITERAL(1, 21, 33), // "slot_update_clear_console_com..."
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 28), // "slot_update_console_cmd_form"
QT_MOC_LITERAL(4, 85, 7), // "cmd_str"
QT_MOC_LITERAL(5, 93, 21), // "slot_addInfoToConsole"
QT_MOC_LITERAL(6, 115, 7), // "infoStr"
QT_MOC_LITERAL(7, 123, 14), // "DisplayMessage"
QT_MOC_LITERAL(8, 138, 5), // "title"
QT_MOC_LITERAL(9, 144, 7), // "message"
QT_MOC_LITERAL(10, 152, 8), // "EMsgType"
QT_MOC_LITERAL(11, 161, 4), // "type"
QT_MOC_LITERAL(12, 166, 5) // "onDlg"

    },
    "consoleCmdDockWidget\0"
    "slot_update_clear_console_command\0\0"
    "slot_update_console_cmd_form\0cmd_str\0"
    "slot_addInfoToConsole\0infoStr\0"
    "DisplayMessage\0title\0message\0EMsgType\0"
    "type\0onDlg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_consoleCmdDockWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    4,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 10, QMetaType::Bool,    8,    9,   11,   12,

       0        // eod
};

void consoleCmdDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<consoleCmdDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_update_clear_console_command(); break;
        case 1: _t->slot_update_console_cmd_form((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slot_addInfoToConsole((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->DisplayMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< EMsgType(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject consoleCmdDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_consoleCmdDockWidget.data,
    qt_meta_data_consoleCmdDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *consoleCmdDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *consoleCmdDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_consoleCmdDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int consoleCmdDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
