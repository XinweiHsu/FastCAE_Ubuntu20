/****************************************************************************
** Meta object code from reading C++ file 'meshViewProvider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../meshViewProvider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'meshViewProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget__MeshViewProvider_t {
    QByteArrayData data[24];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget__MeshViewProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget__MeshViewProvider_t qt_meta_stringdata_MainWidget__MeshViewProvider = {
    {
QT_MOC_LITERAL(0, 0, 28), // "MainWidget::MeshViewProvider"
QT_MOC_LITERAL(1, 29, 17), // "setMeshSelectMode"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4), // "mode"
QT_MOC_LITERAL(4, 53, 14), // "clearHighLight"
QT_MOC_LITERAL(5, 68, 15), // "highLighDataSet"
QT_MOC_LITERAL(6, 84, 11), // "vtkDataSet*"
QT_MOC_LITERAL(7, 96, 7), // "dataset"
QT_MOC_LITERAL(8, 104, 11), // "highLighSet"
QT_MOC_LITERAL(9, 116, 28), // "QMultiHash<vtkDataSet*,int>*"
QT_MOC_LITERAL(10, 145, 5), // "items"
QT_MOC_LITERAL(11, 151, 15), // "highLighMeshSet"
QT_MOC_LITERAL(12, 167, 18), // "MeshData::MeshSet*"
QT_MOC_LITERAL(13, 186, 3), // "set"
QT_MOC_LITERAL(14, 190, 14), // "highLighKernel"
QT_MOC_LITERAL(15, 205, 21), // "MeshData::MeshKernal*"
QT_MOC_LITERAL(16, 227, 1), // "k"
QT_MOC_LITERAL(17, 229, 26), // "highLightActorDispalyPoint"
QT_MOC_LITERAL(18, 256, 2), // "on"
QT_MOC_LITERAL(19, 259, 17), // "updateGraphOption"
QT_MOC_LITERAL(20, 277, 20), // "updateMeshSetDisplay"
QT_MOC_LITERAL(21, 298, 21), // "updateMeshSetVisibily"
QT_MOC_LITERAL(22, 320, 13), // "removeSetData"
QT_MOC_LITERAL(23, 334, 5) // "index"

    },
    "MainWidget::MeshViewProvider\0"
    "setMeshSelectMode\0\0mode\0clearHighLight\0"
    "highLighDataSet\0vtkDataSet*\0dataset\0"
    "highLighSet\0QMultiHash<vtkDataSet*,int>*\0"
    "items\0highLighMeshSet\0MeshData::MeshSet*\0"
    "set\0highLighKernel\0MeshData::MeshKernal*\0"
    "k\0highLightActorDispalyPoint\0on\0"
    "updateGraphOption\0updateMeshSetDisplay\0"
    "updateMeshSetVisibily\0removeSetData\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget__MeshViewProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    0,   72,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       8,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,
      17,    1,   85,    2, 0x0a /* Public */,
      19,    0,   88,    2, 0x0a /* Public */,
      20,    0,   89,    2, 0x0a /* Public */,
      21,    1,   90,    2, 0x0a /* Public */,
      22,    1,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

void MainWidget::MeshViewProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeshViewProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMeshSelectMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->clearHighLight(); break;
        case 2: _t->highLighDataSet((*reinterpret_cast< vtkDataSet*(*)>(_a[1]))); break;
        case 3: _t->highLighSet((*reinterpret_cast< QMultiHash<vtkDataSet*,int>*(*)>(_a[1]))); break;
        case 4: _t->highLighMeshSet((*reinterpret_cast< MeshData::MeshSet*(*)>(_a[1]))); break;
        case 5: _t->highLighKernel((*reinterpret_cast< MeshData::MeshKernal*(*)>(_a[1]))); break;
        case 6: _t->highLightActorDispalyPoint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateGraphOption(); break;
        case 8: _t->updateMeshSetDisplay(); break;
        case 9: _t->updateMeshSetVisibily((*reinterpret_cast< MeshData::MeshSet*(*)>(_a[1]))); break;
        case 10: _t->removeSetData((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::MeshViewProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainWidget__MeshViewProvider.data,
    qt_meta_data_MainWidget__MeshViewProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWidget::MeshViewProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::MeshViewProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget__MeshViewProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainWidget::MeshViewProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
