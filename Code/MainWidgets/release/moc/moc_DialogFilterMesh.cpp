/****************************************************************************
** Meta object code from reading C++ file 'DialogFilterMesh.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DialogFilterMesh.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogFilterMesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__FilterMeshDialog_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__FilterMeshDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__FilterMeshDialog_t qt_meta_stringdata_MainWidget__FilterMeshDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "MainWidget::FilterMeshDialog"
QT_MOC_LITERAL(1, 29, 14), // "updateMeshTree"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "updateSetTree"
QT_MOC_LITERAL(4, 59, 13), // "updateActions"
QT_MOC_LITERAL(5, 73, 15) // "updateMeshActor"

    },
    "MainWidget::FilterMeshDialog\0"
    "updateMeshTree\0\0updateSetTree\0"
    "updateActions\0updateMeshActor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__FilterMeshDialog[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWidget::FilterMeshDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterMeshDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMeshTree(); break;
        case 1: _t->updateSetTree(); break;
        case 2: _t->updateActions(); break;
        case 3: _t->updateMeshActor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterMeshDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterMeshDialog::updateMeshTree)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilterMeshDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterMeshDialog::updateSetTree)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FilterMeshDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterMeshDialog::updateActions)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FilterMeshDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterMeshDialog::updateMeshActor)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::FilterMeshDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__FilterMeshDialog.data,
    qt_meta_data_MainWidget__FilterMeshDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::FilterMeshDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::FilterMeshDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__FilterMeshDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MainWidget::FilterMeshDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void MainWidget::FilterMeshDialog::updateMeshTree()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWidget::FilterMeshDialog::updateSetTree()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWidget::FilterMeshDialog::updateActions()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWidget::FilterMeshDialog::updateMeshActor()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
