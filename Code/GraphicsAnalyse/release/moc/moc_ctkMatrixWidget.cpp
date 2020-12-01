/****************************************************************************
** Meta object code from reading C++ file 'ctkMatrixWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Widgets/ctkMatrixWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkMatrixWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkMatrixWidget_t {
    QByteArrayData data[21];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkMatrixWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkMatrixWidget_t qt_meta_stringdata_ctkMatrixWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkMatrixWidget"
QT_MOC_LITERAL(1, 16, 13), // "matrixChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "decimalsChanged"
QT_MOC_LITERAL(4, 47, 8), // "identity"
QT_MOC_LITERAL(5, 56, 11), // "setDecimals"
QT_MOC_LITERAL(6, 68, 8), // "decimals"
QT_MOC_LITERAL(7, 77, 5), // "value"
QT_MOC_LITERAL(8, 83, 1), // "i"
QT_MOC_LITERAL(9, 85, 1), // "j"
QT_MOC_LITERAL(10, 87, 8), // "setValue"
QT_MOC_LITERAL(11, 96, 11), // "columnCount"
QT_MOC_LITERAL(12, 108, 8), // "rowCount"
QT_MOC_LITERAL(13, 117, 8), // "editable"
QT_MOC_LITERAL(14, 126, 7), // "minimum"
QT_MOC_LITERAL(15, 134, 7), // "maximum"
QT_MOC_LITERAL(16, 142, 14), // "decimalsOption"
QT_MOC_LITERAL(17, 157, 33), // "ctkDoubleSpinBox::DecimalsOpt..."
QT_MOC_LITERAL(18, 191, 10), // "singleStep"
QT_MOC_LITERAL(19, 202, 6), // "values"
QT_MOC_LITERAL(20, 209, 15) // "QVector<double>"

    },
    "ctkMatrixWidget\0matrixChanged\0\0"
    "decimalsChanged\0identity\0setDecimals\0"
    "decimals\0value\0i\0j\0setValue\0columnCount\0"
    "rowCount\0editable\0minimum\0maximum\0"
    "decimalsOption\0ctkDoubleSpinBox::DecimalsOptions\0"
    "singleStep\0values\0QVector<double>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkMatrixWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       9,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   48,    2, 0x0a /* Public */,
       5,    1,   49,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   52,    2, 0x02 /* Public */,
      10,    3,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // methods: parameters
    QMetaType::Double, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    8,    9,    7,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::Double, 0x00095103,
      15, QMetaType::Double, 0x00095103,
       6, QMetaType::Int, 0x00495103,
      16, 0x80000000 | 17, 0x0009510b,
      18, QMetaType::Double, 0x00095103,
      19, 0x80000000 | 20, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,

       0        // eod
};

void ctkMatrixWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkMatrixWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->matrixChanged(); break;
        case 1: _t->decimalsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->identity(); break;
        case 3: _t->setDecimals((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { double _r = _t->value((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkMatrixWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMatrixWidget::matrixChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkMatrixWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMatrixWidget::decimalsChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkMatrixWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEditable(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 6: *reinterpret_cast< ctkDoubleSpinBox::DecimalsOptions*>(_v) = _t->decimalsOption(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 8: *reinterpret_cast< QVector<double>*>(_v) = _t->values(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkMatrixWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColumnCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRowCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setEditable(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setDecimalsOption(*reinterpret_cast< ctkDoubleSpinBox::DecimalsOptions*>(_v)); break;
        case 7: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setValues(*reinterpret_cast< QVector<double>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_ctkMatrixWidget[] = {
    QMetaObject::SuperData::link<ctkDoubleSpinBox::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ctkMatrixWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ctkMatrixWidget.data,
    qt_meta_data_ctkMatrixWidget,
    qt_static_metacall,
    qt_meta_extradata_ctkMatrixWidget,
    nullptr
} };


const QMetaObject *ctkMatrixWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkMatrixWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkMatrixWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkMatrixWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkMatrixWidget::matrixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ctkMatrixWidget::decimalsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
