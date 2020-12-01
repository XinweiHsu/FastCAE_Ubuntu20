/****************************************************************************
** Meta object code from reading C++ file 'scalarbareditform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../scalarbareditform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scalarbareditform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScalarBarEditForm_t {
    QByteArrayData data[38];
    char stringdata0[780];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScalarBarEditForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScalarBarEditForm_t qt_meta_stringdata_ScalarBarEditForm = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ScalarBarEditForm"
QT_MOC_LITERAL(1, 18, 19), // "chartsExtentChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 27), // "sig_update_plot_pipelineObj"
QT_MOC_LITERAL(4, 67, 15), // "PipelineObject*"
QT_MOC_LITERAL(5, 83, 25), // "vtkColorTransferFunction*"
QT_MOC_LITERAL(6, 109, 21), // "vtkPiecewiseFunction*"
QT_MOC_LITERAL(7, 131, 24), // "sig_volume_scalarBarEdit"
QT_MOC_LITERAL(8, 156, 31), // "vtkSmartPointer<vtkLookupTable>"
QT_MOC_LITERAL(9, 188, 26), // "sig_update_scalarBar_title"
QT_MOC_LITERAL(10, 215, 29), // "sig_update_scalarBar_fontSize"
QT_MOC_LITERAL(11, 245, 30), // "sig_update_scalarBar_numLables"
QT_MOC_LITERAL(12, 276, 20), // "sig_update_scalarBar"
QT_MOC_LITERAL(13, 297, 23), // "slot_update_scalarRange"
QT_MOC_LITERAL(14, 321, 7), // "double*"
QT_MOC_LITERAL(15, 329, 30), // "on_scalarRange_dataBtn_clicked"
QT_MOC_LITERAL(16, 360, 32), // "on_scalarRange_customBtn_clicked"
QT_MOC_LITERAL(17, 393, 31), // "on_scalarRange_tableBtn_clicked"
QT_MOC_LITERAL(18, 425, 12), // "computeRange"
QT_MOC_LITERAL(19, 438, 5), // "range"
QT_MOC_LITERAL(20, 444, 11), // "updateRange"
QT_MOC_LITERAL(21, 456, 14), // "onAxesModified"
QT_MOC_LITERAL(22, 471, 13), // "moveAllPoints"
QT_MOC_LITERAL(23, 485, 7), // "xOffset"
QT_MOC_LITERAL(24, 493, 7), // "yOffset"
QT_MOC_LITERAL(25, 501, 20), // "dontMoveFirstAndLast"
QT_MOC_LITERAL(26, 522, 15), // "spreadAllPoints"
QT_MOC_LITERAL(27, 538, 6), // "factor"
QT_MOC_LITERAL(28, 545, 22), // "dontSpreadFirstAndLast"
QT_MOC_LITERAL(29, 568, 26), // "slot_update_scalarBarTable"
QT_MOC_LITERAL(30, 595, 33), // "on_enableOpacity_checkBox_cli..."
QT_MOC_LITERAL(31, 629, 7), // "checked"
QT_MOC_LITERAL(32, 637, 21), // "slot_update_zoneTable"
QT_MOC_LITERAL(33, 659, 21), // "OnZoneColorBtnClicked"
QT_MOC_LITERAL(34, 681, 33), // "on_spinBox_numLabels_valueCha..."
QT_MOC_LITERAL(35, 715, 4), // "arg1"
QT_MOC_LITERAL(36, 720, 35), // "on_colName_lineEdit_editingFi..."
QT_MOC_LITERAL(37, 756, 23) // "on_spinBox_valueChanged"

    },
    "ScalarBarEditForm\0chartsExtentChanged\0"
    "\0sig_update_plot_pipelineObj\0"
    "PipelineObject*\0vtkColorTransferFunction*\0"
    "vtkPiecewiseFunction*\0sig_volume_scalarBarEdit\0"
    "vtkSmartPointer<vtkLookupTable>\0"
    "sig_update_scalarBar_title\0"
    "sig_update_scalarBar_fontSize\0"
    "sig_update_scalarBar_numLables\0"
    "sig_update_scalarBar\0slot_update_scalarRange\0"
    "double*\0on_scalarRange_dataBtn_clicked\0"
    "on_scalarRange_customBtn_clicked\0"
    "on_scalarRange_tableBtn_clicked\0"
    "computeRange\0range\0updateRange\0"
    "onAxesModified\0moveAllPoints\0xOffset\0"
    "yOffset\0dontMoveFirstAndLast\0"
    "spreadAllPoints\0factor\0dontSpreadFirstAndLast\0"
    "slot_update_scalarBarTable\0"
    "on_enableOpacity_checkBox_clicked\0"
    "checked\0slot_update_zoneTable\0"
    "OnZoneColorBtnClicked\0"
    "on_spinBox_numLabels_valueChanged\0"
    "arg1\0on_colName_lineEdit_editingFinished\0"
    "on_spinBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScalarBarEditForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  129,    2, 0x06 /* Public */,
       3,    3,  130,    2, 0x06 /* Public */,
       7,    2,  137,    2, 0x06 /* Public */,
       9,    3,  142,    2, 0x06 /* Public */,
      10,    3,  149,    2, 0x06 /* Public */,
      11,    3,  156,    2, 0x06 /* Public */,
      12,    1,  163,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  166,    2, 0x0a /* Public */,
      15,    0,  169,    2, 0x08 /* Private */,
      16,    0,  170,    2, 0x08 /* Private */,
      17,    0,  171,    2, 0x08 /* Private */,
      18,    1,  172,    2, 0x08 /* Private */,
      20,    0,  175,    2, 0x08 /* Private */,
      21,    0,  176,    2, 0x08 /* Private */,
      22,    3,  177,    2, 0x08 /* Private */,
      26,    2,  184,    2, 0x08 /* Private */,
      29,    0,  189,    2, 0x08 /* Private */,
      30,    1,  190,    2, 0x08 /* Private */,
      32,    0,  193,    2, 0x08 /* Private */,
      33,    0,  194,    2, 0x08 /* Private */,
      34,    1,  195,    2, 0x08 /* Private */,
      36,    0,  198,    2, 0x08 /* Private */,
      37,    1,  199,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 6,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    2,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,   23,   24,   25,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   27,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   35,

       0        // eod
};

void ScalarBarEditForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScalarBarEditForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chartsExtentChanged(); break;
        case 1: _t->sig_update_plot_pipelineObj((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< vtkColorTransferFunction*(*)>(_a[2])),(*reinterpret_cast< vtkPiecewiseFunction*(*)>(_a[3]))); break;
        case 2: _t->sig_volume_scalarBarEdit((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< vtkSmartPointer<vtkLookupTable>(*)>(_a[2]))); break;
        case 3: _t->sig_update_scalarBar_title((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->sig_update_scalarBar_fontSize((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->sig_update_scalarBar_numLables((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->sig_update_scalarBar((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 7: _t->slot_update_scalarRange((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 8: _t->on_scalarRange_dataBtn_clicked(); break;
        case 9: _t->on_scalarRange_customBtn_clicked(); break;
        case 10: _t->on_scalarRange_tableBtn_clicked(); break;
        case 11: _t->computeRange((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 12: _t->updateRange(); break;
        case 13: _t->onAxesModified(); break;
        case 14: _t->moveAllPoints((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->spreadAllPoints((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->slot_update_scalarBarTable(); break;
        case 17: _t->on_enableOpacity_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->slot_update_zoneTable(); break;
        case 19: _t->OnZoneColorBtnClicked(); break;
        case 20: _t->on_spinBox_numLabels_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_colName_lineEdit_editingFinished(); break;
        case 22: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScalarBarEditForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScalarBarEditForm::chartsExtentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScalarBarEditForm::*)(PipelineObject * , vtkColorTransferFunction * , vtkPiecewiseFunction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScalarBarEditForm::sig_update_plot_pipelineObj)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScalarBarEditForm::*)(PipelineObject * , vtkSmartPointer<vtkLookupTable> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScalarBarEditForm::sig_volume_scalarBarEdit)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScalarBarEditForm::*)(PipelineObject * , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScalarBarEditForm::sig_update_scalarBar_title)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScalarBarEditForm::*)(PipelineObject * , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScalarBarEditForm::sig_update_scalarBar_fontSize)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ScalarBarEditForm::*)(PipelineObject * , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScalarBarEditForm::sig_update_scalarBar_numLables)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ScalarBarEditForm::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScalarBarEditForm::sig_update_scalarBar)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScalarBarEditForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ScalarBarEditForm.data,
    qt_meta_data_ScalarBarEditForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScalarBarEditForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScalarBarEditForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScalarBarEditForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScalarBarEditForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void ScalarBarEditForm::chartsExtentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScalarBarEditForm::sig_update_plot_pipelineObj(PipelineObject * _t1, vtkColorTransferFunction * _t2, vtkPiecewiseFunction * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScalarBarEditForm::sig_volume_scalarBarEdit(PipelineObject * _t1, vtkSmartPointer<vtkLookupTable> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScalarBarEditForm::sig_update_scalarBar_title(PipelineObject * _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScalarBarEditForm::sig_update_scalarBar_fontSize(PipelineObject * _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ScalarBarEditForm::sig_update_scalarBar_numLables(PipelineObject * _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ScalarBarEditForm::sig_update_scalarBar(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
