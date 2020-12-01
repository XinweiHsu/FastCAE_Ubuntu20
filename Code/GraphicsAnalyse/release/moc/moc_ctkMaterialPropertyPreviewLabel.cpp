/****************************************************************************
** Meta object code from reading C++ file 'ctkMaterialPropertyPreviewLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Widgets/ctkMaterialPropertyPreviewLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkMaterialPropertyPreviewLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkMaterialPropertyPreviewLabel_t {
    QByteArrayData data[23];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkMaterialPropertyPreviewLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkMaterialPropertyPreviewLabel_t qt_meta_stringdata_ctkMaterialPropertyPreviewLabel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "ctkMaterialPropertyPreviewLabel"
QT_MOC_LITERAL(1, 32, 10), // "setAmbient"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 9), // "newAbient"
QT_MOC_LITERAL(4, 54, 10), // "setDiffuse"
QT_MOC_LITERAL(5, 65, 10), // "newDiffuse"
QT_MOC_LITERAL(6, 76, 11), // "setSpecular"
QT_MOC_LITERAL(7, 88, 11), // "newSpecular"
QT_MOC_LITERAL(8, 100, 16), // "setSpecularPower"
QT_MOC_LITERAL(9, 117, 16), // "newSpecularPower"
QT_MOC_LITERAL(10, 134, 8), // "setColor"
QT_MOC_LITERAL(11, 143, 8), // "newColor"
QT_MOC_LITERAL(12, 152, 10), // "setOpacity"
QT_MOC_LITERAL(13, 163, 10), // "newOpacity"
QT_MOC_LITERAL(14, 174, 14), // "setGridOpacity"
QT_MOC_LITERAL(15, 189, 14), // "newGridOpacity"
QT_MOC_LITERAL(16, 204, 7), // "ambient"
QT_MOC_LITERAL(17, 212, 7), // "diffuse"
QT_MOC_LITERAL(18, 220, 8), // "specular"
QT_MOC_LITERAL(19, 229, 13), // "specularPower"
QT_MOC_LITERAL(20, 243, 5), // "color"
QT_MOC_LITERAL(21, 249, 7), // "opacity"
QT_MOC_LITERAL(22, 257, 11) // "gridOpacity"

    },
    "ctkMaterialPropertyPreviewLabel\0"
    "setAmbient\0\0newAbient\0setDiffuse\0"
    "newDiffuse\0setSpecular\0newSpecular\0"
    "setSpecularPower\0newSpecularPower\0"
    "setColor\0newColor\0setOpacity\0newOpacity\0"
    "setGridOpacity\0newGridOpacity\0ambient\0"
    "diffuse\0specular\0specularPower\0color\0"
    "opacity\0gridOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkMaterialPropertyPreviewLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      14,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,

 // properties: name, type, flags
      16, QMetaType::Double, 0x00095103,
      17, QMetaType::Double, 0x00095103,
      18, QMetaType::Double, 0x00095103,
      19, QMetaType::Double, 0x00095103,
      20, QMetaType::QColor, 0x00095103,
      21, QMetaType::Double, 0x00095103,
      22, QMetaType::Double, 0x00095103,

       0        // eod
};

void ctkMaterialPropertyPreviewLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkMaterialPropertyPreviewLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAmbient((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setDiffuse((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setSpecular((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setSpecularPower((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->setOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setGridOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkMaterialPropertyPreviewLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->ambient(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->diffuse(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->specular(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->specularPower(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->opacity(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->gridOpacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkMaterialPropertyPreviewLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAmbient(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setDiffuse(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setSpecular(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setSpecularPower(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setOpacity(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setGridOpacity(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkMaterialPropertyPreviewLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_ctkMaterialPropertyPreviewLabel.data,
    qt_meta_data_ctkMaterialPropertyPreviewLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkMaterialPropertyPreviewLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkMaterialPropertyPreviewLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkMaterialPropertyPreviewLabel.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ctkMaterialPropertyPreviewLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
