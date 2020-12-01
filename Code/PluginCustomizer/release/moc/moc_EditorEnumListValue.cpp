/****************************************************************************
** Meta object code from reading C++ file 'EditorEnumListValue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../EditorEnumListValue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorEnumListValue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FastCAEDesigner__EditorEnumListValue_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FastCAEDesigner__EditorEnumListValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FastCAEDesigner__EditorEnumListValue_t qt_meta_stringdata_FastCAEDesigner__EditorEnumListValue = {
    {
QT_MOC_LITERAL(0, 0, 36), // "FastCAEDesigner::EditorEnumLi..."
QT_MOC_LITERAL(1, 37, 14), // "OnBtnOkClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 15), // "OnBtnAddClicked"
QT_MOC_LITERAL(4, 69, 18), // "OnBtnInsertClicked"
QT_MOC_LITERAL(5, 88, 15), // "OnBtnDelClicked"
QT_MOC_LITERAL(6, 104, 20) // "OnBtnClearAllClicked"

    },
    "FastCAEDesigner::EditorEnumListValue\0"
    "OnBtnOkClicked\0\0OnBtnAddClicked\0"
    "OnBtnInsertClicked\0OnBtnDelClicked\0"
    "OnBtnClearAllClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FastCAEDesigner__EditorEnumListValue[] = {

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

void FastCAEDesigner::EditorEnumListValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorEnumListValue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBtnOkClicked(); break;
        case 1: _t->OnBtnAddClicked(); break;
        case 2: _t->OnBtnInsertClicked(); break;
        case 3: _t->OnBtnDelClicked(); break;
        case 4: _t->OnBtnClearAllClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FastCAEDesigner::EditorEnumListValue::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FastCAEDesigner__EditorEnumListValue.data,
    qt_meta_data_FastCAEDesigner__EditorEnumListValue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FastCAEDesigner::EditorEnumListValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FastCAEDesigner::EditorEnumListValue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FastCAEDesigner__EditorEnumListValue.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FastCAEDesigner::EditorEnumListValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
