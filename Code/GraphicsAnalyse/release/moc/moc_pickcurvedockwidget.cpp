/****************************************************************************
** Meta object code from reading C++ file 'pickcurvedockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../pickcurvedockwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pickcurvedockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pickCurveDockWidget_t {
    QByteArrayData data[12];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pickCurveDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pickCurveDockWidget_t qt_meta_stringdata_pickCurveDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "pickCurveDockWidget"
QT_MOC_LITERAL(1, 20, 17), // "slot_del_3d_curve"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "slot_draw_3d_curve"
QT_MOC_LITERAL(4, 58, 14), // "tep_curve_name"
QT_MOC_LITERAL(5, 73, 15), // "QVector<double>"
QT_MOC_LITERAL(6, 89, 4), // "data"
QT_MOC_LITERAL(7, 94, 20), // "slot_update_3d_curve"
QT_MOC_LITERAL(8, 115, 14), // "tep_file_index"
QT_MOC_LITERAL(9, 130, 16), // "tep_column_index"
QT_MOC_LITERAL(10, 147, 5), // "val_x"
QT_MOC_LITERAL(11, 153, 5) // "val_y"

    },
    "pickCurveDockWidget\0slot_del_3d_curve\0"
    "\0slot_draw_3d_curve\0tep_curve_name\0"
    "QVector<double>\0data\0slot_update_3d_curve\0"
    "tep_file_index\0tep_column_index\0val_x\0"
    "val_y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pickCurveDockWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    2,   30,    2, 0x08 /* Private */,
       7,    4,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double,    8,    9,   10,   11,

       0        // eod
};

void pickCurveDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pickCurveDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_del_3d_curve(); break;
        case 1: _t->slot_draw_3d_curve((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        case 2: _t->slot_update_3d_curve((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject pickCurveDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_pickCurveDockWidget.data,
    qt_meta_data_pickCurveDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *pickCurveDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pickCurveDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pickCurveDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int pickCurveDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
