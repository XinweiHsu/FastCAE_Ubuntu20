/****************************************************************************
** Meta object code from reading C++ file 'vectorfilterpropform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../vectorfilterpropform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vectorfilterpropform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vectorFilterPropForm_t {
    QByteArrayData data[14];
    char stringdata0[384];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vectorFilterPropForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vectorFilterPropForm_t qt_meta_stringdata_vectorFilterPropForm = {
    {
QT_MOC_LITERAL(0, 0, 20), // "vectorFilterPropForm"
QT_MOC_LITERAL(1, 21, 19), // "sig_enable_applyBtn"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 41), // "on_glyphType_comboBox_current..."
QT_MOC_LITERAL(4, 84, 5), // "index"
QT_MOC_LITERAL(5, 90, 38), // "on_scalar_comboBox_currentInd..."
QT_MOC_LITERAL(6, 129, 38), // "on_vector_comboBox_currentInd..."
QT_MOC_LITERAL(7, 168, 33), // "on_numPoints_spinBox_valueCha..."
QT_MOC_LITERAL(8, 202, 4), // "arg1"
QT_MOC_LITERAL(9, 207, 30), // "on_tipRes_spinBox_valueChanged"
QT_MOC_LITERAL(10, 238, 36), // "on_tipRad_doubleSpinBox_value..."
QT_MOC_LITERAL(11, 275, 36), // "on_tipLen_doubleSpinBox_value..."
QT_MOC_LITERAL(12, 312, 32), // "on_shaftRes_spinBox_valueChanged"
QT_MOC_LITERAL(13, 345, 38) // "on_shaftRad_doubleSpinBox_val..."

    },
    "vectorFilterPropForm\0sig_enable_applyBtn\0"
    "\0on_glyphType_comboBox_currentIndexChanged\0"
    "index\0on_scalar_comboBox_currentIndexChanged\0"
    "on_vector_comboBox_currentIndexChanged\0"
    "on_numPoints_spinBox_valueChanged\0"
    "arg1\0on_tipRes_spinBox_valueChanged\0"
    "on_tipRad_doubleSpinBox_valueChanged\0"
    "on_tipLen_doubleSpinBox_valueChanged\0"
    "on_shaftRes_spinBox_valueChanged\0"
    "on_shaftRad_doubleSpinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vectorFilterPropForm[] = {

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
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      12,    1,   86,    2, 0x08 /* Private */,
      13,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

void vectorFilterPropForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vectorFilterPropForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_enable_applyBtn(); break;
        case 1: _t->on_glyphType_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_scalar_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_vector_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_numPoints_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_tipRes_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_tipRad_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_tipLen_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_shaftRes_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_shaftRad_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (vectorFilterPropForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&vectorFilterPropForm::sig_enable_applyBtn)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject vectorFilterPropForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_vectorFilterPropForm.data,
    qt_meta_data_vectorFilterPropForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vectorFilterPropForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vectorFilterPropForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vectorFilterPropForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int vectorFilterPropForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void vectorFilterPropForm::sig_enable_applyBtn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
