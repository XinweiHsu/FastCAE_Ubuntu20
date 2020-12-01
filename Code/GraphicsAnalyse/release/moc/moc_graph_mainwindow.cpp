/****************************************************************************
** Meta object code from reading C++ file 'graph_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../graph_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graph_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_graph_MainWindow_t {
    QByteArrayData data[177];
    char stringdata0[3696];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_graph_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_graph_MainWindow_t qt_meta_stringdata_graph_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "graph_MainWindow"
QT_MOC_LITERAL(1, 17, 20), // "sig_addInfoToConsole"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "sig_finish_aviFile"
QT_MOC_LITERAL(4, 58, 27), // "sig_refreshView_fromMainWin"
QT_MOC_LITERAL(5, 86, 22), // "QList<PipelineObject*>"
QT_MOC_LITERAL(6, 109, 19), // "sig_update_propForm"
QT_MOC_LITERAL(7, 129, 13), // "sig_saveToPng"
QT_MOC_LITERAL(8, 143, 22), // "sig_start_animate_plot"
QT_MOC_LITERAL(9, 166, 21), // "sig_stop_animate_plot"
QT_MOC_LITERAL(10, 188, 10), // "sig_runAni"
QT_MOC_LITERAL(11, 199, 11), // "sig_stopAni"
QT_MOC_LITERAL(12, 211, 14), // "sig_execScript"
QT_MOC_LITERAL(13, 226, 41), // "sig_script_user_custom_add_pi..."
QT_MOC_LITERAL(14, 268, 15), // "PipelineObject*"
QT_MOC_LITERAL(15, 284, 15), // "tep_pipelineObj"
QT_MOC_LITERAL(16, 300, 41), // "sig_script_user_custom_del_pi..."
QT_MOC_LITERAL(17, 342, 14), // "pipelineObj_id"
QT_MOC_LITERAL(18, 357, 43), // "sig_script_user_custom_refres..."
QT_MOC_LITERAL(19, 401, 24), // "sig_script_countAniFrame"
QT_MOC_LITERAL(20, 426, 31), // "sig_script_creatPickCurveWidget"
QT_MOC_LITERAL(21, 458, 12), // "QDockWidget*"
QT_MOC_LITERAL(22, 471, 35), // "sig_script_creatScalarBarEdit..."
QT_MOC_LITERAL(23, 507, 20), // "sig_script_saveImage"
QT_MOC_LITERAL(24, 528, 13), // "sig_RunScript"
QT_MOC_LITERAL(25, 542, 19), // "sig_python_openFile"
QT_MOC_LITERAL(26, 562, 22), // "sig_python_FilterSlice"
QT_MOC_LITERAL(27, 585, 21), // "sig_python_FilterClip"
QT_MOC_LITERAL(28, 607, 24), // "sig_python_FilterContour"
QT_MOC_LITERAL(29, 632, 23), // "sig_python_FilterVector"
QT_MOC_LITERAL(30, 656, 27), // "sig_python_FilterReflection"
QT_MOC_LITERAL(31, 684, 27), // "sig_python_FilterCalculator"
QT_MOC_LITERAL(32, 712, 23), // "sig_python_FilterSmooth"
QT_MOC_LITERAL(33, 736, 27), // "sig_python_FilterStreamLine"
QT_MOC_LITERAL(34, 764, 26), // "sig_python_Camera_Position"
QT_MOC_LITERAL(35, 791, 9), // "double[3]"
QT_MOC_LITERAL(36, 801, 3), // "pos"
QT_MOC_LITERAL(37, 805, 28), // "sig_python_Camera_FocalPoint"
QT_MOC_LITERAL(38, 834, 10), // "focalPoint"
QT_MOC_LITERAL(39, 845, 31), // "sig_python_Camera_ClippingRange"
QT_MOC_LITERAL(40, 877, 9), // "double[2]"
QT_MOC_LITERAL(41, 887, 13), // "clippingRange"
QT_MOC_LITERAL(42, 901, 24), // "sig_python_Camera_ViewUp"
QT_MOC_LITERAL(43, 926, 6), // "viewup"
QT_MOC_LITERAL(44, 933, 27), // "sig_python_Camera_ViewAngle"
QT_MOC_LITERAL(45, 961, 5), // "angle"
QT_MOC_LITERAL(46, 967, 31), // "sig_python_Camera_ParalellScale"
QT_MOC_LITERAL(47, 999, 5), // "scale"
QT_MOC_LITERAL(48, 1005, 22), // "sig_python_Camera_Zoom"
QT_MOC_LITERAL(49, 1028, 4), // "zoom"
QT_MOC_LITERAL(50, 1033, 23), // "sig_python_Camera_Reset"
QT_MOC_LITERAL(51, 1057, 26), // "sig_python_scalarBar_title"
QT_MOC_LITERAL(52, 1084, 29), // "sig_python_scalarBar_fontSize"
QT_MOC_LITERAL(53, 1114, 30), // "sig_python_scalarBar_numLables"
QT_MOC_LITERAL(54, 1145, 20), // "sig_python_resetView"
QT_MOC_LITERAL(55, 1166, 21), // "sig_python_view_XPlus"
QT_MOC_LITERAL(56, 1188, 21), // "sig_python_view_YPlus"
QT_MOC_LITERAL(57, 1210, 21), // "sig_python_view_ZPlus"
QT_MOC_LITERAL(58, 1232, 22), // "sig_python_view_XMinus"
QT_MOC_LITERAL(59, 1255, 22), // "sig_python_view_YMinus"
QT_MOC_LITERAL(60, 1278, 22), // "sig_python_view_ZMinus"
QT_MOC_LITERAL(61, 1301, 23), // "sig_python_exitSoftWare"
QT_MOC_LITERAL(62, 1325, 22), // "sig_python_setPlotSize"
QT_MOC_LITERAL(63, 1348, 4), // "int*"
QT_MOC_LITERAL(64, 1353, 19), // "script_exitSoftWare"
QT_MOC_LITERAL(65, 1373, 22), // "script_ReturnToOldSize"
QT_MOC_LITERAL(66, 1396, 27), // "script_clearAllPipelineObjs"
QT_MOC_LITERAL(67, 1424, 19), // "slot_LoadDataSource"
QT_MOC_LITERAL(68, 1444, 8), // "tep_file"
QT_MOC_LITERAL(69, 1453, 8), // "fileList"
QT_MOC_LITERAL(70, 1462, 11), // "tep_file_xh"
QT_MOC_LITERAL(71, 1474, 12), // "slot_animate"
QT_MOC_LITERAL(72, 1487, 27), // "slot_load_scalarBarEditForm"
QT_MOC_LITERAL(73, 1515, 11), // "tep_pipeObj"
QT_MOC_LITERAL(74, 1527, 15), // "slot_setChinese"
QT_MOC_LITERAL(75, 1543, 15), // "slot_setEnglish"
QT_MOC_LITERAL(76, 1559, 14), // "ChangeLanguage"
QT_MOC_LITERAL(77, 1574, 4), // "lang"
QT_MOC_LITERAL(78, 1579, 27), // "slot_update_scalarBar_title"
QT_MOC_LITERAL(79, 1607, 7), // "colName"
QT_MOC_LITERAL(80, 1615, 7), // "m_title"
QT_MOC_LITERAL(81, 1623, 30), // "slot_update_scalarBar_fontSize"
QT_MOC_LITERAL(82, 1654, 10), // "m_fontSize"
QT_MOC_LITERAL(83, 1665, 31), // "slot_update_scalarBar_numLables"
QT_MOC_LITERAL(84, 1697, 11), // "m_numLables"
QT_MOC_LITERAL(85, 1709, 23), // "slot_script_setPlotSize"
QT_MOC_LITERAL(86, 1733, 3), // "val"
QT_MOC_LITERAL(87, 1737, 26), // "slot_update_UndoReDoButton"
QT_MOC_LITERAL(88, 1764, 29), // "slot_ani_fileInterval_spinBox"
QT_MOC_LITERAL(89, 1794, 31), // "slot_ani_combine_model_comboBox"
QT_MOC_LITERAL(90, 1826, 28), // "slot_cgnsAniTimesIcon_status"
QT_MOC_LITERAL(91, 1855, 44), // "slot_script_user_custom_refre..."
QT_MOC_LITERAL(92, 1900, 25), // "slot_objProp_scalarBarAct"
QT_MOC_LITERAL(93, 1926, 26), // "slot_objProp_solidColorAct"
QT_MOC_LITERAL(94, 1953, 20), // "slot_cgnsAniTimesAct"
QT_MOC_LITERAL(95, 1974, 22), // "slot_objProp_exportAct"
QT_MOC_LITERAL(96, 1997, 43), // "slot_objProp_presentCmb_curre..."
QT_MOC_LITERAL(97, 2041, 42), // "slot_objProp_columnCmb_curren..."
QT_MOC_LITERAL(98, 2084, 44), // "slot_objProp_GlyphVector_curr..."
QT_MOC_LITERAL(99, 2129, 14), // "slot_resetView"
QT_MOC_LITERAL(100, 2144, 20), // "slot_viewInteraction"
QT_MOC_LITERAL(101, 2165, 7), // "checked"
QT_MOC_LITERAL(102, 2173, 15), // "slot_cameraUndo"
QT_MOC_LITERAL(103, 2189, 15), // "slot_cameraRedo"
QT_MOC_LITERAL(104, 2205, 20), // "slot_view_rubberZoom"
QT_MOC_LITERAL(105, 2226, 14), // "slot_actorMove"
QT_MOC_LITERAL(106, 2241, 16), // "slot_actorRotate"
QT_MOC_LITERAL(107, 2258, 17), // "slot_actorRotateX"
QT_MOC_LITERAL(108, 2276, 17), // "slot_actorRotateY"
QT_MOC_LITERAL(109, 2294, 17), // "slot_actorRotateZ"
QT_MOC_LITERAL(110, 2312, 15), // "slot_view_XPlus"
QT_MOC_LITERAL(111, 2328, 15), // "slot_view_YPlus"
QT_MOC_LITERAL(112, 2344, 15), // "slot_view_ZPlus"
QT_MOC_LITERAL(113, 2360, 16), // "slot_view_XMinus"
QT_MOC_LITERAL(114, 2377, 16), // "slot_view_YMinus"
QT_MOC_LITERAL(115, 2394, 16), // "slot_view_ZMinus"
QT_MOC_LITERAL(116, 2411, 14), // "slot_saveImage"
QT_MOC_LITERAL(117, 2426, 26), // "slot_runAni_fromAniSetting"
QT_MOC_LITERAL(118, 2453, 27), // "slot_changeCurFrame_spinBox"
QT_MOC_LITERAL(119, 2481, 7), // "tep_val"
QT_MOC_LITERAL(120, 2489, 25), // "slot_update_countAniFrame"
QT_MOC_LITERAL(121, 2515, 24), // "slot_update_pipelineObjs"
QT_MOC_LITERAL(122, 2540, 17), // "slot_animateFirst"
QT_MOC_LITERAL(123, 2558, 16), // "slot_animateLast"
QT_MOC_LITERAL(124, 2575, 15), // "slot_animateEnd"
QT_MOC_LITERAL(125, 2591, 16), // "slot_animateNext"
QT_MOC_LITERAL(126, 2608, 21), // "slot_finish_aniThread"
QT_MOC_LITERAL(127, 2630, 22), // "slot_update_aniToolBar"
QT_MOC_LITERAL(128, 2653, 25), // "slot_update_filterToolBar"
QT_MOC_LITERAL(129, 2679, 31), // "slot_update_pipelineObj_toolBar"
QT_MOC_LITERAL(130, 2711, 34), // "slot_update_toolBar_objProp_c..."
QT_MOC_LITERAL(131, 2746, 9), // "tep_index"
QT_MOC_LITERAL(132, 2756, 46), // "slot_update_toolBar_objProp_c..."
QT_MOC_LITERAL(133, 2803, 4), // "flag"
QT_MOC_LITERAL(134, 2808, 49), // "slot_update_toolBar_objProp_c..."
QT_MOC_LITERAL(135, 2858, 5), // "index"
QT_MOC_LITERAL(136, 2864, 35), // "slot_update_toolBar_objProp_p..."
QT_MOC_LITERAL(137, 2900, 45), // "slot_update_toolBar_objProp_c..."
QT_MOC_LITERAL(138, 2946, 31), // "slot_refreshView_fromPropWidget"
QT_MOC_LITERAL(139, 2978, 19), // "slot_delPipelineObj"
QT_MOC_LITERAL(140, 2998, 7), // "pipeObj"
QT_MOC_LITERAL(141, 3006, 16), // "slot_showHelpPDF"
QT_MOC_LITERAL(142, 3023, 16), // "slot_showToolBar"
QT_MOC_LITERAL(143, 3040, 16), // "slot_showMenuBar"
QT_MOC_LITERAL(144, 3057, 18), // "slot_showStatusBar"
QT_MOC_LITERAL(145, 3076, 20), // "slot_showAboutDialog"
QT_MOC_LITERAL(146, 3097, 11), // "slot_showVR"
QT_MOC_LITERAL(147, 3109, 7), // "newFile"
QT_MOC_LITERAL(148, 3117, 8), // "openFile"
QT_MOC_LITERAL(149, 3126, 10), // "editScript"
QT_MOC_LITERAL(150, 3137, 9), // "runScript"
QT_MOC_LITERAL(151, 3147, 14), // "saveAniSetting"
QT_MOC_LITERAL(152, 3162, 21), // "slot_adjust_addFilter"
QT_MOC_LITERAL(153, 3184, 18), // "slot_contourFilter"
QT_MOC_LITERAL(154, 3203, 15), // "slot_clipFilter"
QT_MOC_LITERAL(155, 3219, 16), // "slot_sliceFilter"
QT_MOC_LITERAL(156, 3236, 16), // "slot_glyphFilter"
QT_MOC_LITERAL(157, 3253, 21), // "slot_reflectionFilter"
QT_MOC_LITERAL(158, 3275, 21), // "slot_calculatorFilter"
QT_MOC_LITERAL(159, 3297, 17), // "slot_smoothFilter"
QT_MOC_LITERAL(160, 3315, 21), // "slot_streamLineFilter"
QT_MOC_LITERAL(161, 3337, 12), // "exitSoftware"
QT_MOC_LITERAL(162, 3350, 17), // "slot_pickPointAct"
QT_MOC_LITERAL(163, 3368, 16), // "slot_pickCellAct"
QT_MOC_LITERAL(164, 3385, 20), // "slot_pickAreaCellAct"
QT_MOC_LITERAL(165, 3406, 22), // "slot_pickCurvePointAct"
QT_MOC_LITERAL(166, 3429, 21), // "slot_pickCurveCellAct"
QT_MOC_LITERAL(167, 3451, 21), // "slot_pickAreaPointAct"
QT_MOC_LITERAL(168, 3473, 17), // "slot_pickClearAct"
QT_MOC_LITERAL(169, 3491, 23), // "slot_pickCellAct_status"
QT_MOC_LITERAL(170, 3515, 6), // "status"
QT_MOC_LITERAL(171, 3522, 24), // "slot_pickPointAct_status"
QT_MOC_LITERAL(172, 3547, 27), // "slot_pickAreaCellAct_status"
QT_MOC_LITERAL(173, 3575, 28), // "slot_pickAreaPointAct_status"
QT_MOC_LITERAL(174, 3604, 29), // "slot_pickCurvePointAct_status"
QT_MOC_LITERAL(175, 3634, 28), // "slot_pickCurveCellAct_status"
QT_MOC_LITERAL(176, 3663, 32) // "slot_script_clearAllPipelineObjs"

    },
    "graph_MainWindow\0sig_addInfoToConsole\0"
    "\0sig_finish_aviFile\0sig_refreshView_fromMainWin\0"
    "QList<PipelineObject*>\0sig_update_propForm\0"
    "sig_saveToPng\0sig_start_animate_plot\0"
    "sig_stop_animate_plot\0sig_runAni\0"
    "sig_stopAni\0sig_execScript\0"
    "sig_script_user_custom_add_pipelineObject\0"
    "PipelineObject*\0tep_pipelineObj\0"
    "sig_script_user_custom_del_pipelineObject\0"
    "pipelineObj_id\0"
    "sig_script_user_custom_refresh_pipelineTree\0"
    "sig_script_countAniFrame\0"
    "sig_script_creatPickCurveWidget\0"
    "QDockWidget*\0sig_script_creatScalarBarEditWidget\0"
    "sig_script_saveImage\0sig_RunScript\0"
    "sig_python_openFile\0sig_python_FilterSlice\0"
    "sig_python_FilterClip\0sig_python_FilterContour\0"
    "sig_python_FilterVector\0"
    "sig_python_FilterReflection\0"
    "sig_python_FilterCalculator\0"
    "sig_python_FilterSmooth\0"
    "sig_python_FilterStreamLine\0"
    "sig_python_Camera_Position\0double[3]\0"
    "pos\0sig_python_Camera_FocalPoint\0"
    "focalPoint\0sig_python_Camera_ClippingRange\0"
    "double[2]\0clippingRange\0"
    "sig_python_Camera_ViewUp\0viewup\0"
    "sig_python_Camera_ViewAngle\0angle\0"
    "sig_python_Camera_ParalellScale\0scale\0"
    "sig_python_Camera_Zoom\0zoom\0"
    "sig_python_Camera_Reset\0"
    "sig_python_scalarBar_title\0"
    "sig_python_scalarBar_fontSize\0"
    "sig_python_scalarBar_numLables\0"
    "sig_python_resetView\0sig_python_view_XPlus\0"
    "sig_python_view_YPlus\0sig_python_view_ZPlus\0"
    "sig_python_view_XMinus\0sig_python_view_YMinus\0"
    "sig_python_view_ZMinus\0sig_python_exitSoftWare\0"
    "sig_python_setPlotSize\0int*\0"
    "script_exitSoftWare\0script_ReturnToOldSize\0"
    "script_clearAllPipelineObjs\0"
    "slot_LoadDataSource\0tep_file\0fileList\0"
    "tep_file_xh\0slot_animate\0"
    "slot_load_scalarBarEditForm\0tep_pipeObj\0"
    "slot_setChinese\0slot_setEnglish\0"
    "ChangeLanguage\0lang\0slot_update_scalarBar_title\0"
    "colName\0m_title\0slot_update_scalarBar_fontSize\0"
    "m_fontSize\0slot_update_scalarBar_numLables\0"
    "m_numLables\0slot_script_setPlotSize\0"
    "val\0slot_update_UndoReDoButton\0"
    "slot_ani_fileInterval_spinBox\0"
    "slot_ani_combine_model_comboBox\0"
    "slot_cgnsAniTimesIcon_status\0"
    "slot_script_user_custom_refresh_pipelineTree\0"
    "slot_objProp_scalarBarAct\0"
    "slot_objProp_solidColorAct\0"
    "slot_cgnsAniTimesAct\0slot_objProp_exportAct\0"
    "slot_objProp_presentCmb_currentIndexChanged\0"
    "slot_objProp_columnCmb_currentIndexChanged\0"
    "slot_objProp_GlyphVector_currentIndexChanged\0"
    "slot_resetView\0slot_viewInteraction\0"
    "checked\0slot_cameraUndo\0slot_cameraRedo\0"
    "slot_view_rubberZoom\0slot_actorMove\0"
    "slot_actorRotate\0slot_actorRotateX\0"
    "slot_actorRotateY\0slot_actorRotateZ\0"
    "slot_view_XPlus\0slot_view_YPlus\0"
    "slot_view_ZPlus\0slot_view_XMinus\0"
    "slot_view_YMinus\0slot_view_ZMinus\0"
    "slot_saveImage\0slot_runAni_fromAniSetting\0"
    "slot_changeCurFrame_spinBox\0tep_val\0"
    "slot_update_countAniFrame\0"
    "slot_update_pipelineObjs\0slot_animateFirst\0"
    "slot_animateLast\0slot_animateEnd\0"
    "slot_animateNext\0slot_finish_aniThread\0"
    "slot_update_aniToolBar\0slot_update_filterToolBar\0"
    "slot_update_pipelineObj_toolBar\0"
    "slot_update_toolBar_objProp_column\0"
    "tep_index\0slot_update_toolBar_objProp_column_GlyphVector\0"
    "flag\0slot_update_toolBar_objProp_column_GlyphVectorXYZ\0"
    "index\0slot_update_toolBar_objProp_present\0"
    "slot_update_toolBar_objProp_column_Calculator\0"
    "slot_refreshView_fromPropWidget\0"
    "slot_delPipelineObj\0pipeObj\0"
    "slot_showHelpPDF\0slot_showToolBar\0"
    "slot_showMenuBar\0slot_showStatusBar\0"
    "slot_showAboutDialog\0slot_showVR\0"
    "newFile\0openFile\0editScript\0runScript\0"
    "saveAniSetting\0slot_adjust_addFilter\0"
    "slot_contourFilter\0slot_clipFilter\0"
    "slot_sliceFilter\0slot_glyphFilter\0"
    "slot_reflectionFilter\0slot_calculatorFilter\0"
    "slot_smoothFilter\0slot_streamLineFilter\0"
    "exitSoftware\0slot_pickPointAct\0"
    "slot_pickCellAct\0slot_pickAreaCellAct\0"
    "slot_pickCurvePointAct\0slot_pickCurveCellAct\0"
    "slot_pickAreaPointAct\0slot_pickClearAct\0"
    "slot_pickCellAct_status\0status\0"
    "slot_pickPointAct_status\0"
    "slot_pickAreaCellAct_status\0"
    "slot_pickAreaPointAct_status\0"
    "slot_pickCurvePointAct_status\0"
    "slot_pickCurveCellAct_status\0"
    "slot_script_clearAllPipelineObjs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_graph_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     143,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      47,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  729,    2, 0x06 /* Public */,
       3,    1,  732,    2, 0x06 /* Public */,
       4,    1,  735,    2, 0x06 /* Public */,
       6,    2,  738,    2, 0x06 /* Public */,
       7,    0,  743,    2, 0x06 /* Public */,
       8,    1,  744,    2, 0x06 /* Public */,
       9,    0,  747,    2, 0x06 /* Public */,
      10,    0,  748,    2, 0x06 /* Public */,
      11,    0,  749,    2, 0x06 /* Public */,
      12,    1,  750,    2, 0x06 /* Public */,
      13,    1,  753,    2, 0x06 /* Public */,
      16,    1,  756,    2, 0x06 /* Public */,
      18,    0,  759,    2, 0x06 /* Public */,
      19,    1,  760,    2, 0x06 /* Public */,
      20,    1,  763,    2, 0x06 /* Public */,
      22,    1,  766,    2, 0x06 /* Public */,
      23,    0,  769,    2, 0x06 /* Public */,
      24,    1,  770,    2, 0x06 /* Public */,
      25,    1,  773,    2, 0x06 /* Public */,
      26,    1,  776,    2, 0x06 /* Public */,
      27,    1,  779,    2, 0x06 /* Public */,
      28,    1,  782,    2, 0x06 /* Public */,
      29,    1,  785,    2, 0x06 /* Public */,
      30,    1,  788,    2, 0x06 /* Public */,
      31,    1,  791,    2, 0x06 /* Public */,
      32,    1,  794,    2, 0x06 /* Public */,
      33,    1,  797,    2, 0x06 /* Public */,
      34,    1,  800,    2, 0x06 /* Public */,
      37,    1,  803,    2, 0x06 /* Public */,
      39,    1,  806,    2, 0x06 /* Public */,
      42,    1,  809,    2, 0x06 /* Public */,
      44,    1,  812,    2, 0x06 /* Public */,
      46,    1,  815,    2, 0x06 /* Public */,
      48,    1,  818,    2, 0x06 /* Public */,
      50,    0,  821,    2, 0x06 /* Public */,
      51,    3,  822,    2, 0x06 /* Public */,
      52,    3,  829,    2, 0x06 /* Public */,
      53,    3,  836,    2, 0x06 /* Public */,
      54,    0,  843,    2, 0x06 /* Public */,
      55,    0,  844,    2, 0x06 /* Public */,
      56,    0,  845,    2, 0x06 /* Public */,
      57,    0,  846,    2, 0x06 /* Public */,
      58,    0,  847,    2, 0x06 /* Public */,
      59,    0,  848,    2, 0x06 /* Public */,
      60,    0,  849,    2, 0x06 /* Public */,
      61,    0,  850,    2, 0x06 /* Public */,
      62,    1,  851,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      64,    0,  854,    2, 0x0a /* Public */,
      65,    0,  855,    2, 0x0a /* Public */,
      66,    0,  856,    2, 0x0a /* Public */,
      67,    3,  857,    2, 0x0a /* Public */,
      71,    0,  864,    2, 0x0a /* Public */,
      72,    1,  865,    2, 0x0a /* Public */,
      74,    0,  868,    2, 0x0a /* Public */,
      75,    0,  869,    2, 0x0a /* Public */,
      76,    1,  870,    2, 0x0a /* Public */,
      78,    3,  873,    2, 0x0a /* Public */,
      81,    3,  880,    2, 0x0a /* Public */,
      83,    3,  887,    2, 0x0a /* Public */,
      85,    1,  894,    2, 0x08 /* Private */,
      87,    1,  897,    2, 0x08 /* Private */,
      88,    1,  900,    2, 0x08 /* Private */,
      89,    1,  903,    2, 0x08 /* Private */,
      90,    1,  906,    2, 0x08 /* Private */,
      91,    0,  909,    2, 0x08 /* Private */,
      92,    0,  910,    2, 0x08 /* Private */,
      93,    0,  911,    2, 0x08 /* Private */,
      94,    0,  912,    2, 0x08 /* Private */,
      95,    0,  913,    2, 0x08 /* Private */,
      96,    1,  914,    2, 0x08 /* Private */,
      97,    1,  917,    2, 0x08 /* Private */,
      98,    1,  920,    2, 0x08 /* Private */,
      99,    0,  923,    2, 0x08 /* Private */,
     100,    1,  924,    2, 0x08 /* Private */,
     102,    0,  927,    2, 0x08 /* Private */,
     103,    0,  928,    2, 0x08 /* Private */,
     104,    0,  929,    2, 0x08 /* Private */,
     105,    0,  930,    2, 0x08 /* Private */,
     106,    0,  931,    2, 0x08 /* Private */,
     107,    0,  932,    2, 0x08 /* Private */,
     108,    0,  933,    2, 0x08 /* Private */,
     109,    0,  934,    2, 0x08 /* Private */,
     110,    0,  935,    2, 0x08 /* Private */,
     111,    0,  936,    2, 0x08 /* Private */,
     112,    0,  937,    2, 0x08 /* Private */,
     113,    0,  938,    2, 0x08 /* Private */,
     114,    0,  939,    2, 0x08 /* Private */,
     115,    0,  940,    2, 0x08 /* Private */,
     116,    0,  941,    2, 0x08 /* Private */,
     117,    0,  942,    2, 0x08 /* Private */,
     118,    1,  943,    2, 0x08 /* Private */,
     120,    2,  946,    2, 0x08 /* Private */,
     121,    0,  951,    2, 0x08 /* Private */,
     122,    0,  952,    2, 0x08 /* Private */,
     123,    0,  953,    2, 0x08 /* Private */,
     124,    0,  954,    2, 0x08 /* Private */,
     125,    0,  955,    2, 0x08 /* Private */,
     126,    1,  956,    2, 0x08 /* Private */,
     127,    1,  959,    2, 0x08 /* Private */,
     128,    2,  962,    2, 0x08 /* Private */,
     129,    1,  967,    2, 0x08 /* Private */,
     130,    1,  970,    2, 0x08 /* Private */,
     132,    1,  973,    2, 0x08 /* Private */,
     134,    1,  976,    2, 0x08 /* Private */,
     136,    1,  979,    2, 0x08 /* Private */,
     137,    0,  982,    2, 0x08 /* Private */,
     138,    0,  983,    2, 0x08 /* Private */,
     139,    1,  984,    2, 0x08 /* Private */,
     141,    0,  987,    2, 0x08 /* Private */,
     142,    0,  988,    2, 0x08 /* Private */,
     143,    0,  989,    2, 0x08 /* Private */,
     144,    0,  990,    2, 0x08 /* Private */,
     145,    0,  991,    2, 0x08 /* Private */,
     146,    0,  992,    2, 0x08 /* Private */,
     147,    0,  993,    2, 0x08 /* Private */,
     148,    0,  994,    2, 0x08 /* Private */,
     149,    0,  995,    2, 0x08 /* Private */,
     150,    0,  996,    2, 0x08 /* Private */,
     151,    0,  997,    2, 0x08 /* Private */,
     152,    0,  998,    2, 0x08 /* Private */,
     153,    0,  999,    2, 0x08 /* Private */,
     154,    0, 1000,    2, 0x08 /* Private */,
     155,    0, 1001,    2, 0x08 /* Private */,
     156,    0, 1002,    2, 0x08 /* Private */,
     157,    0, 1003,    2, 0x08 /* Private */,
     158,    0, 1004,    2, 0x08 /* Private */,
     159,    0, 1005,    2, 0x08 /* Private */,
     160,    0, 1006,    2, 0x08 /* Private */,
     161,    0, 1007,    2, 0x08 /* Private */,
     162,    1, 1008,    2, 0x08 /* Private */,
     163,    1, 1011,    2, 0x08 /* Private */,
     164,    1, 1014,    2, 0x08 /* Private */,
     165,    1, 1017,    2, 0x08 /* Private */,
     166,    1, 1020,    2, 0x08 /* Private */,
     167,    1, 1023,    2, 0x08 /* Private */,
     168,    0, 1026,    2, 0x08 /* Private */,
     169,    1, 1027,    2, 0x08 /* Private */,
     171,    1, 1030,    2, 0x08 /* Private */,
     172,    1, 1033,    2, 0x08 /* Private */,
     173,    1, 1036,    2, 0x08 /* Private */,
     174,    1, 1039,    2, 0x08 /* Private */,
     175,    1, 1042,    2, 0x08 /* Private */,
     176,    1, 1045,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 35,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 35,   43,
    QMetaType::Void, QMetaType::Double,   45,
    QMetaType::Void, QMetaType::Double,   47,
    QMetaType::Void, QMetaType::Double,   49,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 63,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QStringList, QMetaType::Int,   68,   69,   70,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   77,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString, QMetaType::QString,   73,   79,   80,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString, QMetaType::Int,   73,   79,   82,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString, QMetaType::Int,   73,   79,   84,
    QMetaType::Void, 0x80000000 | 63,   86,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  101,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 14,    2,    2,
    QMetaType::Void, 0x80000000 | 14,   73,
    QMetaType::Void, QMetaType::Int,  131,
    QMetaType::Void, QMetaType::Bool,  133,
    QMetaType::Void, QMetaType::Int,  135,
    QMetaType::Void, QMetaType::Int,  131,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,  140,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  101,
    QMetaType::Void, QMetaType::Bool,  101,
    QMetaType::Void, QMetaType::Bool,  101,
    QMetaType::Void, QMetaType::Bool,  101,
    QMetaType::Void, QMetaType::Bool,  101,
    QMetaType::Void, QMetaType::Bool,  101,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  170,
    QMetaType::Void, QMetaType::Bool,  170,
    QMetaType::Void, QMetaType::Bool,  170,
    QMetaType::Void, QMetaType::Bool,  170,
    QMetaType::Void, QMetaType::Bool,  170,
    QMetaType::Void, QMetaType::Bool,  170,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void graph_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<graph_MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_addInfoToConsole((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sig_finish_aviFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sig_refreshView_fromMainWin((*reinterpret_cast< QList<PipelineObject*>(*)>(_a[1]))); break;
        case 3: _t->sig_update_propForm((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->sig_saveToPng(); break;
        case 5: _t->sig_start_animate_plot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sig_stop_animate_plot(); break;
        case 7: _t->sig_runAni(); break;
        case 8: _t->sig_stopAni(); break;
        case 9: _t->sig_execScript((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->sig_script_user_custom_add_pipelineObject((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 11: _t->sig_script_user_custom_del_pipelineObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->sig_script_user_custom_refresh_pipelineTree(); break;
        case 13: _t->sig_script_countAniFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->sig_script_creatPickCurveWidget((*reinterpret_cast< QDockWidget*(*)>(_a[1]))); break;
        case 15: _t->sig_script_creatScalarBarEditWidget((*reinterpret_cast< QDockWidget*(*)>(_a[1]))); break;
        case 16: _t->sig_script_saveImage(); break;
        case 17: _t->sig_RunScript((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->sig_python_openFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->sig_python_FilterSlice((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 20: _t->sig_python_FilterClip((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 21: _t->sig_python_FilterContour((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 22: _t->sig_python_FilterVector((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 23: _t->sig_python_FilterReflection((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 24: _t->sig_python_FilterCalculator((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 25: _t->sig_python_FilterSmooth((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 26: _t->sig_python_FilterStreamLine((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 27: _t->sig_python_Camera_Position((*reinterpret_cast< double(*)[3]>(_a[1]))); break;
        case 28: _t->sig_python_Camera_FocalPoint((*reinterpret_cast< double(*)[3]>(_a[1]))); break;
        case 29: _t->sig_python_Camera_ClippingRange((*reinterpret_cast< double(*)[2]>(_a[1]))); break;
        case 30: _t->sig_python_Camera_ViewUp((*reinterpret_cast< double(*)[3]>(_a[1]))); break;
        case 31: _t->sig_python_Camera_ViewAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 32: _t->sig_python_Camera_ParalellScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 33: _t->sig_python_Camera_Zoom((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 34: _t->sig_python_Camera_Reset(); break;
        case 35: _t->sig_python_scalarBar_title((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 36: _t->sig_python_scalarBar_fontSize((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->sig_python_scalarBar_numLables((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->sig_python_resetView(); break;
        case 39: _t->sig_python_view_XPlus(); break;
        case 40: _t->sig_python_view_YPlus(); break;
        case 41: _t->sig_python_view_ZPlus(); break;
        case 42: _t->sig_python_view_XMinus(); break;
        case 43: _t->sig_python_view_YMinus(); break;
        case 44: _t->sig_python_view_ZMinus(); break;
        case 45: _t->sig_python_exitSoftWare(); break;
        case 46: _t->sig_python_setPlotSize((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 47: _t->script_exitSoftWare(); break;
        case 48: _t->script_ReturnToOldSize(); break;
        case 49: _t->script_clearAllPipelineObjs(); break;
        case 50: { bool _r = _t->slot_LoadDataSource((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->slot_animate(); break;
        case 52: _t->slot_load_scalarBarEditForm((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 53: _t->slot_setChinese(); break;
        case 54: _t->slot_setEnglish(); break;
        case 55: _t->ChangeLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 56: _t->slot_update_scalarBar_title((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 57: _t->slot_update_scalarBar_fontSize((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 58: _t->slot_update_scalarBar_numLables((*reinterpret_cast< PipelineObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 59: _t->slot_script_setPlotSize((*reinterpret_cast< int*(*)>(_a[1]))); break;
        case 60: _t->slot_update_UndoReDoButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->slot_ani_fileInterval_spinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->slot_ani_combine_model_comboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->slot_cgnsAniTimesIcon_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->slot_script_user_custom_refresh_pipelineTree(); break;
        case 65: _t->slot_objProp_scalarBarAct(); break;
        case 66: _t->slot_objProp_solidColorAct(); break;
        case 67: _t->slot_cgnsAniTimesAct(); break;
        case 68: _t->slot_objProp_exportAct(); break;
        case 69: _t->slot_objProp_presentCmb_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->slot_objProp_columnCmb_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->slot_objProp_GlyphVector_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->slot_resetView(); break;
        case 73: _t->slot_viewInteraction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->slot_cameraUndo(); break;
        case 75: _t->slot_cameraRedo(); break;
        case 76: _t->slot_view_rubberZoom(); break;
        case 77: _t->slot_actorMove(); break;
        case 78: _t->slot_actorRotate(); break;
        case 79: _t->slot_actorRotateX(); break;
        case 80: _t->slot_actorRotateY(); break;
        case 81: _t->slot_actorRotateZ(); break;
        case 82: _t->slot_view_XPlus(); break;
        case 83: _t->slot_view_YPlus(); break;
        case 84: _t->slot_view_ZPlus(); break;
        case 85: _t->slot_view_XMinus(); break;
        case 86: _t->slot_view_YMinus(); break;
        case 87: _t->slot_view_ZMinus(); break;
        case 88: _t->slot_saveImage(); break;
        case 89: _t->slot_runAni_fromAniSetting(); break;
        case 90: _t->slot_changeCurFrame_spinBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 91: _t->slot_update_countAniFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 92: _t->slot_update_pipelineObjs(); break;
        case 93: _t->slot_animateFirst(); break;
        case 94: _t->slot_animateLast(); break;
        case 95: _t->slot_animateEnd(); break;
        case 96: _t->slot_animateNext(); break;
        case 97: _t->slot_finish_aniThread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 98: _t->slot_update_aniToolBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 99: _t->slot_update_filterToolBar((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< PipelineObject*(*)>(_a[2]))); break;
        case 100: _t->slot_update_pipelineObj_toolBar((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 101: _t->slot_update_toolBar_objProp_column((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 102: _t->slot_update_toolBar_objProp_column_GlyphVector((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 103: _t->slot_update_toolBar_objProp_column_GlyphVectorXYZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 104: _t->slot_update_toolBar_objProp_present((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 105: _t->slot_update_toolBar_objProp_column_Calculator(); break;
        case 106: _t->slot_refreshView_fromPropWidget(); break;
        case 107: _t->slot_delPipelineObj((*reinterpret_cast< PipelineObject*(*)>(_a[1]))); break;
        case 108: _t->slot_showHelpPDF(); break;
        case 109: _t->slot_showToolBar(); break;
        case 110: _t->slot_showMenuBar(); break;
        case 111: _t->slot_showStatusBar(); break;
        case 112: _t->slot_showAboutDialog(); break;
        case 113: _t->slot_showVR(); break;
        case 114: _t->newFile(); break;
        case 115: _t->openFile(); break;
        case 116: _t->editScript(); break;
        case 117: _t->runScript(); break;
        case 118: _t->saveAniSetting(); break;
        case 119: { PipelineObject* _r = _t->slot_adjust_addFilter();
            if (_a[0]) *reinterpret_cast< PipelineObject**>(_a[0]) = std::move(_r); }  break;
        case 120: _t->slot_contourFilter(); break;
        case 121: _t->slot_clipFilter(); break;
        case 122: _t->slot_sliceFilter(); break;
        case 123: _t->slot_glyphFilter(); break;
        case 124: _t->slot_reflectionFilter(); break;
        case 125: _t->slot_calculatorFilter(); break;
        case 126: _t->slot_smoothFilter(); break;
        case 127: _t->slot_streamLineFilter(); break;
        case 128: _t->exitSoftware(); break;
        case 129: _t->slot_pickPointAct((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 130: _t->slot_pickCellAct((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 131: _t->slot_pickAreaCellAct((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 132: _t->slot_pickCurvePointAct((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 133: _t->slot_pickCurveCellAct((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 134: _t->slot_pickAreaPointAct((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 135: _t->slot_pickClearAct(); break;
        case 136: _t->slot_pickCellAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 137: _t->slot_pickPointAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 138: _t->slot_pickAreaCellAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 139: _t->slot_pickAreaPointAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 140: _t->slot_pickCurvePointAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 141: _t->slot_pickCurveCellAct_status((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 142: _t->slot_script_clearAllPipelineObjs((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<PipelineObject*> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDockWidget* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDockWidget* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 22:
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
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 26:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 37:
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
        case 99:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 100:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PipelineObject* >(); break;
            }
            break;
        case 107:
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
            using _t = void (graph_MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_addInfoToConsole)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_finish_aviFile)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(QList<PipelineObject*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_refreshView_fromMainWin)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_update_propForm)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_saveToPng)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_start_animate_plot)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_stop_animate_plot)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_runAni)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_stopAni)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_execScript)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_script_user_custom_add_pipelineObject)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_script_user_custom_del_pipelineObject)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_script_user_custom_refresh_pipelineTree)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_script_countAniFrame)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(QDockWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_script_creatPickCurveWidget)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(QDockWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_script_creatScalarBarEditWidget)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_script_saveImage)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_RunScript)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_openFile)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_FilterSlice)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_FilterClip)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_FilterContour)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_FilterVector)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_FilterReflection)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_FilterCalculator)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_FilterSmooth)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_FilterStreamLine)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(double [3]);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_Camera_Position)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(double [3]);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_Camera_FocalPoint)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(double [2]);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_Camera_ClippingRange)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(double [3]);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_Camera_ViewUp)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_Camera_ViewAngle)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_Camera_ParalellScale)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_Camera_Zoom)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_Camera_Reset)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_scalarBar_title)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_scalarBar_fontSize)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(PipelineObject * , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_scalarBar_numLables)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_resetView)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_view_XPlus)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_view_YPlus)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_view_ZPlus)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_view_XMinus)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_view_YMinus)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_view_ZMinus)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_exitSoftWare)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (graph_MainWindow::*)(int * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graph_MainWindow::sig_python_setPlotSize)) {
                *result = 46;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject graph_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_graph_MainWindow.data,
    qt_meta_data_graph_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *graph_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *graph_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_graph_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int graph_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 143)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 143;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 143)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 143;
    }
    return _id;
}

// SIGNAL 0
void graph_MainWindow::sig_addInfoToConsole(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void graph_MainWindow::sig_finish_aviFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void graph_MainWindow::sig_refreshView_fromMainWin(QList<PipelineObject*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void graph_MainWindow::sig_update_propForm(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void graph_MainWindow::sig_saveToPng()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void graph_MainWindow::sig_start_animate_plot(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void graph_MainWindow::sig_stop_animate_plot()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void graph_MainWindow::sig_runAni()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void graph_MainWindow::sig_stopAni()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void graph_MainWindow::sig_execScript(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void graph_MainWindow::sig_script_user_custom_add_pipelineObject(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void graph_MainWindow::sig_script_user_custom_del_pipelineObject(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void graph_MainWindow::sig_script_user_custom_refresh_pipelineTree()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void graph_MainWindow::sig_script_countAniFrame(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void graph_MainWindow::sig_script_creatPickCurveWidget(QDockWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void graph_MainWindow::sig_script_creatScalarBarEditWidget(QDockWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void graph_MainWindow::sig_script_saveImage()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void graph_MainWindow::sig_RunScript(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void graph_MainWindow::sig_python_openFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void graph_MainWindow::sig_python_FilterSlice(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void graph_MainWindow::sig_python_FilterClip(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void graph_MainWindow::sig_python_FilterContour(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void graph_MainWindow::sig_python_FilterVector(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void graph_MainWindow::sig_python_FilterReflection(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void graph_MainWindow::sig_python_FilterCalculator(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void graph_MainWindow::sig_python_FilterSmooth(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void graph_MainWindow::sig_python_FilterStreamLine(PipelineObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void graph_MainWindow::sig_python_Camera_Position(double _t1[3])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void graph_MainWindow::sig_python_Camera_FocalPoint(double _t1[3])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void graph_MainWindow::sig_python_Camera_ClippingRange(double _t1[2])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void graph_MainWindow::sig_python_Camera_ViewUp(double _t1[3])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void graph_MainWindow::sig_python_Camera_ViewAngle(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void graph_MainWindow::sig_python_Camera_ParalellScale(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void graph_MainWindow::sig_python_Camera_Zoom(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void graph_MainWindow::sig_python_Camera_Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void graph_MainWindow::sig_python_scalarBar_title(PipelineObject * _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void graph_MainWindow::sig_python_scalarBar_fontSize(PipelineObject * _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void graph_MainWindow::sig_python_scalarBar_numLables(PipelineObject * _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void graph_MainWindow::sig_python_resetView()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void graph_MainWindow::sig_python_view_XPlus()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void graph_MainWindow::sig_python_view_YPlus()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void graph_MainWindow::sig_python_view_ZPlus()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void graph_MainWindow::sig_python_view_XMinus()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void graph_MainWindow::sig_python_view_YMinus()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void graph_MainWindow::sig_python_view_ZMinus()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void graph_MainWindow::sig_python_exitSoftWare()
{
    QMetaObject::activate(this, &staticMetaObject, 45, nullptr);
}

// SIGNAL 46
void graph_MainWindow::sig_python_setPlotSize(int * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
