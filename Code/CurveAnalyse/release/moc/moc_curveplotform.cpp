/****************************************************************************
** Meta object code from reading C++ file 'curveplotform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../curveplotform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curveplotform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurvePlotForm_t {
    QByteArrayData data[67];
    char stringdata0[1086];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurvePlotForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurvePlotForm_t qt_meta_stringdata_CurvePlotForm = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CurvePlotForm"
QT_MOC_LITERAL(1, 14, 26), // "sig_update_tree_curve_name"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 20), // "sig_finish_aniThread"
QT_MOC_LITERAL(4, 63, 17), // "sig_updateZoomBar"
QT_MOC_LITERAL(5, 81, 19), // "sig_CAE_curve_frame"
QT_MOC_LITERAL(6, 101, 9), // "tep_frame"
QT_MOC_LITERAL(7, 111, 15), // "tep_start_frame"
QT_MOC_LITERAL(8, 127, 14), // "tep_max_frames"
QT_MOC_LITERAL(9, 142, 11), // "slot_runAni"
QT_MOC_LITERAL(10, 154, 12), // "slot_stopAni"
QT_MOC_LITERAL(11, 167, 21), // "slot_finish_aniThread"
QT_MOC_LITERAL(12, 189, 4), // "flag"
QT_MOC_LITERAL(13, 194, 16), // "slot_addAniPoint"
QT_MOC_LITERAL(14, 211, 19), // "slot_updateAniPoint"
QT_MOC_LITERAL(15, 231, 11), // "slot_replot"
QT_MOC_LITERAL(16, 243, 16), // "slot_setAxisName"
QT_MOC_LITERAL(17, 260, 6), // "axisId"
QT_MOC_LITERAL(18, 267, 17), // "slot_setAxisRange"
QT_MOC_LITERAL(19, 285, 28), // "slot_xAxis_dataSource_change"
QT_MOC_LITERAL(20, 314, 13), // "slot_setTitle"
QT_MOC_LITERAL(21, 328, 14), // "slot_setLegend"
QT_MOC_LITERAL(22, 343, 12), // "slot_setGrid"
QT_MOC_LITERAL(23, 356, 23), // "slot_setBackgroundColor"
QT_MOC_LITERAL(24, 380, 15), // "slot_setAxisNum"
QT_MOC_LITERAL(25, 396, 27), // "slot_curve_selected_changed"
QT_MOC_LITERAL(26, 424, 8), // "selected"
QT_MOC_LITERAL(27, 433, 20), // "slot_axisDoubleClick"
QT_MOC_LITERAL(28, 454, 8), // "QCPAxis*"
QT_MOC_LITERAL(29, 463, 4), // "axis"
QT_MOC_LITERAL(30, 468, 23), // "QCPAxis::SelectablePart"
QT_MOC_LITERAL(31, 492, 4), // "part"
QT_MOC_LITERAL(32, 497, 12), // "QMouseEvent*"
QT_MOC_LITERAL(33, 510, 5), // "event"
QT_MOC_LITERAL(34, 516, 23), // "slot_myTitleDoubleClick"
QT_MOC_LITERAL(35, 540, 15), // "QCPTextElement*"
QT_MOC_LITERAL(36, 556, 4), // "item"
QT_MOC_LITERAL(37, 561, 22), // "slot_legendDoubleClick"
QT_MOC_LITERAL(38, 584, 10), // "QCPLegend*"
QT_MOC_LITERAL(39, 595, 6), // "legend"
QT_MOC_LITERAL(40, 602, 22), // "QCPAbstractLegendItem*"
QT_MOC_LITERAL(41, 625, 25), // "slot_plottableDoubleClick"
QT_MOC_LITERAL(42, 651, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(43, 673, 22), // "slot_update_curve_name"
QT_MOC_LITERAL(44, 696, 14), // "tep_file_index"
QT_MOC_LITERAL(45, 711, 15), // "tep_curve_index"
QT_MOC_LITERAL(46, 727, 21), // "slot_update_curve_pen"
QT_MOC_LITERAL(47, 749, 27), // "slot_update_curve_linePoint"
QT_MOC_LITERAL(48, 777, 22), // "slot_update_curve_axis"
QT_MOC_LITERAL(49, 800, 20), // "slot_updateCurvePlot"
QT_MOC_LITERAL(50, 821, 19), // "slot_add_curve_plot"
QT_MOC_LITERAL(51, 841, 20), // "slot_updateCurveData"
QT_MOC_LITERAL(52, 862, 16), // "tep_column_index"
QT_MOC_LITERAL(53, 879, 5), // "val_x"
QT_MOC_LITERAL(54, 885, 5), // "val_y"
QT_MOC_LITERAL(55, 891, 15), // "QVector<double>"
QT_MOC_LITERAL(56, 907, 6), // "data_x"
QT_MOC_LITERAL(57, 914, 6), // "data_y"
QT_MOC_LITERAL(58, 921, 12), // "tep_filename"
QT_MOC_LITERAL(59, 934, 26), // "slot_plot_mouseDoubleClick"
QT_MOC_LITERAL(60, 961, 9), // "tep_event"
QT_MOC_LITERAL(61, 971, 20), // "slot_plot_mousePress"
QT_MOC_LITERAL(62, 992, 19), // "slot_del_curve_plot"
QT_MOC_LITERAL(63, 1012, 16), // "slot_savePlotAct"
QT_MOC_LITERAL(64, 1029, 18), // "slot_exportPlotAct"
QT_MOC_LITERAL(65, 1048, 14), // "slot_saveImage"
QT_MOC_LITERAL(66, 1063, 22) // "slot_update_curve_plot"

    },
    "CurvePlotForm\0sig_update_tree_curve_name\0"
    "\0sig_finish_aniThread\0sig_updateZoomBar\0"
    "sig_CAE_curve_frame\0tep_frame\0"
    "tep_start_frame\0tep_max_frames\0"
    "slot_runAni\0slot_stopAni\0slot_finish_aniThread\0"
    "flag\0slot_addAniPoint\0slot_updateAniPoint\0"
    "slot_replot\0slot_setAxisName\0axisId\0"
    "slot_setAxisRange\0slot_xAxis_dataSource_change\0"
    "slot_setTitle\0slot_setLegend\0slot_setGrid\0"
    "slot_setBackgroundColor\0slot_setAxisNum\0"
    "slot_curve_selected_changed\0selected\0"
    "slot_axisDoubleClick\0QCPAxis*\0axis\0"
    "QCPAxis::SelectablePart\0part\0QMouseEvent*\0"
    "event\0slot_myTitleDoubleClick\0"
    "QCPTextElement*\0item\0slot_legendDoubleClick\0"
    "QCPLegend*\0legend\0QCPAbstractLegendItem*\0"
    "slot_plottableDoubleClick\0"
    "QCPAbstractPlottable*\0slot_update_curve_name\0"
    "tep_file_index\0tep_curve_index\0"
    "slot_update_curve_pen\0slot_update_curve_linePoint\0"
    "slot_update_curve_axis\0slot_updateCurvePlot\0"
    "slot_add_curve_plot\0slot_updateCurveData\0"
    "tep_column_index\0val_x\0val_y\0"
    "QVector<double>\0data_x\0data_y\0"
    "tep_filename\0slot_plot_mouseDoubleClick\0"
    "tep_event\0slot_plot_mousePress\0"
    "slot_del_curve_plot\0slot_savePlotAct\0"
    "slot_exportPlotAct\0slot_saveImage\0"
    "slot_update_curve_plot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurvePlotForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  209,    2, 0x06 /* Public */,
       3,    1,  216,    2, 0x06 /* Public */,
       4,    1,  219,    2, 0x06 /* Public */,
       5,    3,  222,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  229,    2, 0x0a /* Public */,
      10,    0,  230,    2, 0x0a /* Public */,
      11,    1,  231,    2, 0x0a /* Public */,
      13,    3,  234,    2, 0x0a /* Public */,
      14,    3,  241,    2, 0x0a /* Public */,
      15,    0,  248,    2, 0x0a /* Public */,
      16,    1,  249,    2, 0x0a /* Public */,
      18,    1,  252,    2, 0x0a /* Public */,
      19,    1,  255,    2, 0x0a /* Public */,
      20,    0,  258,    2, 0x0a /* Public */,
      21,    0,  259,    2, 0x0a /* Public */,
      22,    0,  260,    2, 0x0a /* Public */,
      23,    0,  261,    2, 0x0a /* Public */,
      24,    0,  262,    2, 0x0a /* Public */,
      25,    1,  263,    2, 0x0a /* Public */,
      27,    3,  266,    2, 0x0a /* Public */,
      34,    2,  273,    2, 0x0a /* Public */,
      37,    3,  278,    2, 0x0a /* Public */,
      41,    3,  285,    2, 0x0a /* Public */,
      43,    2,  292,    2, 0x0a /* Public */,
      46,    2,  297,    2, 0x0a /* Public */,
      47,    2,  302,    2, 0x0a /* Public */,
      48,    2,  307,    2, 0x0a /* Public */,
      49,    2,  312,    2, 0x0a /* Public */,
      50,    2,  317,    2, 0x0a /* Public */,
      51,    4,  322,    2, 0x0a /* Public */,
      51,    3,  331,    2, 0x0a /* Public */,
      51,    2,  338,    2, 0x0a /* Public */,
      59,    1,  343,    2, 0x0a /* Public */,
      61,    1,  346,    2, 0x0a /* Public */,
      62,    2,  349,    2, 0x0a /* Public */,
      63,    0,  354,    2, 0x0a /* Public */,
      64,    0,  355,    2, 0x0a /* Public */,
      65,    0,  356,    2, 0x0a /* Public */,
      66,    0,  357,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, 0x80000000 | 28, 0x80000000 | 30, 0x80000000 | 32,   29,   31,   33,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 32,   36,   33,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 40, 0x80000000 | 32,   39,   36,   33,
    QMetaType::Void, 0x80000000 | 42, QMetaType::Int, 0x80000000 | 32,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   44,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   44,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   44,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   44,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   44,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   44,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double,   44,   52,   53,   54,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 55, QMetaType::QString,   56,   57,   58,
    QMetaType::Void, 0x80000000 | 55, QMetaType::QString,   57,   58,
    QMetaType::Void, 0x80000000 | 32,   60,
    QMetaType::Void, 0x80000000 | 32,   60,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   44,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CurvePlotForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurvePlotForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_update_tree_curve_name((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->sig_finish_aniThread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sig_updateZoomBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sig_CAE_curve_frame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->slot_runAni(); break;
        case 5: _t->slot_stopAni(); break;
        case 6: _t->slot_finish_aniThread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slot_addAniPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->slot_updateAniPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->slot_replot(); break;
        case 10: _t->slot_setAxisName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->slot_setAxisRange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->slot_xAxis_dataSource_change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->slot_setTitle(); break;
        case 14: _t->slot_setLegend(); break;
        case 15: _t->slot_setGrid(); break;
        case 16: _t->slot_setBackgroundColor(); break;
        case 17: _t->slot_setAxisNum(); break;
        case 18: _t->slot_curve_selected_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->slot_axisDoubleClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 20: _t->slot_myTitleDoubleClick((*reinterpret_cast< QCPTextElement*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 21: _t->slot_legendDoubleClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 22: _t->slot_plottableDoubleClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 23: _t->slot_update_curve_name((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->slot_update_curve_pen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->slot_update_curve_linePoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->slot_update_curve_axis((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->slot_updateCurvePlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->slot_add_curve_plot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->slot_updateCurveData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 30: _t->slot_updateCurveData((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 31: _t->slot_updateCurveData((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->slot_plot_mouseDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 33: _t->slot_plot_mousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 34: _t->slot_del_curve_plot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->slot_savePlotAct(); break;
        case 36: _t->slot_exportPlotAct(); break;
        case 37: _t->slot_saveImage(); break;
        case 38: _t->slot_update_curve_plot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis::SelectablePart >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPTextElement* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLegend* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractPlottable* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CurvePlotForm::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurvePlotForm::sig_update_tree_curve_name)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CurvePlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurvePlotForm::sig_finish_aniThread)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CurvePlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurvePlotForm::sig_updateZoomBar)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CurvePlotForm::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurvePlotForm::sig_CAE_curve_frame)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CurvePlotForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CurvePlotForm.data,
    qt_meta_data_CurvePlotForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurvePlotForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurvePlotForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurvePlotForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CurvePlotForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void CurvePlotForm::sig_update_tree_curve_name(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CurvePlotForm::sig_finish_aniThread(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CurvePlotForm::sig_updateZoomBar(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CurvePlotForm::sig_CAE_curve_frame(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
