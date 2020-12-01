/****************************************************************************
** Meta object code from reading C++ file 'PipelineObjPlotForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PipelineObjPlotForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PipelineObjPlotForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PipelineObjPlotForm_t {
    QByteArrayData data[111];
    char stringdata0[2324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PipelineObjPlotForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PipelineObjPlotForm_t qt_meta_stringdata_PipelineObjPlotForm = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PipelineObjPlotForm"
QT_MOC_LITERAL(1, 20, 25), // "sig_update_UndoReDoButton"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 27), // "sig_cgnsAniTimesIcon_status"
QT_MOC_LITERAL(4, 75, 23), // "sig_cgns_animnate_times"
QT_MOC_LITERAL(5, 99, 18), // "sig_finish_aviFile"
QT_MOC_LITERAL(6, 118, 20), // "sig_finish_aniThread"
QT_MOC_LITERAL(7, 139, 20), // "sig_addInfoToConsole"
QT_MOC_LITERAL(8, 160, 7), // "infoStr"
QT_MOC_LITERAL(9, 168, 20), // "sig_treeItem_disable"
QT_MOC_LITERAL(10, 189, 15), // "PipelineObject*"
QT_MOC_LITERAL(11, 205, 25), // "sig_update_runtool_runing"
QT_MOC_LITERAL(12, 231, 24), // "sig_update_countAniFrame"
QT_MOC_LITERAL(13, 256, 43), // "sig_script_user_custom_refres..."
QT_MOC_LITERAL(14, 300, 27), // "sig_script_refresh_pickData"
QT_MOC_LITERAL(15, 328, 25), // "pick_pipelineObj_propData"
QT_MOC_LITERAL(16, 354, 9), // "pick_Data"
QT_MOC_LITERAL(17, 364, 17), // "sig_draw_3d_curve"
QT_MOC_LITERAL(18, 382, 15), // "QVector<double>"
QT_MOC_LITERAL(19, 398, 19), // "sig_update_3d_curve"
QT_MOC_LITERAL(20, 418, 22), // "sig_pickCellAct_status"
QT_MOC_LITERAL(21, 441, 23), // "sig_pickPointAct_status"
QT_MOC_LITERAL(22, 465, 26), // "sig_pickAreaCellAct_status"
QT_MOC_LITERAL(23, 492, 27), // "sig_pickAreaPointAct_status"
QT_MOC_LITERAL(24, 520, 28), // "sig_pickCurvePointAct_status"
QT_MOC_LITERAL(25, 549, 27), // "sig_pickCurveCellAct_status"
QT_MOC_LITERAL(26, 577, 28), // "sig_script_update_currentObj"
QT_MOC_LITERAL(27, 606, 13), // "sig_saveImage"
QT_MOC_LITERAL(28, 620, 15), // "sig_saveAnimate"
QT_MOC_LITERAL(29, 636, 16), // "sig_exitSoftWare"
QT_MOC_LITERAL(30, 653, 23), // "slot_update_glyphVector"
QT_MOC_LITERAL(31, 677, 11), // "tep_pipeObj"
QT_MOC_LITERAL(32, 689, 19), // "slot_updatePickData"
QT_MOC_LITERAL(33, 709, 12), // "tep_pickData"
QT_MOC_LITERAL(34, 722, 15), // "slot_cameraUndo"
QT_MOC_LITERAL(35, 738, 15), // "slot_cameraRedo"
QT_MOC_LITERAL(36, 754, 13), // "slot_cameraDo"
QT_MOC_LITERAL(37, 768, 3), // "pos"
QT_MOC_LITERAL(38, 772, 22), // "slot_restoreInteractor"
QT_MOC_LITERAL(39, 795, 28), // "slot_update_cgns_pipelineObj"
QT_MOC_LITERAL(40, 824, 7), // "pipeObj"
QT_MOC_LITERAL(41, 832, 19), // "slot_finish_saveAvi"
QT_MOC_LITERAL(42, 852, 11), // "slot_runAni"
QT_MOC_LITERAL(43, 864, 12), // "slot_stopAni"
QT_MOC_LITERAL(44, 877, 33), // "slot_stop_update_cgns_pipelin..."
QT_MOC_LITERAL(45, 911, 28), // "slot_change_global_view_prop"
QT_MOC_LITERAL(46, 940, 30), // "slot_init_sliceFilter_plotForm"
QT_MOC_LITERAL(47, 971, 12), // "FilterSlice*"
QT_MOC_LITERAL(48, 984, 29), // "slot_init_clipFilter_plotForm"
QT_MOC_LITERAL(49, 1014, 11), // "FilterClip*"
QT_MOC_LITERAL(50, 1026, 16), // "slot_refreshView"
QT_MOC_LITERAL(51, 1043, 22), // "QList<PipelineObject*>"
QT_MOC_LITERAL(52, 1066, 13), // "mPipelineObjs"
QT_MOC_LITERAL(53, 1080, 19), // "slot_refreshViewAni"
QT_MOC_LITERAL(54, 1100, 16), // "tep_cur_frame_xh"
QT_MOC_LITERAL(55, 1117, 14), // "slot_saveImage"
QT_MOC_LITERAL(56, 1132, 16), // "slot_saveAnimate"
QT_MOC_LITERAL(57, 1149, 19), // "slot_delPipelineObj"
QT_MOC_LITERAL(58, 1169, 18), // "slot_update_remark"
QT_MOC_LITERAL(59, 1188, 4), // "flag"
QT_MOC_LITERAL(60, 1193, 28), // "slot_update_remark_fontColor"
QT_MOC_LITERAL(61, 1222, 23), // "slot_update_remark_text"
QT_MOC_LITERAL(62, 1246, 23), // "slot_update_planeOrigin"
QT_MOC_LITERAL(63, 1270, 23), // "slot_update_planeNormal"
QT_MOC_LITERAL(64, 1294, 20), // "slot_update_planeVis"
QT_MOC_LITERAL(65, 1315, 19), // "slot_update_opacity"
QT_MOC_LITERAL(66, 1335, 15), // "tep_pipelineObj"
QT_MOC_LITERAL(67, 1351, 17), // "slot_update_color"
QT_MOC_LITERAL(68, 1369, 21), // "slot_update_lineWidth"
QT_MOC_LITERAL(69, 1391, 21), // "slot_update_pointSize"
QT_MOC_LITERAL(70, 1413, 21), // "slot_update_translate"
QT_MOC_LITERAL(71, 1435, 18), // "slot_update_origin"
QT_MOC_LITERAL(72, 1454, 17), // "slot_update_scale"
QT_MOC_LITERAL(73, 1472, 23), // "slot_update_orientation"
QT_MOC_LITERAL(74, 1496, 26), // "slot_update_representation"
QT_MOC_LITERAL(75, 1523, 20), // "slot_update_specular"
QT_MOC_LITERAL(76, 1544, 19), // "slot_update_diffuse"
QT_MOC_LITERAL(77, 1564, 19), // "slot_update_ambient"
QT_MOC_LITERAL(78, 1584, 25), // "slot_update_specularPower"
QT_MOC_LITERAL(79, 1610, 25), // "slot_update_specularColor"
QT_MOC_LITERAL(80, 1636, 22), // "slot_update_solidColor"
QT_MOC_LITERAL(81, 1659, 21), // "slot_update_edgeColor"
QT_MOC_LITERAL(82, 1681, 25), // "slot_update_interpolation"
QT_MOC_LITERAL(83, 1707, 21), // "slot_update_scalarBar"
QT_MOC_LITERAL(84, 1729, 20), // "slot_update_cubeAxes"
QT_MOC_LITERAL(85, 1750, 34), // "slot_update_actor_visible_plo..."
QT_MOC_LITERAL(86, 1785, 11), // "flag_change"
QT_MOC_LITERAL(87, 1797, 28), // "slot_update_plot_pipelineObj"
QT_MOC_LITERAL(88, 1826, 25), // "vtkColorTransferFunction*"
QT_MOC_LITERAL(89, 1852, 21), // "vtkPiecewiseFunction*"
QT_MOC_LITERAL(90, 1874, 25), // "slot_volume_scalarBarEdit"
QT_MOC_LITERAL(91, 1900, 31), // "vtkSmartPointer<vtkLookupTable>"
QT_MOC_LITERAL(92, 1932, 15), // "tep_lookupTable"
QT_MOC_LITERAL(93, 1948, 27), // "slot_update_camera_parallel"
QT_MOC_LITERAL(94, 1976, 7), // "checked"
QT_MOC_LITERAL(95, 1984, 20), // "slot_ImageAndAnimate"
QT_MOC_LITERAL(96, 2005, 26), // "slot_update_UndoReDoButton"
QT_MOC_LITERAL(97, 2032, 21), // "slot_update_cgns_plot"
QT_MOC_LITERAL(98, 2054, 19), // "slot_offPlaneWidget"
QT_MOC_LITERAL(99, 2074, 22), // "slot_finish_cgnsThread"
QT_MOC_LITERAL(100, 2097, 29), // "slot_update_planeCameraNormal"
QT_MOC_LITERAL(101, 2127, 24), // "slot_update_axes_visible"
QT_MOC_LITERAL(102, 2152, 28), // "slot_refreshView_fromMainWin"
QT_MOC_LITERAL(103, 2181, 15), // "slot_cellPicker"
QT_MOC_LITERAL(104, 2197, 16), // "slot_pointPicker"
QT_MOC_LITERAL(105, 2214, 21), // "slot_curvePointPicker"
QT_MOC_LITERAL(106, 2236, 20), // "slot_curveCellPicker"
QT_MOC_LITERAL(107, 2257, 18), // "slot_refreshPicker"
QT_MOC_LITERAL(108, 2276, 21), // "slot_finish_aniThread"
QT_MOC_LITERAL(109, 2298, 17), // "slot_movePosition"
QT_MOC_LITERAL(110, 2316, 7) // "double*"

    },
    "PipelineObjPlotForm\0sig_update_UndoReDoButton\0"
    "\0sig_cgnsAniTimesIcon_status\0"
    "sig_cgns_animnate_times\0sig_finish_aviFile\0"
    "sig_finish_aniThread\0sig_addInfoToConsole\0"
    "infoStr\0sig_treeItem_disable\0"
    "PipelineObject*\0sig_update_runtool_runing\0"
    "sig_update_countAniFrame\0"
    "sig_script_user_custom_refresh_pipelineTree\0"
    "sig_script_refresh_pickData\0"
    "pick_pipelineObj_propData\0pick_Data\0"
    "sig_draw_3d_curve\0QVector<double>\0"
    "sig_update_3d_curve\0sig_pickCellAct_status\0"
    "sig_pickPointAct_status\0"
    "sig_pickAreaCellAct_status\0"
    "sig_pickAreaPointAct_status\0"
    "sig_pickCurvePointAct_status\0"
    "sig_pickCurveCellAct_status\0"
    "sig_script_update_currentObj\0sig_saveImage\0"
    "sig_saveAnimate\0sig_exitSoftWare\0"
    "slot_update_glyphVector\0tep_pipeObj\0"
    "slot_updatePickData\0tep_pickData\0"
    "slot_cameraUndo\0slot_cameraRedo\0"
    "slot_cameraDo\0pos\0slot_restoreInteractor\0"
    "slot_update_cgns_pipelineObj\0pipeObj\0"
    "slot_finish_saveAvi\0slot_runAni\0"
    "slot_stopAni\0slot_stop_update_cgns_pipelineObj\0"
    "slot_change_global_view_prop\0"
    "slot_init_sliceFilter_plotForm\0"
    "FilterSlice*\0slot_init_clipFilter_plotForm\0"
    "FilterClip*\0slot_refreshView\0"
    "QList<PipelineObject*>\0mPipelineObjs\0"
    "slot_refreshViewAni\0tep_cur_frame_xh\0"
    "slot_saveImage\0slot_saveAnimate\0"
    "slot_delPipelineObj\0slot_update_remark\0"
    "flag\0slot_update_remark_fontColor\0"
    "slot_update_remark_text\0slot_update_planeOrigin\0"
    "slot_update_planeNormal\0slot_update_planeVis\0"
    "slot_update_opacity\0tep_pipelineObj\0"
    "slot_update_color\0slot_update_lineWidth\0"
    "slot_update_pointSize\0slot_update_translate\0"
    "slot_update_origin\0slot_update_scale\0"
    "slot_update_orientation\0"
    "slot_update_representation\0"
    "slot_update_specular\0slot_update_diffuse\0"
    "slot_update_ambient\0slot_update_specularPower\0"
    "slot_update_specularColor\0"
    "slot_update_solidColor\0slot_update_edgeColor\0"
    "slot_update_interpolation\0"
    "slot_update_scalarBar\0slot_update_cubeAxes\0"
    "slot_update_actor_visible_plotForm\0"
    "flag_change\0slot_update_plot_pipelineObj\0"
    "vtkColorTransferFunction*\0"
    "vtkPiecewiseFunction*\0slot_volume_scalarBarEdit\0"
    "vtkSmartPointer<vtkLookupTable>\0"
    "tep_lookupTable\0slot_update_camera_parallel\0"
    "checked\0slot_ImageAndAnimate\0"
    "slot_update_UndoReDoButton\0"
    "slot_update_cgns_plot\0slot_offPlaneWidget\0"
    "slot_finish_cgnsThread\0"
    "slot_update_planeCameraNormal\0"
    "slot_update_axes_visible\0"
    "slot_refreshView_fromMainWin\0"
    "slot_cellPicker\0slot_pointPicker\0"
    "slot_curvePointPicker\0slot_curveCellPicker\0"
    "slot_refreshPicker\0slot_finish_aniThread\0"
    "slot_movePosition\0double*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PipelineObjPlotForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      86,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  444,    2, 0x06 /* Public */,
       3,    1,  447,    2, 0x06 /* Public */,
       4,    1,  450,    2, 0x06 /* Public */,
       5,    1,  453,    2, 0x06 /* Public */,
       6,    1,  456,    2, 0x06 /* Public */,
       7,    1,  459,    2, 0x06 /* Public */,
       9,    1,  462,    2, 0x06 /* Public */,
      11,    1,  465,    2, 0x06 /* Public */,
      12,    2,  468,    2, 0x06 /* Public */,
      13,    0,  473,    2, 0x06 /* Public */,
      14,    1,  474,    2, 0x06 /* Public */,
      17,    2,  477,    2, 0x06 /* Public */,
      19,    4,  482,    2, 0x06 /* Public */,
      20,    1,  491,    2, 0x06 /* Public */,
      21,    1,  494,    2, 0x06 /* Public */,
      22,    1,  497,    2, 0x06 /* Public */,
      23,    1,  500,    2, 0x06 /* Public */,
      24,    1,  503,    2, 0x06 /* Public */,
      25,    1,  506,    2, 0x06 /* Public */,
      26,    1,  509,    2, 0x06 /* Public */,
      27,    0,  512,    2, 0x06 /* Public */,
      28,    0,  513,    2, 0x06 /* Public */,
      29,    0,  514,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  515,    2, 0x0a /* Public */,
      32,    1,  518,    2, 0x0a /* Public */,
      34,    0,  521,    2, 0x0a /* Public */,
      35,    0,  522,    2, 0x0a /* Public */,
      36,    1,  523,    2, 0x0a /* Public */,
      38,    0,  526,    2, 0x0a /* Public */,
      39,    1,  527,    2, 0x0a /* Public */,
      41,    0,  530,    2, 0x0a /* Public */,
      42,    0,  531,    2, 0x0a /* Public */,
      43,    0,  532,    2, 0x0a /* Public */,
      44,    0,  533,    2, 0x0a /* Public */,
      45,    0,  534,    2, 0x0a /* Public */,
      46,    1,  535,    2, 0x0a /* Public */,
      48,    1,  538,    2, 0x0a /* Public */,
      50,    1,  541,    2, 0x0a /* Public */,
      53,    1,  544,    2, 0x0a /* Public */,
      55,    0,  547,    2, 0x0a /* Public */,
      56,    0,  548,    2, 0x0a /* Public */,
      57,    1,  549,    2, 0x0a /* Public */,
      58,    1,  552,    2, 0x0a /* Public */,
      60,    0,  555,    2, 0x0a /* Public */,
      61,    0,  556,    2, 0x0a /* Public */,
      62,    1,  557,    2, 0x0a /* Public */,
      63,    1,  560,    2, 0x0a /* Public */,
      64,    1,  563,    2, 0x0a /* Public */,
      65,    1,  566,    2, 0x0a /* Public */,
      67,    1,  569,    2, 0x0a /* Public */,
      68,    1,  572,    2, 0x0a /* Public */,
      69,    1,  575,    2, 0x0a /* Public */,
      70,    1,  578,    2, 0x0a /* Public */,
      71,    1,  581,    2, 0x0a /* Public */,
      72,    1,  584,    2, 0x0a /* Public */,
      73,    1,  587,    2, 0x0a /* Public */,
      74,    1,  590,    2, 0x0a /* Public */,
      75,    1,  593,    2, 0x0a /* Public */,
      76,    1,  596,    2, 0x0a /* Public */,
      77,    1,  599,    2, 0x0a /* Public */,
      78,    1,  602,    2, 0x0a /* Public */,
      79,    1,  605,    2, 0x0a /* Public */,
      80,    1,  608,    2, 0x0a /* Public */,
      81,    1,  611,    2, 0x0a /* Public */,
      82,    1,  614,    2, 0x0a /* Public */,
      83,    1,  617,    2, 0x0a /* Public */,
      84,    1,  620,    2, 0x0a /* Public */,
      85,    2,  623,    2, 0x0a /* Public */,
      87,    3,  628,    2, 0x0a /* Public */,
      90,    2,  635,    2, 0x0a /* Public */,
      93,    1,  640,    2, 0x0a /* Public */,
      95,    0,  643,    2, 0x08 /* Private */,
      96,    1,  644,    2, 0x08 /* Private */,
      97,    2,  647,    2, 0x08 /* Private */,
      98,    1,  652,    2, 0x08 /* Private */,
      99,    1,  655,    2, 0x08 /* Private */,
     100,    1,  658,    2, 0x08 /* Private */,
     101,    1,  661,    2, 0x08 /* Private */,
     102,    1,  664,    2, 0x08 /* Private */,
     103,    0,  667,    2, 0x08 /* Private */,
     104,    0,  668,    2, 0x08 /* Private */,
     105,    0,  669,    2, 0x08 /* Private */,
     106,    0,  670,    2, 0x08 /* Private */,
     107,    0,  671,    2, 0x08 /* Private */,
     108,    1,  672,    2, 0x08 /* Private */,
     109,    1,  675,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   31,
    QMetaType::Void, 0x80000000 | 15,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   40,
    QMetaType::Void, 0x80000000 | 49,   40,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   40,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10,   66,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   40,   86,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 88, 0x80000000 | 89,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 91,   31,   92,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 10,   40,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Bool,   94,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, 0x80000000 | 110,   37,

       0        // eod
};

void PipelineObjPlotForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PipelineObjPlotForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_update_UndoReDoButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sig_cgnsAniTimesIcon_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sig_cgns_animnate_times((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sig_finish_aviFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sig_finish_aniThread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sig_addInfoToConsole((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sig_treeItem_disable((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 7: _t->sig_update_runtool_runing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->sig_update_countAniFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->sig_script_user_custom_refresh_pipelineTree(); break;
        case 10: _t->sig_script_refresh_pickData((*reinterpret_cast< pick_pipelineObj_propData(*)>(_a[1]))); break;
        case 11: _t->sig_draw_3d_curve((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        case 12: _t->sig_update_3d_curve((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 13: _t->sig_pickCellAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->sig_pickPointAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->sig_pickAreaCellAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->sig_pickAreaPointAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->sig_pickCurvePointAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->sig_pickCurveCellAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->sig_script_update_currentObj((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 20: _t->sig_saveImage(); break;
        case 21: _t->sig_saveAnimate(); break;
        case 22: _t->sig_exitSoftWare(); break;
        case 23: _t->slot_update_glyphVector((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 24: _t->slot_updatePickData((*reinterpret_cast< pick_pipelineObj_propData(*)>(_a[1]))); break;
        case 25: _t->slot_cameraUndo(); break;
        case 26: _t->slot_cameraRedo(); break;
        case 27: _t->slot_cameraDo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->slot_restoreInteractor(); break;
        case 29: _t->slot_update_cgns_pipelineObj((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 30: _t->slot_finish_saveAvi(); break;
        case 31: _t->slot_runAni(); break;
        case 32: _t->slot_stopAni(); break;
        case 33: _t->slot_stop_update_cgns_pipelineObj(); break;
        case 34: _t->slot_change_global_view_prop(); break;
        case 35: _t->slot_init_sliceFilter_plotForm((*reinterpret_cast< FilterSlice*(*)>(_a[1]))); break;
        case 36: _t->slot_init_clipFilter_plotForm((*reinterpret_cast< FilterClip*(*)>(_a[1]))); break;
        case 37: _t->slot_refreshView((*reinterpret_cast< QList<PipelineObject*>(*)>(_a[1]))); break;
        case 38: _t->slot_refreshViewAni((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->slot_saveImage(); break;
        case 40: _t->slot_saveAnimate(); break;
        case 41: _t->slot_delPipelineObj((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 42: _t->slot_update_remark((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->slot_update_remark_fontColor(); break;
        case 44: _t->slot_update_remark_text(); break;
        case 45: _t->slot_update_planeOrigin((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 46: _t->slot_update_planeNormal((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 47: _t->slot_update_planeVis((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 48: _t->slot_update_opacity((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 49: _t->slot_update_color((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 50: _t->slot_update_lineWidth((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 51: _t->slot_update_pointSize((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 52: _t->slot_update_translate((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 53: _t->slot_update_origin((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 54: _t->slot_update_scale((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 55: _t->slot_update_orientation((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 56: _t->slot_update_representation((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 57: _t->slot_update_specular((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 58: _t->slot_update_diffuse((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 59: _t->slot_update_ambient((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 60: _t->slot_update_specularPower((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 61: _t->slot_update_specularColor((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 62: _t->slot_update_solidColor((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 63: _t->slot_update_edgeColor((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 64: _t->slot_update_interpolation((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 65: _t->slot_update_scalarBar((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 66: _t->slot_update_cubeAxes((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 67: _t->slot_update_actor_visible_plotForm((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 68: _t->slot_update_plot_pipelineObj((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< vtkColorTransferFunction*(*)>(_a[2])),(*reinterpret_cast< vtkPiecewiseFunction*(*)>(_a[3]))); break;
        case 69: _t->slot_volume_scalarBarEdit((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< vtkSmartPointer<vtkLookupTable>(*)>(_a[2]))); break;
        case 70: _t->slot_update_camera_parallel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->slot_ImageAndAnimate(); break;
        case 72: _t->slot_update_UndoReDoButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: _t->slot_update_cgns_plot((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 74: _t->slot_offPlaneWidget((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 75: _t->slot_finish_cgnsThread((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 76: _t->slot_update_planeCameraNormal((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 77: _t->slot_update_axes_visible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: _t->slot_refreshView_fromMainWin((*reinterpret_cast< QList<PipelineObject*>(*)>(_a[1]))); break;
        case 79: _t->slot_cellPicker(); break;
        case 80: _t->slot_pointPicker(); break;
        case 81: _t->slot_curvePointPicker(); break;
        case 82: _t->slot_curveCellPicker(); break;
        case 83: _t->slot_refreshPicker(); break;
        case 84: _t->slot_finish_aniThread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->slot_movePosition((*reinterpret_cast< double*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FilterSlice* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FilterClip* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<PipelineObject*> >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<PipelineObject*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PipelineObjPlotForm::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_update_UndoReDoButton)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_cgnsAniTimesIcon_status)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_cgns_animnate_times)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_finish_aviFile)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_finish_aniThread)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_addInfoToConsole)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_treeItem_disable)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_update_runtool_runing)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_update_countAniFrame)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_script_user_custom_refresh_pipelineTree)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(pick_pipelineObj_propData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_script_refresh_pickData)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(QString , QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_draw_3d_curve)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(int , int , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_update_3d_curve)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_pickCellAct_status)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_pickPointAct_status)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_pickAreaCellAct_status)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_pickAreaPointAct_status)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_pickCurvePointAct_status)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_pickCurveCellAct_status)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_script_update_currentObj)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_saveImage)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_saveAnimate)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (PipelineObjPlotForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PipelineObjPlotForm::sig_exitSoftWare)) {
                *result = 22;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PipelineObjPlotForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PipelineObjPlotForm.data,
    qt_meta_data_PipelineObjPlotForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PipelineObjPlotForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PipelineObjPlotForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PipelineObjPlotForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PipelineObjPlotForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 86)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 86;
    }
    return _id;
}

// SIGNAL 0
void PipelineObjPlotForm::sig_update_UndoReDoButton(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PipelineObjPlotForm::sig_cgnsAniTimesIcon_status(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PipelineObjPlotForm::sig_cgns_animnate_times(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PipelineObjPlotForm::sig_finish_aviFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PipelineObjPlotForm::sig_finish_aniThread(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PipelineObjPlotForm::sig_addInfoToConsole(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PipelineObjPlotForm::sig_treeItem_disable(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PipelineObjPlotForm::sig_update_runtool_runing(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PipelineObjPlotForm::sig_update_countAniFrame(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PipelineObjPlotForm::sig_script_user_custom_refresh_pipelineTree()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PipelineObjPlotForm::sig_script_refresh_pickData(pick_pipelineObj_propData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PipelineObjPlotForm::sig_draw_3d_curve(QString _t1, QVector<double> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PipelineObjPlotForm::sig_update_3d_curve(int _t1, int _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PipelineObjPlotForm::sig_pickCellAct_status(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PipelineObjPlotForm::sig_pickPointAct_status(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void PipelineObjPlotForm::sig_pickAreaCellAct_status(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PipelineObjPlotForm::sig_pickAreaPointAct_status(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PipelineObjPlotForm::sig_pickCurvePointAct_status(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PipelineObjPlotForm::sig_pickCurveCellAct_status(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void PipelineObjPlotForm::sig_script_update_currentObj(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void PipelineObjPlotForm::sig_saveImage()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void PipelineObjPlotForm::sig_saveAnimate()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void PipelineObjPlotForm::sig_exitSoftWare()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
