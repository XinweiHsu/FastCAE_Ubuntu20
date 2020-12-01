/****************************************************************************
** Meta object code from reading C++ file 'dialogSketchPlane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dialogSketchPlane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogSketchPlane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeometryWidget__SketchPlanDialog_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeometryWidget__SketchPlanDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeometryWidget__SketchPlanDialog_t qt_meta_stringdata_GeometryWidget__SketchPlanDialog = {
    {
QT_MOC_LITERAL(0, 0, 32), // "GeometryWidget::SketchPlanDialog"
QT_MOC_LITERAL(1, 33, 11), // "startSketch"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "double*"
QT_MOC_LITERAL(4, 54, 17), // "selecPlaneClicked"
QT_MOC_LITERAL(5, 72, 27), // "on_geoSelectSurface_clicked"
QT_MOC_LITERAL(6, 100, 12), // "shapeSlected"
QT_MOC_LITERAL(7, 113, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(8, 136, 3), // "set"
QT_MOC_LITERAL(9, 140, 5) // "index"

    },
    "GeometryWidget::SketchPlanDialog\0"
    "startSketch\0\0double*\0selecPlaneClicked\0"
    "on_geoSelectSurface_clicked\0shapeSlected\0"
    "Geometry::GeometrySet*\0set\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeometryWidget__SketchPlanDialog[] = {

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
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,

       0        // eod
};

void GeometryWidget::SketchPlanDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SketchPlanDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startSketch((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2])),(*reinterpret_cast< double*(*)>(_a[3]))); break;
        case 1: _t->selecPlaneClicked(); break;
        case 2: _t->on_geoSelectSurface_clicked(); break;
        case 3: _t->shapeSlected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SketchPlanDialog::*)(bool , double * , double * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SketchPlanDialog::startSketch)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GeometryWidget::SketchPlanDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<GeoDialogBase::staticMetaObject>(),
    qt_meta_stringdata_GeometryWidget__SketchPlanDialog.data,
    qt_meta_data_GeometryWidget__SketchPlanDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeometryWidget::SketchPlanDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeometryWidget::SketchPlanDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeometryWidget__SketchPlanDialog.stringdata0))
        return static_cast<void*>(this);
    return GeoDialogBase::qt_metacast(_clname);
}

int GeometryWidget::SketchPlanDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GeoDialogBase::qt_metacall(_c, _id, _a);
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
void GeometryWidget::SketchPlanDialog::startSketch(bool _t1, double * _t2, double * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
