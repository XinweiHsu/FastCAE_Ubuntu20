/****************************************************************************
** Meta object code from reading C++ file 'EditorBoundaryModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../EditorBoundaryModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorBoundaryModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FastCAEDesigner__EditorBoundaryModel_t {
    QByteArrayData data[8];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FastCAEDesigner__EditorBoundaryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FastCAEDesigner__EditorBoundaryModel_t qt_meta_stringdata_FastCAEDesigner__EditorBoundaryModel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "FastCAEDesigner::EditorBounda..."
QT_MOC_LITERAL(1, 37, 14), // "OnBtnOkClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 27), // "OnChkCommonConditionClicked"
QT_MOC_LITERAL(4, 81, 1), // "b"
QT_MOC_LITERAL(5, 83, 26), // "OnChkCommonBoundaryClicked"
QT_MOC_LITERAL(6, 110, 26), // "OnCheckboxGroupItemClicked"
QT_MOC_LITERAL(7, 137, 5) // "index"

    },
    "FastCAEDesigner::EditorBoundaryModel\0"
    "OnBtnOkClicked\0\0OnChkCommonConditionClicked\0"
    "b\0OnChkCommonBoundaryClicked\0"
    "OnCheckboxGroupItemClicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FastCAEDesigner__EditorBoundaryModel[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void FastCAEDesigner::EditorBoundaryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorBoundaryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBtnOkClicked(); break;
        case 1: _t->OnChkCommonConditionClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->OnChkCommonBoundaryClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnCheckboxGroupItemClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FastCAEDesigner::EditorBoundaryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FastCAEDesigner__EditorBoundaryModel.data,
    qt_meta_data_FastCAEDesigner__EditorBoundaryModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FastCAEDesigner::EditorBoundaryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FastCAEDesigner::EditorBoundaryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FastCAEDesigner__EditorBoundaryModel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FastCAEDesigner::EditorBoundaryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
