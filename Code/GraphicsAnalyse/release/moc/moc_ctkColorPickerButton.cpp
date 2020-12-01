/****************************************************************************
** Meta object code from reading C++ file 'ctkColorPickerButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Widgets/ctkColorPickerButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkColorPickerButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkColorPickerButton_t {
    QByteArrayData data[19];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkColorPickerButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkColorPickerButton_t qt_meta_stringdata_ctkColorPickerButton = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkColorPickerButton"
QT_MOC_LITERAL(1, 21, 12), // "colorChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "colorNameChanged"
QT_MOC_LITERAL(4, 52, 8), // "setColor"
QT_MOC_LITERAL(5, 61, 5), // "color"
QT_MOC_LITERAL(6, 67, 11), // "changeColor"
QT_MOC_LITERAL(7, 79, 19), // "setDisplayColorName"
QT_MOC_LITERAL(8, 99, 16), // "displayColorName"
QT_MOC_LITERAL(9, 116, 9), // "onToggled"
QT_MOC_LITERAL(10, 126, 6), // "change"
QT_MOC_LITERAL(11, 133, 9), // "colorName"
QT_MOC_LITERAL(12, 143, 13), // "dialogOptions"
QT_MOC_LITERAL(13, 157, 18), // "ColorDialogOptions"
QT_MOC_LITERAL(14, 176, 17), // "ColorDialogOption"
QT_MOC_LITERAL(15, 194, 16), // "ShowAlphaChannel"
QT_MOC_LITERAL(16, 211, 9), // "NoButtons"
QT_MOC_LITERAL(17, 221, 19), // "DontUseNativeDialog"
QT_MOC_LITERAL(18, 241, 17) // "UseCTKColorDialog"

    },
    "ctkColorPickerButton\0colorChanged\0\0"
    "colorNameChanged\0setColor\0color\0"
    "changeColor\0setDisplayColorName\0"
    "displayColorName\0onToggled\0change\0"
    "colorName\0dialogOptions\0ColorDialogOptions\0"
    "ColorDialogOption\0ShowAlphaChannel\0"
    "NoButtons\0DontUseNativeDialog\0"
    "UseCTKColorDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkColorPickerButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   66, // properties
       2,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   55,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x09 /* Protected */,
       9,    0,   65,    2, 0x29 /* Protected | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QColor, 0x00595103,
      11, QMetaType::QString, 0x00495103,
       8, QMetaType::Bool, 0x00095103,
      12, 0x80000000 | 13, 0x0009510b,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,

 // enums: name, alias, flags, count, data
      14,   14, 0x1,    4,   92,
      13,   14, 0x1,    4,  100,

 // enum data: key, value
      15, uint(ctkColorPickerButton::ShowAlphaChannel),
      16, uint(ctkColorPickerButton::NoButtons),
      17, uint(ctkColorPickerButton::DontUseNativeDialog),
      18, uint(ctkColorPickerButton::UseCTKColorDialog),
      15, uint(ctkColorPickerButton::ShowAlphaChannel),
      16, uint(ctkColorPickerButton::NoButtons),
      17, uint(ctkColorPickerButton::DontUseNativeDialog),
      18, uint(ctkColorPickerButton::UseCTKColorDialog),

       0        // eod
};

void ctkColorPickerButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkColorPickerButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->colorNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->changeColor(); break;
        case 4: _t->setDisplayColorName((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onToggled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkColorPickerButton::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkColorPickerButton::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkColorPickerButton::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkColorPickerButton::colorNameChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkColorPickerButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->colorName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->displayColorName(); break;
        case 3: *reinterpret_cast<int*>(_v) = QFlag(_t->dialogOptions()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkColorPickerButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setColorName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDisplayColorName(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDialogOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkColorPickerButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_ctkColorPickerButton.data,
    qt_meta_data_ctkColorPickerButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkColorPickerButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkColorPickerButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkColorPickerButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int ctkColorPickerButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkColorPickerButton::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkColorPickerButton::colorNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
