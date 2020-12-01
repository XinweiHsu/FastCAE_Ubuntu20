/****************************************************************************
** Meta object code from reading C++ file 'geometryViewProvider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../geometryViewProvider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geometryViewProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__GeometryViewProvider_t {
    QByteArrayData data[52];
    char stringdata0[674];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__GeometryViewProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__GeometryViewProvider_t qt_meta_stringdata_MainWidget__GeometryViewProvider = {
    {
QT_MOC_LITERAL(0, 0, 32), // "MainWidget::GeometryViewProvider"
QT_MOC_LITERAL(1, 33, 16), // "geoShapeSelected"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 22), // "Geometry::GeometrySet*"
QT_MOC_LITERAL(4, 74, 5), // "shape"
QT_MOC_LITERAL(5, 80, 5), // "index"
QT_MOC_LITERAL(6, 86, 10), // "showGeoSet"
QT_MOC_LITERAL(7, 97, 3), // "set"
QT_MOC_LITERAL(8, 101, 6), // "render"
QT_MOC_LITERAL(9, 108, 9), // "showDatum"
QT_MOC_LITERAL(10, 118, 24), // "Geometry::GeometryDatum*"
QT_MOC_LITERAL(11, 143, 4), // "datm"
QT_MOC_LITERAL(12, 148, 12), // "removeActors"
QT_MOC_LITERAL(13, 161, 17), // "removeDatumActors"
QT_MOC_LITERAL(14, 179, 5), // "plane"
QT_MOC_LITERAL(15, 185, 16), // "setGeoSelectMode"
QT_MOC_LITERAL(16, 202, 14), // "selectGeometry"
QT_MOC_LITERAL(17, 217, 9), // "vtkActor*"
QT_MOC_LITERAL(18, 227, 2), // "ac"
QT_MOC_LITERAL(19, 230, 9), // "ctrlpress"
QT_MOC_LITERAL(20, 240, 17), // "preSelectGeometry"
QT_MOC_LITERAL(21, 258, 16), // "QVector<double*>"
QT_MOC_LITERAL(22, 275, 6), // "points"
QT_MOC_LITERAL(23, 282, 18), // "setGeometryDisplay"
QT_MOC_LITERAL(24, 301, 1), // "v"
QT_MOC_LITERAL(25, 303, 1), // "c"
QT_MOC_LITERAL(26, 305, 1), // "f"
QT_MOC_LITERAL(27, 307, 19), // "slotShowGeometryAll"
QT_MOC_LITERAL(28, 327, 15), // "RestoreGeoColor"
QT_MOC_LITERAL(29, 343, 20), // "highLightGeometrySet"
QT_MOC_LITERAL(30, 364, 1), // "s"
QT_MOC_LITERAL(31, 366, 2), // "on"
QT_MOC_LITERAL(32, 369, 22), // "highLightGeometrySolid"
QT_MOC_LITERAL(33, 392, 2), // "id"
QT_MOC_LITERAL(34, 395, 16), // "getSolidPolyData"
QT_MOC_LITERAL(35, 412, 12), // "vtkPolyData*"
QT_MOC_LITERAL(36, 425, 22), // "highLightGeometryPoint"
QT_MOC_LITERAL(37, 448, 16), // "getPointPolyData"
QT_MOC_LITERAL(38, 465, 21), // "highLightGeometryEdge"
QT_MOC_LITERAL(39, 487, 15), // "getEdgePolyData"
QT_MOC_LITERAL(40, 503, 21), // "highLightGeometryFace"
QT_MOC_LITERAL(41, 525, 15), // "getFacePolyData"
QT_MOC_LITERAL(42, 541, 22), // "clearGeometryHighLight"
QT_MOC_LITERAL(43, 564, 17), // "clearAllHighLight"
QT_MOC_LITERAL(44, 582, 17), // "clearSelectActors"
QT_MOC_LITERAL(45, 600, 9), // "showActor"
QT_MOC_LITERAL(46, 610, 2), // "pd"
QT_MOC_LITERAL(47, 613, 5), // "state"
QT_MOC_LITERAL(48, 619, 17), // "judgePreShowActor"
QT_MOC_LITERAL(49, 637, 12), // "hideGeometry"
QT_MOC_LITERAL(50, 650, 16), // "QList<vtkActor*>"
QT_MOC_LITERAL(51, 667, 6) // "actors"

    },
    "MainWidget::GeometryViewProvider\0"
    "geoShapeSelected\0\0Geometry::GeometrySet*\0"
    "shape\0index\0showGeoSet\0set\0render\0"
    "showDatum\0Geometry::GeometryDatum*\0"
    "datm\0removeActors\0removeDatumActors\0"
    "plane\0setGeoSelectMode\0selectGeometry\0"
    "vtkActor*\0ac\0ctrlpress\0preSelectGeometry\0"
    "QVector<double*>\0points\0setGeometryDisplay\0"
    "v\0c\0f\0slotShowGeometryAll\0RestoreGeoColor\0"
    "highLightGeometrySet\0s\0on\0"
    "highLightGeometrySolid\0id\0getSolidPolyData\0"
    "vtkPolyData*\0highLightGeometryPoint\0"
    "getPointPolyData\0highLightGeometryEdge\0"
    "getEdgePolyData\0highLightGeometryFace\0"
    "getFacePolyData\0clearGeometryHighLight\0"
    "clearAllHighLight\0clearSelectActors\0"
    "showActor\0pd\0state\0judgePreShowActor\0"
    "hideGeometry\0QList<vtkActor*>\0actors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__GeometryViewProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  149,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,  154,    2, 0x0a /* Public */,
       6,    1,  159,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  162,    2, 0x0a /* Public */,
      12,    1,  165,    2, 0x0a /* Public */,
      13,    1,  168,    2, 0x0a /* Public */,
      15,    1,  171,    2, 0x0a /* Public */,
      16,    2,  174,    2, 0x0a /* Public */,
      20,    2,  179,    2, 0x0a /* Public */,
      23,    3,  184,    2, 0x0a /* Public */,
      27,    0,  191,    2, 0x0a /* Public */,
      28,    0,  192,    2, 0x0a /* Public */,
      29,    2,  193,    2, 0x08 /* Private */,
      32,    3,  198,    2, 0x08 /* Private */,
      34,    2,  205,    2, 0x08 /* Private */,
      36,    3,  210,    2, 0x08 /* Private */,
      37,    2,  217,    2, 0x08 /* Private */,
      38,    3,  222,    2, 0x08 /* Private */,
      39,    2,  229,    2, 0x08 /* Private */,
      40,    3,  234,    2, 0x08 /* Private */,
      41,    2,  241,    2, 0x08 /* Private */,
      42,    0,  246,    2, 0x08 /* Private */,
      43,    0,  247,    2, 0x08 /* Private */,
      44,    1,  248,    2, 0x08 /* Private */,
      45,    2,  251,    2, 0x08 /* Private */,
      48,    1,  256,    2, 0x08 /* Private */,
      49,    3,  259,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    7,    8,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 10,   14,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   18,   19,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 21,   18,   22,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   24,   25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   30,   31,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,   30,   33,   31,
    0x80000000 | 35, 0x80000000 | 3, QMetaType::Int,   30,   33,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,   30,   33,   31,
    0x80000000 | 35, 0x80000000 | 3, QMetaType::Int,   30,   33,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,   30,   33,   31,
    0x80000000 | 35, 0x80000000 | 3, QMetaType::Int,   30,   33,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Bool,   30,   33,   31,
    0x80000000 | 35, 0x80000000 | 3, QMetaType::Int,   30,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   30,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool,   46,   47,
    QMetaType::Bool, 0x80000000 | 35,   46,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 50, QMetaType::Int,    7,   51,    5,

       0        // eod
};

