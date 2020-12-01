/****************************************************************************
** Meta object code from reading C++ file 'ctkVTKChartView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Visualization/VTK/Widgets/ctkVTKChartView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkVTKChartView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkVTKChartView_t {
    QByteArrayData data[20];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkVTKChartView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkVTKChartView_t qt_meta_stringdata_ctkVTKChartView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkVTKChartView"
QT_MOC_LITERAL(1, 16, 9), // "plotAdded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "vtkPlot*"
QT_MOC_LITERAL(4, 36, 4), // "plot"
QT_MOC_LITERAL(5, 41, 11), // "plotRemoved"
QT_MOC_LITERAL(6, 53, 13), // "boundsChanged"
QT_MOC_LITERAL(7, 67, 13), // "extentChanged"
QT_MOC_LITERAL(8, 81, 14), // "removeAllPlots"
QT_MOC_LITERAL(9, 96, 20), // "setAxesToChartBounds"
QT_MOC_LITERAL(10, 117, 22), // "boundAxesToChartBounds"
QT_MOC_LITERAL(11, 140, 7), // "addPlot"
QT_MOC_LITERAL(12, 148, 10), // "removePlot"
QT_MOC_LITERAL(13, 159, 9), // "plotIndex"
QT_MOC_LITERAL(14, 169, 9), // "vtkIdType"
QT_MOC_LITERAL(15, 179, 5), // "chart"
QT_MOC_LITERAL(16, 185, 11), // "vtkChartXY*"
QT_MOC_LITERAL(17, 197, 5), // "scene"
QT_MOC_LITERAL(18, 203, 16), // "vtkContextScene*"
QT_MOC_LITERAL(19, 220, 5) // "title"

    },
    "ctkVTKChartView\0plotAdded\0\0vtkPlot*\0"
    "plot\0plotRemoved\0boundsChanged\0"
    "extentChanged\0removeAllPlots\0"
    "setAxesToChartBounds\0boundAxesToChartBounds\0"
    "addPlot\0removePlot\0plotIndex\0vtkIdType\0"
    "chart\0vtkChartXY*\0scene\0vtkContextScene*\0"
    "title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkVTKChartView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   82,    2, 0x0a /* Public */,
       9,    0,   83,    2, 0x0a /* Public */,
      10,    0,   84,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   85,    2, 0x02 /* Public */,
      12,    1,   88,    2, 0x02 /* Public */,
      13,    1,   91,    2, 0x02 /* Public */,
      15,    0,   94,    2, 0x02 /* Public */,
      17,    0,   95,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 14, 0x80000000 | 3,    4,
    0x80000000 | 16,
    0x80000000 | 18,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00095103,

       0        // eod
};

void ctkVTKChartView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkVTKChartView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->plotAdded((*reinterpret_cast< vtkPlot*(*)>(_a[1]))); break;
        case 1: _t->plotRemoved((*reinterpret_cast< vtkPlot*(*)>(_a[1]))); break;
        case 2: _t->boundsChanged(); break;
        case 3: _t->extentChanged(); break;
        case 4: _t->removeAllPlots(); break;
        case 5: _t->setAxesToChartBounds(); break;
        case 6: _t->boundAxesToChartBounds(); break;
        case 7: _t->addPlot((*reinterpret_cast< vtkPlot*(*)>(_a[1]))); break;
        case 8: _t->removePlot((*reinterpret_cast< vtkPlot*(*)>(_a[1]))); break;
        case 9: { vtkIdType _r = _t->plotIndex((*reinterpret_cast< vtkPlot*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< vtkIdType*>(_a[0]) = std::move(_r); }  break;
        case 10: { vtkChartXY* _r = _t->chart();
            if (_a[0]) *reinterpret_cast< vtkChartXY**>(_a[0]) = std::move(_r); }  break;
        case 11: { vtkContextScene* _r = _t->scene();
            if (_a[0]) *reinterpret_cast< vtkContextScene**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkVTKChartView::*)(vtkPlot * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKChartView::plotAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkVTKChartView::*)(vtkPlot * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKChartView::plotRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ctkVTKChartView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKChartView::boundsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ctkVTKChartView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKChartView::extentChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkVTKChartView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkVTKChartView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkVTKChartView::staticMetaObject = { {
    QMetaObject::SuperData::link<QVTKOpenGLNativeWidget::staticMetaObject>(),
    qt_meta_stringdata_ctkVTKChartView.data,
    qt_meta_data_ctkVTKChartView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkVTKChartView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkVTKChartView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkVTKChartView.stringdata0))
        return static_cast<void*>(this);
    return QVTKOpenGLNativeWidget::qt_metacast(_clname);
}

int ctkVTKChartView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVTKOpenGLNativeWidget::qt_metacall(_c, _id, _a);
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
void ctkVTKChartView::plotAdded(vtkPlot * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkVTKChartView::plotRemoved(vtkPlot * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkVTKChartView::boundsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ctkVTKChartView::extentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
