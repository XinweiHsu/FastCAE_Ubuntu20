/****************************************************************************
** Meta object code from reading C++ file 'ControlPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ControlPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControlPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__ControlPanel_t {
    QByteArrayData data[16];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__ControlPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__ControlPanel_t qt_meta_stringdata_MainWidget__ControlPanel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "MainWidget::ControlPanel"
QT_MOC_LITERAL(1, 25, 18), // "updateActionStates"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "on_TreeMouseEvent"
QT_MOC_LITERAL(4, 63, 10), // "evevntType"
QT_MOC_LITERAL(5, 74, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 91, 4), // "item"
QT_MOC_LITERAL(7, 96, 5), // "proID"
QT_MOC_LITERAL(8, 102, 17), // "updataPropertyTab"
QT_MOC_LITERAL(9, 120, 23), // "DataProperty::DataBase*"
QT_MOC_LITERAL(10, 144, 7), // "popList"
QT_MOC_LITERAL(11, 152, 26), // "changePropTabByProjectPage"
QT_MOC_LITERAL(12, 179, 5), // "index"
QT_MOC_LITERAL(13, 185, 16), // "updataParaWidget"
QT_MOC_LITERAL(14, 202, 8), // "QWidget*"
QT_MOC_LITERAL(15, 211, 1) // "w"

    },
    "MainWidget::ControlPanel\0updateActionStates\0"
    "\0on_TreeMouseEvent\0evevntType\0"
    "QTreeWidgetItem*\0item\0proID\0"
    "updataPropertyTab\0DataProperty::DataBase*\0"
    "popList\0changePropTabByProjectPage\0"
    "index\0updataParaWidget\0QWidget*\0w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__ControlPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   40,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,
      11,    1,   50,    2, 0x0a /* Public */,
      13,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5, QMetaType::Int,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void MainWidget::ControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateActionStates(); break;
        case 1: _t->on_TreeMouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->updataPropertyTab((*reinterpret_cast< DataProperty::DataBase*(*)>(_a[1]))); break;
        case 3: _t->changePropTabByProjectPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updataParaWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControlPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPanel::updateActionStates)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::ControlPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ModuleBase::DockWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__ControlPanel.data,
    qt_meta_data_MainWidget__ControlPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::ControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::ControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__ControlPanel.stringdata0))
        return static_cast<void*>(this);
    return ModuleBase::DockWidgetBase::qt_metacast(_clname);
}

int MainWidget::ControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModuleBase::DockWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::ControlPanel::updateActionStates()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
