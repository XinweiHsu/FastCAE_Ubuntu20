/****************************************************************************
** Meta object code from reading C++ file 'ctkVTKTextPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Visualization/VTK/Widgets/ctkVTKTextPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkVTKTextPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkVTKTextPropertyWidget_t {
    QByteArrayData data[33];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkVTKTextPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkVTKTextPropertyWidget_t qt_meta_stringdata_ctkVTKTextPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ctkVTKTextPropertyWidget"
QT_MOC_LITERAL(1, 25, 11), // "textChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "text"
QT_MOC_LITERAL(4, 43, 12), // "colorChanged"
QT_MOC_LITERAL(5, 56, 5), // "color"
QT_MOC_LITERAL(6, 62, 14), // "opacityChanged"
QT_MOC_LITERAL(7, 77, 7), // "opacity"
QT_MOC_LITERAL(8, 85, 17), // "fontFamilyChanged"
QT_MOC_LITERAL(9, 103, 4), // "font"
QT_MOC_LITERAL(10, 108, 11), // "boldChanged"
QT_MOC_LITERAL(11, 120, 6), // "enable"
QT_MOC_LITERAL(12, 127, 13), // "italicChanged"
QT_MOC_LITERAL(13, 141, 13), // "shadowChanged"
QT_MOC_LITERAL(14, 155, 11), // "sizeChanged"
QT_MOC_LITERAL(15, 167, 4), // "size"
QT_MOC_LITERAL(16, 172, 15), // "setTextProperty"
QT_MOC_LITERAL(17, 188, 16), // "vtkTextProperty*"
QT_MOC_LITERAL(18, 205, 12), // "textProperty"
QT_MOC_LITERAL(19, 218, 7), // "setText"
QT_MOC_LITERAL(20, 226, 12), // "setTextLabel"
QT_MOC_LITERAL(21, 239, 5), // "label"
QT_MOC_LITERAL(22, 245, 8), // "setColor"
QT_MOC_LITERAL(23, 254, 10), // "setOpacity"
QT_MOC_LITERAL(24, 265, 7), // "setFont"
QT_MOC_LITERAL(25, 273, 7), // "setBold"
QT_MOC_LITERAL(26, 281, 9), // "setItalic"
QT_MOC_LITERAL(27, 291, 9), // "setShadow"
QT_MOC_LITERAL(28, 301, 7), // "setSize"
QT_MOC_LITERAL(29, 309, 22), // "updateFromTextProperty"
QT_MOC_LITERAL(30, 332, 8), // "showText"
QT_MOC_LITERAL(31, 341, 9), // "textLabel"
QT_MOC_LITERAL(32, 351, 8) // "showSize"

    },
    "ctkVTKTextPropertyWidget\0textChanged\0"
    "\0text\0colorChanged\0color\0opacityChanged\0"
    "opacity\0fontFamilyChanged\0font\0"
    "boldChanged\0enable\0italicChanged\0"
    "shadowChanged\0sizeChanged\0size\0"
    "setTextProperty\0vtkTextProperty*\0"
    "textProperty\0setText\0setTextLabel\0"
    "label\0setColor\0setOpacity\0setFont\0"
    "setBold\0setItalic\0setShadow\0setSize\0"
    "updateFromTextProperty\0showText\0"
    "textLabel\0showSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkVTKTextPropertyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       4,  164, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    1,  112,    2, 0x06 /* Public */,
       6,    1,  115,    2, 0x06 /* Public */,
       8,    1,  118,    2, 0x06 /* Public */,
      10,    1,  121,    2, 0x06 /* Public */,
      12,    1,  124,    2, 0x06 /* Public */,
      13,    1,  127,    2, 0x06 /* Public */,
      14,    1,  130,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  133,    2, 0x0a /* Public */,
      19,    1,  136,    2, 0x0a /* Public */,
      20,    1,  139,    2, 0x0a /* Public */,
      22,    1,  142,    2, 0x0a /* Public */,
      23,    1,  145,    2, 0x0a /* Public */,
      24,    1,  148,    2, 0x0a /* Public */,
      25,    1,  151,    2, 0x0a /* Public */,
      26,    1,  154,    2, 0x0a /* Public */,
      27,    1,  157,    2, 0x0a /* Public */,
      28,    1,  160,    2, 0x0a /* Public */,
      29,    0,  163,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Double,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,

 // properties: name, type, flags
      30, QMetaType::Bool, 0x00095003,
       3, QMetaType::QString, 0x00095103,
      31, QMetaType::QString, 0x00095103,
      32, QMetaType::Bool, 0x00095003,

       0        // eod
};

void ctkVTKTextPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkVTKTextPropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->fontFamilyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->boldChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->italicChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->shadowChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setTextProperty((*reinterpret_cast< vtkTextProperty*(*)>(_a[1]))); break;
        case 9: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setTextLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->setOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->setFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setShadow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->updateFromTextProperty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkVTKTextPropertyWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKTextPropertyWidget::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkVTKTextPropertyWidget::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKTextPropertyWidget::colorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ctkVTKTextPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKTextPropertyWidget::opacityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ctkVTKTextPropertyWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKTextPropertyWidget::fontFamilyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ctkVTKTextPropertyWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKTextPropertyWidget::boldChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ctkVTKTextPropertyWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKTextPropertyWidget::italicChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ctkVTKTextPropertyWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKTextPropertyWidget::shadowChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ctkVTKTextPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKTextPropertyWidget::sizeChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkVTKTextPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTextVisible(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->textLabel(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isSizeVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkVTKTextPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTextVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setTextLabel(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSizeVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkVTKTextPropertyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ctkVTKTextPropertyWidget.data,
    qt_meta_data_ctkVTKTextPropertyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkVTKTextPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkVTKTextPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkVTKTextPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkVTKTextPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
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
void ctkVTKTextPropertyWidget::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkVTKTextPropertyWidget::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkVTKTextPropertyWidget::opacityChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkVTKTextPropertyWidget::fontFamilyChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkVTKTextPropertyWidget::boldChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ctkVTKTextPropertyWidget::italicChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ctkVTKTextPropertyWidget::shadowChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ctkVTKTextPropertyWidget::sizeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
