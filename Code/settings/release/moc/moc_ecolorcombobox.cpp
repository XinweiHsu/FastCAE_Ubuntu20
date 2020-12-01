/****************************************************************************
** Meta object code from reading C++ file 'ecolorcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ecolorcombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ecolorcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EColorComboBox_t {
    QByteArrayData data[20];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EColorComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EColorComboBox_t qt_meta_stringdata_EColorComboBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EColorComboBox"
QT_MOC_LITERAL(1, 15, 9), // "activated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "color"
QT_MOC_LITERAL(4, 32, 11), // "highlighted"
QT_MOC_LITERAL(5, 44, 14), // "clearAllColors"
QT_MOC_LITERAL(6, 59, 11), // "appendColor"
QT_MOC_LITERAL(7, 71, 1), // "c"
QT_MOC_LITERAL(8, 73, 4), // "name"
QT_MOC_LITERAL(9, 78, 11), // "insertColor"
QT_MOC_LITERAL(10, 90, 5), // "index"
QT_MOC_LITERAL(11, 96, 22), // "appendPredefinedColors"
QT_MOC_LITERAL(12, 119, 22), // "appendBackgroundColors"
QT_MOC_LITERAL(13, 142, 16), // "updateOtherColor"
QT_MOC_LITERAL(14, 159, 17), // "enableColorDialog"
QT_MOC_LITERAL(15, 177, 7), // "enabled"
QT_MOC_LITERAL(16, 185, 15), // "setCurrentColor"
QT_MOC_LITERAL(17, 201, 18), // "emitActivatedColor"
QT_MOC_LITERAL(18, 220, 20), // "emitHighlightedColor"
QT_MOC_LITERAL(19, 241, 18) // "colorDialogEnabled"

    },
    "EColorComboBox\0activated\0\0color\0"
    "highlighted\0clearAllColors\0appendColor\0"
    "c\0name\0insertColor\0index\0"
    "appendPredefinedColors\0appendBackgroundColors\0"
    "updateOtherColor\0enableColorDialog\0"
    "enabled\0setCurrentColor\0emitActivatedColor\0"
    "emitHighlightedColor\0colorDialogEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EColorComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       1,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  100,    2, 0x0a /* Public */,
       6,    2,  101,    2, 0x0a /* Public */,
       6,    1,  106,    2, 0x2a /* Public | MethodCloned */,
       9,    3,  109,    2, 0x0a /* Public */,
       9,    2,  116,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  121,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  124,    2, 0x0a /* Public */,
      12,    0,  125,    2, 0x0a /* Public */,
      13,    1,  126,    2, 0x0a /* Public */,
      14,    1,  129,    2, 0x0a /* Public */,
      14,    0,  132,    2, 0x2a /* Public | MethodCloned */,
      16,    1,  133,    2, 0x0a /* Public */,
      17,    1,  136,    2, 0x08 /* Private */,
      18,    1,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString, QMetaType::Int,    7,    8,   10,
    QMetaType::Void, QMetaType::QColor, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

 // properties: name, type, flags
      19, QMetaType::Bool, 0x00095003,

       0        // eod
};

void EColorComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EColorComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->highlighted((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->clearAllColors(); break;
        case 3: _t->appendColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->appendColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->insertColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->insertColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->insertColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->appendPredefinedColors(); break;
        case 9: _t->appendBackgroundColors(); break;
        case 10: _t->updateOtherColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 11: _t->enableColorDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->enableColorDialog(); break;
        case 13: _t->setCurrentColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 14: _t->emitActivatedColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->emitHighlightedColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EColorComboBox::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EColorComboBox::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EColorComboBox::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EColorComboBox::highlighted)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EColorComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->colorDialogEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<EColorComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->enableColorDialog(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject EColorComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_EColorComboBox.data,
    qt_meta_data_EColorComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EColorComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EColorComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EColorComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int EColorComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EColorComboBox::activated(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EColorComboBox::highlighted(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
