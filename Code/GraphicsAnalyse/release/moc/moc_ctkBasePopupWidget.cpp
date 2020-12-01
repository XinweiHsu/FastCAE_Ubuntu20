/****************************************************************************
** Meta object code from reading C++ file 'ctkBasePopupWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Widgets/ctkBasePopupWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkBasePopupWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkBasePopupWidget_t {
    QByteArrayData data[34];
    char stringdata0[493];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkBasePopupWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkBasePopupWidget_t qt_meta_stringdata_ctkBasePopupWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ctkBasePopupWidget"
QT_MOC_LITERAL(1, 19, 11), // "popupOpened"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "open"
QT_MOC_LITERAL(4, 37, 9), // "hidePopup"
QT_MOC_LITERAL(5, 47, 9), // "showPopup"
QT_MOC_LITERAL(6, 57, 4), // "show"
QT_MOC_LITERAL(7, 62, 16), // "onEffectFinished"
QT_MOC_LITERAL(8, 79, 14), // "setEffectAlpha"
QT_MOC_LITERAL(9, 94, 5), // "alpha"
QT_MOC_LITERAL(10, 100, 17), // "setEffectGeometry"
QT_MOC_LITERAL(11, 118, 8), // "geometry"
QT_MOC_LITERAL(12, 127, 21), // "onBaseWidgetDestroyed"
QT_MOC_LITERAL(13, 149, 15), // "animationEffect"
QT_MOC_LITERAL(14, 165, 15), // "AnimationEffect"
QT_MOC_LITERAL(15, 181, 14), // "effectDuration"
QT_MOC_LITERAL(16, 196, 11), // "easingCurve"
QT_MOC_LITERAL(17, 208, 18), // "QEasingCurve::Type"
QT_MOC_LITERAL(18, 227, 9), // "alignment"
QT_MOC_LITERAL(19, 237, 13), // "Qt::Alignment"
QT_MOC_LITERAL(20, 251, 11), // "orientation"
QT_MOC_LITERAL(21, 263, 16), // "Qt::Orientations"
QT_MOC_LITERAL(22, 280, 17), // "verticalDirection"
QT_MOC_LITERAL(23, 298, 37), // "ctkBasePopupWidget::VerticalD..."
QT_MOC_LITERAL(24, 336, 19), // "horizontalDirection"
QT_MOC_LITERAL(25, 356, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(26, 376, 11), // "effectAlpha"
QT_MOC_LITERAL(27, 388, 14), // "effectGeometry"
QT_MOC_LITERAL(28, 403, 23), // "WindowOpacityFadeEffect"
QT_MOC_LITERAL(29, 427, 12), // "ScrollEffect"
QT_MOC_LITERAL(30, 440, 10), // "FadeEffect"
QT_MOC_LITERAL(31, 451, 17), // "VerticalDirection"
QT_MOC_LITERAL(32, 469, 11), // "TopToBottom"
QT_MOC_LITERAL(33, 481, 11) // "BottomToTop"

    },
    "ctkBasePopupWidget\0popupOpened\0\0open\0"
    "hidePopup\0showPopup\0show\0onEffectFinished\0"
    "setEffectAlpha\0alpha\0setEffectGeometry\0"
    "geometry\0onBaseWidgetDestroyed\0"
    "animationEffect\0AnimationEffect\0"
    "effectDuration\0easingCurve\0"
    "QEasingCurve::Type\0alignment\0Qt::Alignment\0"
    "orientation\0Qt::Orientations\0"
    "verticalDirection\0"
    "ctkBasePopupWidget::VerticalDirection\0"
    "horizontalDirection\0Qt::LayoutDirection\0"
    "effectAlpha\0effectGeometry\0"
    "WindowOpacityFadeEffect\0ScrollEffect\0"
    "FadeEffect\0VerticalDirection\0TopToBottom\0"
    "BottomToTop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkBasePopupWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       9,   70, // properties
       2,   97, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       5,    1,   59,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x09 /* Protected */,
       8,    1,   63,    2, 0x09 /* Protected */,
      10,    1,   66,    2, 0x09 /* Protected */,
      12,    0,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::QRect,   11,
    QMetaType::Void,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0009510b,
      15, QMetaType::Int, 0x00095103,
      16, 0x80000000 | 17, 0x0009510b,
      18, 0x80000000 | 19, 0x0009510b,
      20, 0x80000000 | 21, 0x0009510b,
      22, 0x80000000 | 23, 0x0009510b,
      24, 0x80000000 | 25, 0x0009510b,
      26, QMetaType::Double, 0x00094103,
      27, QMetaType::QRect, 0x00094103,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,    3,  107,
      31,   31, 0x0,    2,  113,

 // enum data: key, value
      28, uint(ctkBasePopupWidget::WindowOpacityFadeEffect),
      29, uint(ctkBasePopupWidget::ScrollEffect),
      30, uint(ctkBasePopupWidget::FadeEffect),
      32, uint(ctkBasePopupWidget::TopToBottom),
      33, uint(ctkBasePopupWidget::BottomToTop),

       0        // eod
};

void ctkBasePopupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkBasePopupWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->popupOpened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->hidePopup(); break;
        case 2: _t->showPopup(); break;
        case 3: _t->showPopup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onEffectFinished(); break;
        case 5: _t->setEffectAlpha((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setEffectGeometry((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 7: _t->onBaseWidgetDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkBasePopupWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkBasePopupWidget::popupOpened)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ctkBasePopupWidget::VerticalDirection >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkBasePopupWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AnimationEffect*>(_v) = _t->animationEffect(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->effectDuration(); break;
        case 2: *reinterpret_cast< QEasingCurve::Type*>(_v) = _t->easingCurve(); break;
        case 3: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 4: *reinterpret_cast< Qt::Orientations*>(_v) = _t->orientation(); break;
        case 5: *reinterpret_cast< ctkBasePopupWidget::VerticalDirection*>(_v) = _t->verticalDirection(); break;
        case 6: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->horizontalDirection(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->effectAlpha(); break;
        case 8: *reinterpret_cast< QRect*>(_v) = _t->effectGeometry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkBasePopupWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimationEffect(*reinterpret_cast< AnimationEffect*>(_v)); break;
        case 1: _t->setEffectDuration(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setEasingCurve(*reinterpret_cast< QEasingCurve::Type*>(_v)); break;
        case 3: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 4: _t->setOrientation(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 5: _t->setVerticalDirection(*reinterpret_cast< ctkBasePopupWidget::VerticalDirection*>(_v)); break;
        case 6: _t->setHorizontalDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 7: _t->setEffectAlpha(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setEffectGeometry(*reinterpret_cast< QRect*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_ctkBasePopupWidget[] = {
    QMetaObject::SuperData::link<QEasingCurve::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ctkBasePopupWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ctkBasePopupWidget.data,
    qt_meta_data_ctkBasePopupWidget,
    qt_static_metacall,
    qt_meta_extradata_ctkBasePopupWidget,
    nullptr
} };


const QMetaObject *ctkBasePopupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkBasePopupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkBasePopupWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ctkBasePopupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void ctkBasePopupWidget::popupOpened(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
