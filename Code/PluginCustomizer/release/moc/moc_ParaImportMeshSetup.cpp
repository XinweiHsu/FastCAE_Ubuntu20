/****************************************************************************
** Meta object code from reading C++ file 'ParaImportMeshSetup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ParaImportMeshSetup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParaImportMeshSetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FastCAEDesigner__ParaImportMeshSetup_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FastCAEDesigner__ParaImportMeshSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FastCAEDesigner__ParaImportMeshSetup_t qt_meta_stringdata_FastCAEDesigner__ParaImportMeshSetup = {
    {
QT_MOC_LITERAL(0, 0, 36), // "FastCAEDesigner::ParaImportMe..."
QT_MOC_LITERAL(1, 37, 14), // "OnBtnOkClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 18), // "OnBtnCancelClicked"
QT_MOC_LITERAL(4, 72, 15), // "OnChkAllClicked"
QT_MOC_LITERAL(5, 88, 14) // "CancelCheckAll"

    },
    "FastCAEDesigner::ParaImportMeshSetup\0"
    "OnBtnOkClicked\0\0OnBtnCancelClicked\0"
    "OnChkAllClicked\0CancelCheckAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FastCAEDesigner__ParaImportMeshSetup[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FastCAEDesigner::ParaImportMeshSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParaImportMeshSetup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBtnOkClicked(); break;
        case 1: _t->OnBtnCancelClicked(); break;
        case 2: _t->OnChkAllClicked(); break;
        case 3: _t->CancelCheckAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FastCAEDesigner::ParaImportMeshSetup::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FastCAEDesigner__ParaImportMeshSetup.data,
    qt_meta_data_FastCAEDesigner__ParaImportMeshSetup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FastCAEDesigner::ParaImportMeshSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FastCAEDesigner::ParaImportMeshSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FastCAEDesigner__ParaImportMeshSetup.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FastCAEDesigner::ParaImportMeshSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