void MainWidget::GeometryViewProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeometryViewProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->geoShapeSelected((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->showGeoSet((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->showGeoSet((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1]))); break;
        case 3: _t->showDatum((*reinterpret_cast< Geometry::GeometryDatum*(*)>(_a[1]))); break;
        case 4: _t->removeActors((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1]))); break;
        case 5: _t->removeDatumActors((*reinterpret_cast< Geometry::GeometryDatum*(*)>(_a[1]))); break;
        case 6: _t->setGeoSelectMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->selectGeometry((*reinterpret_cast< vtkActor*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->preSelectGeometry((*reinterpret_cast< vtkActor*(*)>(_a[1])),(*reinterpret_cast< QVector<double*>(*)>(_a[2]))); break;
        case 9: _t->setGeometryDisplay((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->slotShowGeometryAll(); break;
        case 11: _t->RestoreGeoColor(); break;
        case 12: _t->highLightGeometrySet((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->highLightGeometrySolid((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 14: { vtkPolyData* _r = _t->getSolidPolyData((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vtkPolyData**>(_a[0]) = std::move(_r); }  break;
        case 15: _t->highLightGeometryPoint((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: { vtkPolyData* _r = _t->getPointPolyData((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vtkPolyData**>(_a[0]) = std::move(_r); }  break;
        case 17: _t->highLightGeometryEdge((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: { vtkPolyData* _r = _t->getEdgePolyData((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vtkPolyData**>(_a[0]) = std::move(_r); }  break;
        case 19: _t->highLightGeometryFace((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: { vtkPolyData* _r = _t->getFacePolyData((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< vtkPolyData**>(_a[0]) = std::move(_r); }  break;
        case 21: _t->clearGeometryHighLight(); break;
        case 22: _t->clearAllHighLight(); break;
        case 23: _t->clearSelectActors((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1]))); break;
        case 24: _t->showActor((*reinterpret_cast< vtkPolyData*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: { bool _r = _t->judgePreShowActor((*reinterpret_cast< vtkPolyData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->hideGeometry((*reinterpret_cast< Geometry::GeometrySet*(*)>(_a[1])),(*reinterpret_cast< QList<vtkActor*>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeometryViewProvider::*)(Geometry::GeometrySet * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeometryViewProvider::geoShapeSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::GeometryViewProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__GeometryViewProvider.data,
    qt_meta_data_MainWidget__GeometryViewProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::GeometryViewProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::GeometryViewProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__GeometryViewProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainWidget::GeometryViewProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::GeometryViewProvider::geoShapeSelected(Geometry::GeometrySet * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
