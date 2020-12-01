/****************************************************************************
** Meta object code from reading C++ file 'smoothfilterpropform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../smoothfilterpropform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smoothfilterpropform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_smoothFilterPropForm_t {
    QByteArrayData data[8];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smoothFilterPropForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smoothFilterPropForm_t qt_meta_stringdata_smoothFilterPropForm = {
    {
QT_MOC_LITERAL(0, 0, 20), // "smoothFilterPropForm"
QT_MOC_LITERAL(1, 21, 19), // "sig_enable_applyBtn"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 28), // "on_coef_spinBox_valueChanged"
QT_MOC_LITERAL(4, 71, 4), // "arg1"
QT_MOC_LITERAL(5, 76, 34), // "on_cellToPoint_radioButton_cl..."
QT_MOC_LITERAL(6, 111, 7), // "checked"
QT_MOC_LITERAL(7, 119, 33) // "on_meshSmooth_radioButton_cli..."

    },
    "smoothFilterPropForm\0sig_enable_applyBtn\0"
    "\0on_coef_spinBox_valueChanged\0arg1\0"
    "on_cellToPoint_radioButton_clicked\0"
    "checked\0on_meshSmooth_radioButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smoothFilterPropForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void smoothFilterPropForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<smoothFilterPropForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_enable_applyBtn(); break;
        case 1: _t->on_coef_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_cellToPoint_radioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_meshSmooth_radioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (smoothFilterPropForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&smoothFilterPropForm::sig_enable_applyBtn)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject smoothFilterPropForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_smoothFilterPropForm.data,
    qt_meta_data_smoothFilterPropForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *smoothFilterPropForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smoothFilterPropForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smoothFilterPropForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int smoothFilterPropForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void smoothFilterPropForm::sig_enable_applyBtn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
