/****************************************************************************
** Meta object code from reading C++ file 'curve_dropTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../curve_dropTreeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curve_dropTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurveDropTreeWidget_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurveDropTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurveDropTreeWidget_t qt_meta_stringdata_CurveDropTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CurveDropTreeWidget"
QT_MOC_LITERAL(1, 20, 7), // "changed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "const QMimeData*"
QT_MOC_LITERAL(4, 46, 8), // "mimeData"
QT_MOC_LITERAL(5, 55, 16), // "sig_add_dropItem"
QT_MOC_LITERAL(6, 72, 21) // "sig_mouse_rightButton"

    },
    "CurveDropTreeWidget\0changed\0\0"
    "const QMimeData*\0mimeData\0sig_add_dropItem\0"
    "sig_mouse_rightButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurveDropTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       1,    0,   37,    2, 0x26 /* Public | MethodCloned */,
       5,    1,   38,    2, 0x06 /* Public */,
       6,    0,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void CurveDropTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveDropTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< const QMimeData*(*)>(_a[1]))); break;
        case 1: _t->changed(); break;
        case 2: _t->sig_add_dropItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sig_mouse_rightButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CurveDropTreeWidget::*)(const QMimeData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveDropTreeWidget::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CurveDropTreeWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveDropTreeWidget::sig_add_dropItem)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CurveDropTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveDropTreeWidget::sig_mouse_rightButton)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CurveDropTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_CurveDropTreeWidget.data,
    qt_meta_data_CurveDropTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurveDropTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurveDropTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurveDropTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int CurveDropTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CurveDropTreeWidget::changed(const QMimeData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void CurveDropTreeWidget::sig_add_dropItem(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CurveDropTreeWidget::sig_mouse_rightButton()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
