/****************************************************************************
** Meta object code from reading C++ file 'columnDataDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../columnDataDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'columnDataDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColumnDataDockWidget_t {
    QByteArrayData data[7];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColumnDataDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColumnDataDockWidget_t qt_meta_stringdata_ColumnDataDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ColumnDataDockWidget"
QT_MOC_LITERAL(1, 21, 31), // "slot_console_file_data_val_show"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 9), // "indexfile"
QT_MOC_LITERAL(4, 64, 46), // "slot_console_file_data_val_sh..."
QT_MOC_LITERAL(5, 111, 12), // "QVector<int>"
QT_MOC_LITERAL(6, 124, 14) // "curve_col_list"

    },
    "ColumnDataDockWidget\0"
    "slot_console_file_data_val_show\0\0"
    "indexfile\0slot_console_file_data_val_show_from_curveData\0"
    "QVector<int>\0curve_col_list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColumnDataDockWidget[] = {

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
       1,    1,   24,    2, 0x0a /* Public */,
       4,    2,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    3,    6,

       0        // eod
};

void ColumnDataDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColumnDataDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_console_file_data_val_show((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_console_file_data_val_show_from_curveData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVector<int>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColumnDataDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ColumnDataDockWidget.data,
    qt_meta_data_ColumnDataDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColumnDataDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColumnDataDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColumnDataDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int ColumnDataDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
