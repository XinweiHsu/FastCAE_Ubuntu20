/****************************************************************************
** Meta object code from reading C++ file 'refelctionfilterpropform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../refelctionfilterpropform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'refelctionfilterpropform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_refelctionFilterPropForm_t {
    QByteArrayData data[7];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_refelctionFilterPropForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_refelctionFilterPropForm_t qt_meta_stringdata_refelctionFilterPropForm = {
    {
QT_MOC_LITERAL(0, 0, 24), // "refelctionFilterPropForm"
QT_MOC_LITERAL(1, 25, 19), // "sig_enable_applyBtn"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(4, 78, 5), // "index"
QT_MOC_LITERAL(5, 84, 29), // "on_copyInput_checkBox_clicked"
QT_MOC_LITERAL(6, 114, 7) // "checked"

    },
    "refelctionFilterPropForm\0sig_enable_applyBtn\0"
    "\0on_comboBox_currentIndexChanged\0index\0"
    "on_copyInput_checkBox_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_refelctionFilterPropForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void refelctionFilterPropForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<refelctionFilterPropForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_enable_applyBtn(); break;
        case 1: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_copyInput_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (refelctionFilterPropForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&refelctionFilterPropForm::sig_enable_applyBtn)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject refelctionFilterPropForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_refelctionFilterPropForm.data,
    qt_meta_data_refelctionFilterPropForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *refelctionFilterPropForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *refelctionFilterPropForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_refelctionFilterPropForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int refelctionFilterPropForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void refelctionFilterPropForm::sig_enable_applyBtn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
