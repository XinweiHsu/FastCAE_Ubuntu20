/****************************************************************************
** Meta object code from reading C++ file 'ctkVTKScalarBarWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CTK/Libs/Visualization/VTK/Widgets/ctkVTKScalarBarWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkVTKScalarBarWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkVTKScalarBarWidget_t {
    QByteArrayData data[17];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkVTKScalarBarWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkVTKScalarBarWidget_t qt_meta_stringdata_ctkVTKScalarBarWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ctkVTKScalarBarWidget"
QT_MOC_LITERAL(1, 22, 8), // "modified"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "setScalarBarWidget"
QT_MOC_LITERAL(4, 51, 19), // "vtkScalarBarWidget*"
QT_MOC_LITERAL(5, 71, 9), // "scalarBar"
QT_MOC_LITERAL(6, 81, 10), // "setDisplay"
QT_MOC_LITERAL(7, 92, 7), // "visible"
QT_MOC_LITERAL(8, 100, 20), // "setMaxNumberOfColors"
QT_MOC_LITERAL(9, 121, 10), // "colorCount"
QT_MOC_LITERAL(10, 132, 17), // "setNumberOfLabels"
QT_MOC_LITERAL(11, 150, 10), // "labelCount"
QT_MOC_LITERAL(12, 161, 8), // "setTitle"
QT_MOC_LITERAL(13, 170, 5), // "title"
QT_MOC_LITERAL(14, 176, 15), // "setLabelsFormat"
QT_MOC_LITERAL(15, 192, 6), // "format"
QT_MOC_LITERAL(16, 199, 19) // "onScalarBarModified"

    },
    "ctkVTKScalarBarWidget\0modified\0\0"
    "setScalarBarWidget\0vtkScalarBarWidget*\0"
    "scalarBar\0setDisplay\0visible\0"
    "setMaxNumberOfColors\0colorCount\0"
    "setNumberOfLabels\0labelCount\0setTitle\0"
    "title\0setLabelsFormat\0format\0"
    "onScalarBarModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkVTKScalarBarWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      12,    1,   67,    2, 0x0a /* Public */,
      14,    1,   70,    2, 0x0a /* Public */,
      16,    0,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

       0        // eod
};

void ctkVTKScalarBarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkVTKScalarBarWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->setScalarBarWidget((*reinterpret_cast< vtkScalarBarWidget*(*)>(_a[1]))); break;
        case 2: _t->setDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setMaxNumberOfColors((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setNumberOfLabels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setLabelsFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onScalarBarModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkVTKScalarBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkVTKScalarBarWidget::modified)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ctkVTKScalarBarWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ctkVTKScalarBarWidget.data,
    qt_meta_data_ctkVTKScalarBarWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkVTKScalarBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkVTKScalarBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkVTKScalarBarWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkVTKScalarBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ctkVTKScalarBarWidget::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
