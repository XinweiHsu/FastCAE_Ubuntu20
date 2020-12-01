/****************************************************************************
** Meta object code from reading C++ file 'ParaTableWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ParaTableWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParaTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelfDefObj__ParaTableWidget_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelfDefObj__ParaTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelfDefObj__ParaTableWidget_t qt_meta_stringdata_SelfDefObj__ParaTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "SelfDefObj::ParaTableWidget"
QT_MOC_LITERAL(1, 28, 14), // "lockGraphFocus"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "horizontalMenu"
QT_MOC_LITERAL(4, 59, 1), // "p"
QT_MOC_LITERAL(5, 61, 12), // "verticalMenu"
QT_MOC_LITERAL(6, 74, 14), // "insertRowAbove"
QT_MOC_LITERAL(7, 89, 14), // "insertRowBelow"
QT_MOC_LITERAL(8, 104, 16), // "insertColumnLeft"
QT_MOC_LITERAL(9, 121, 17), // "insertColumnRight"
QT_MOC_LITERAL(10, 139, 9), // "deleteRow"
QT_MOC_LITERAL(11, 149, 12), // "deleteColumn"
QT_MOC_LITERAL(12, 162, 12) // "renameColumn"

    },
    "SelfDefObj::ParaTableWidget\0lockGraphFocus\0"
    "\0horizontalMenu\0p\0verticalMenu\0"
    "insertRowAbove\0insertRowBelow\0"
    "insertColumnLeft\0insertColumnRight\0"
    "deleteRow\0deleteColumn\0renameColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelfDefObj__ParaTableWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   67,    2, 0x09 /* Protected */,
       5,    1,   70,    2, 0x09 /* Protected */,
       6,    0,   73,    2, 0x09 /* Protected */,
       7,    0,   74,    2, 0x09 /* Protected */,
       8,    0,   75,    2, 0x09 /* Protected */,
       9,    0,   76,    2, 0x09 /* Protected */,
      10,    0,   77,    2, 0x09 /* Protected */,
      11,    0,   78,    2, 0x09 /* Protected */,
      12,    0,   79,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelfDefObj::ParaTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParaTableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lockGraphFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->horizontalMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->verticalMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->insertRowAbove(); break;
        case 4: _t->insertRowBelow(); break;
        case 5: _t->insertColumnLeft(); break;
        case 6: _t->insertColumnRight(); break;
        case 7: _t->deleteRow(); break;
        case 8: _t->deleteColumn(); break;
        case 9: _t->renameColumn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParaTableWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParaTableWidget::lockGraphFocus)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelfDefObj::ParaTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_SelfDefObj__ParaTableWidget.data,
    qt_meta_data_SelfDefObj__ParaTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelfDefObj::ParaTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelfDefObj::ParaTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelfDefObj__ParaTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int SelfDefObj::ParaTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SelfDefObj::ParaTableWidget::lockGraphFocus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
