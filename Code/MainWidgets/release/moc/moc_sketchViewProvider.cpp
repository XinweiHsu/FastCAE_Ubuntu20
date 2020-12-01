/****************************************************************************
** Meta object code from reading C++ file 'sketchViewProvider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../sketchViewProvider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sketchViewProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__SketchViewProvider_t {
    QByteArrayData data[21];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__SketchViewProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__SketchViewProvider_t qt_meta_stringdata_MainWidget__SketchViewProvider = {
    {
QT_MOC_LITERAL(0, 0, 30), // "MainWidget::SketchViewProvider"
QT_MOC_LITERAL(1, 31, 10), // "showSketch"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "TopoDS_Shape*"
QT_MOC_LITERAL(4, 57, 10), // "hideSketch"
QT_MOC_LITERAL(5, 68, 11), // "showMessage"
QT_MOC_LITERAL(6, 80, 10), // "showDialog"
QT_MOC_LITERAL(7, 91, 8), // "QDialog*"
QT_MOC_LITERAL(8, 100, 14), // "onMouseRelease"
QT_MOC_LITERAL(9, 115, 7), // "double*"
QT_MOC_LITERAL(10, 123, 2), // "pt"
QT_MOC_LITERAL(11, 126, 11), // "onMouseMove"
QT_MOC_LITERAL(12, 138, 19), // "onRightMoustRelease"
QT_MOC_LITERAL(13, 158, 15), // "onMiddleMouseUp"
QT_MOC_LITERAL(14, 174, 14), // "showSketchSlot"
QT_MOC_LITERAL(15, 189, 5), // "shape"
QT_MOC_LITERAL(16, 195, 16), // "removeSketchSlot"
QT_MOC_LITERAL(17, 212, 18), // "removeSketchActors"
QT_MOC_LITERAL(18, 231, 9), // "pointTo2D"
QT_MOC_LITERAL(19, 241, 7), // "gp_Pnt*"
QT_MOC_LITERAL(20, 249, 1) // "p"

    },
    "MainWidget::SketchViewProvider\0"
    "showSketch\0\0TopoDS_Shape*\0hideSketch\0"
    "showMessage\0showDialog\0QDialog*\0"
    "onMouseRelease\0double*\0pt\0onMouseMove\0"
    "onRightMoustRelease\0onMiddleMouseUp\0"
    "showSketchSlot\0shape\0removeSketchSlot\0"
    "removeSketchActors\0pointTo2D\0gp_Pnt*\0"
    "p"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__SketchViewProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    1,   80,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   86,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   15,
    QMetaType::Void, 0x80000000 | 3,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void MainWidget::SketchViewProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SketchViewProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showSketch((*reinterpret_cast< TopoDS_Shape*(*)>(_a[1]))); break;
        case 1: _t->hideSketch((*reinterpret_cast< TopoDS_Shape*(*)>(_a[1]))); break;
        case 2: _t->showMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->showDialog((*reinterpret_cast< QDialog*(*)>(_a[1]))); break;
        case 4: _t->onMouseRelease((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 5: _t->onMouseMove((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 6: _t->onRightMoustRelease(); break;
        case 7: _t->onMiddleMouseUp(); break;
        case 8: _t->showSketchSlot((*reinterpret_cast< TopoDS_Shape*(*)>(_a[1]))); break;
        case 9: _t->removeSketchSlot((*reinterpret_cast< TopoDS_Shape*(*)>(_a[1]))); break;
        case 10: _t->removeSketchActors(); break;
        case 11: _t->pointTo2D((*reinterpret_cast< gp_Pnt*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SketchViewProvider::*)(TopoDS_Shape * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SketchViewProvider::showSketch)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SketchViewProvider::*)(TopoDS_Shape * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SketchViewProvider::hideSketch)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SketchViewProvider::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SketchViewProvider::showMessage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SketchViewProvider::*)(QDialog * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SketchViewProvider::showDialog)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::SketchViewProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__SketchViewProvider.data,
    qt_meta_data_MainWidget__SketchViewProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::SketchViewProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::SketchViewProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__SketchViewProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainWidget::SketchViewProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::SketchViewProvider::showSketch(TopoDS_Shape * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWidget::SketchViewProvider::hideSketch(TopoDS_Shape * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWidget::SketchViewProvider::showMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWidget::SketchViewProvider::showDialog(QDialog * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
