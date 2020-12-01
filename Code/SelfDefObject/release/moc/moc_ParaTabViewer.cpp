/****************************************************************************
** Meta object code from reading C++ file 'ParaTabViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ParaTabViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParaTabViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelfDefObj__ParaTabViewer_t {
    QByteArrayData data[7];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelfDefObj__ParaTabViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelfDefObj__ParaTabViewer_t qt_meta_stringdata_SelfDefObj__ParaTabViewer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "SelfDefObj::ParaTabViewer"
QT_MOC_LITERAL(1, 26, 23), // "on_out_OKButton_clicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 26), // "on_out_applyButton_clicked"
QT_MOC_LITERAL(4, 78, 27), // "on_out_cancelButton_clicked"
QT_MOC_LITERAL(5, 106, 27), // "on_out_importButton_clicked"
QT_MOC_LITERAL(6, 134, 27) // "on_out_exportButton_clicked"

    },
    "SelfDefObj::ParaTabViewer\0"
    "on_out_OKButton_clicked\0\0"
    "on_out_applyButton_clicked\0"
    "on_out_cancelButton_clicked\0"
    "on_out_importButton_clicked\0"
    "on_out_exportButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelfDefObj__ParaTabViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelfDefObj::ParaTabViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParaTabViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_out_OKButton_clicked(); break;
        case 1: _t->on_out_applyButton_clicked(); break;
        case 2: _t->on_out_cancelButton_clicked(); break;
        case 3: _t->on_out_importButton_clicked(); break;
        case 4: _t->on_out_exportButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SelfDefObj::ParaTabViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QFDialog::staticMetaObject>(),
    qt_meta_stringdata_SelfDefObj__ParaTabViewer.data,
    qt_meta_data_SelfDefObj__ParaTabViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelfDefObj::ParaTabViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelfDefObj::ParaTabViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelfDefObj__ParaTabViewer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SelfDefParaWidgetBase"))
        return static_cast< SelfDefParaWidgetBase*>(this);
    return QFDialog::qt_metacast(_clname);
}

int SelfDefObj::ParaTabViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
