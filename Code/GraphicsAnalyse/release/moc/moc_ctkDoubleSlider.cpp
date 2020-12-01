/****************************************************************************
** Meta object code from reading C++ file 'ctkDoubleSlider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Widgets/ctkDoubleSlider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDoubleSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkDoubleSlider_t {
    QByteArrayData data[32];
    char stringdata0[412];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDoubleSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDoubleSlider_t qt_meta_stringdata_ctkDoubleSlider = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkDoubleSlider"
QT_MOC_LITERAL(1, 16, 12), // "valueChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 11), // "sliderMoved"
QT_MOC_LITERAL(5, 48, 8), // "position"
QT_MOC_LITERAL(6, 57, 13), // "sliderPressed"
QT_MOC_LITERAL(7, 71, 14), // "sliderReleased"
QT_MOC_LITERAL(8, 86, 12), // "rangeChanged"
QT_MOC_LITERAL(9, 99, 3), // "min"
QT_MOC_LITERAL(10, 103, 3), // "max"
QT_MOC_LITERAL(11, 107, 8), // "setValue"
QT_MOC_LITERAL(12, 116, 14), // "setOrientation"
QT_MOC_LITERAL(13, 131, 15), // "Qt::Orientation"
QT_MOC_LITERAL(14, 147, 11), // "orientation"
QT_MOC_LITERAL(15, 159, 14), // "onValueChanged"
QT_MOC_LITERAL(16, 174, 13), // "onSliderMoved"
QT_MOC_LITERAL(17, 188, 14), // "onRangeChanged"
QT_MOC_LITERAL(18, 203, 29), // "onValueProxyAboutToBeModified"
QT_MOC_LITERAL(19, 233, 20), // "onValueProxyModified"
QT_MOC_LITERAL(20, 254, 14), // "sliderPosition"
QT_MOC_LITERAL(21, 269, 10), // "singleStep"
QT_MOC_LITERAL(22, 280, 8), // "pageStep"
QT_MOC_LITERAL(23, 289, 7), // "minimum"
QT_MOC_LITERAL(24, 297, 7), // "maximum"
QT_MOC_LITERAL(25, 305, 12), // "tickInterval"
QT_MOC_LITERAL(26, 318, 12), // "tickPosition"
QT_MOC_LITERAL(27, 331, 21), // "QSlider::TickPosition"
QT_MOC_LITERAL(28, 353, 8), // "tracking"
QT_MOC_LITERAL(29, 362, 13), // "handleToolTip"
QT_MOC_LITERAL(30, 376, 18), // "invertedAppearance"
QT_MOC_LITERAL(31, 395, 16) // "invertedControls"

    },
    "ctkDoubleSlider\0valueChanged\0\0value\0"
    "sliderMoved\0position\0sliderPressed\0"
    "sliderReleased\0rangeChanged\0min\0max\0"
    "setValue\0setOrientation\0Qt::Orientation\0"
    "orientation\0onValueChanged\0onSliderMoved\0"
    "onRangeChanged\0onValueProxyAboutToBeModified\0"
    "onValueProxyModified\0sliderPosition\0"
    "singleStep\0pageStep\0minimum\0maximum\0"
    "tickInterval\0tickPosition\0"
    "QSlider::TickPosition\0tracking\0"
    "handleToolTip\0invertedAppearance\0"
    "invertedControls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDoubleSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      13,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,
       8,    2,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   87,    2, 0x0a /* Public */,
      12,    1,   90,    2, 0x0a /* Public */,
      15,    1,   93,    2, 0x09 /* Protected */,
      16,    1,   96,    2, 0x09 /* Protected */,
      17,    2,   99,    2, 0x09 /* Protected */,
      18,    0,  104,    2, 0x09 /* Protected */,
      19,    0,  105,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00595103,
      20, QMetaType::Double, 0x00095103,
      21, QMetaType::Double, 0x00095103,
      22, QMetaType::Double, 0x00095103,
      23, QMetaType::Double, 0x00095103,
      24, QMetaType::Double, 0x00095103,
      25, QMetaType::Double, 0x00095103,
      26, 0x80000000 | 27, 0x0009510b,
      28, QMetaType::Bool, 0x00095103,
      14, 0x80000000 | 13, 0x0009510b,
      29, QMetaType::QString, 0x00095103,
      30, QMetaType::Bool, 0x00095103,
      31, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void ctkDoubleSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkDoubleSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sliderMoved((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->sliderPressed(); break;
        case 3: _t->sliderReleased(); break;
        case 4: _t->rangeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 7: _t->onValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->onValueProxyAboutToBeModified(); break;
        case 11: _t->onValueProxyModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkDoubleSlider::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkDoubleSlider::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkDoubleSlider::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkDoubleSlider::sliderMoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ctkDoubleSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkDoubleSlider::sliderPressed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ctkDoubleSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkDoubleSlider::sliderReleased)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ctkDoubleSlider::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkDoubleSlider::rangeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkDoubleSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->sliderPosition(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->pageStep(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->tickInterval(); break;
        case 7: *reinterpret_cast< QSlider::TickPosition*>(_v) = _t->tickPosition(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->hasTracking(); break;
        case 9: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->handleToolTip(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->invertedAppearance(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->invertedControls(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkDoubleSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setSliderPosition(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setPageStep(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setTickInterval(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setTickPosition(*reinterpret_cast< QSlider::TickPosition*>(_v)); break;
        case 8: _t->setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 10: _t->setHandleToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setInvertedAppearance(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setInvertedControls(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_ctkDoubleSlider[] = {
    QMetaObject::SuperData::link<QSlider::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ctkDoubleSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ctkDoubleSlider.data,
    qt_meta_data_ctkDoubleSlider,
    qt_static_metacall,
    qt_meta_extradata_ctkDoubleSlider,
    nullptr
} };


const QMetaObject *ctkDoubleSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDoubleSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDoubleSlider.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkDoubleSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDoubleSlider::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDoubleSlider::sliderMoved(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkDoubleSlider::sliderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ctkDoubleSlider::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ctkDoubleSlider::rangeChanged(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
