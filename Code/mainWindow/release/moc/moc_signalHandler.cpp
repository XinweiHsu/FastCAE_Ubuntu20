/****************************************************************************
** Meta object code from reading C++ file 'signalHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../signalHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GUI__SignalHandler_t {
    QByteArrayData data[94];
    char stringdata0[1285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUI__SignalHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUI__SignalHandler_t qt_meta_stringdata_GUI__SignalHandler = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GUI::SignalHandler"
QT_MOC_LITERAL(1, 19, 15), // "importMeshPySig"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "exportMeshPySig"
QT_MOC_LITERAL(4, 52, 22), // "open3DGraphWindowPySig"
QT_MOC_LITERAL(5, 75, 21), // "open2DPlotWindowPySig"
QT_MOC_LITERAL(6, 97, 18), // "openProjectFileSig"
QT_MOC_LITERAL(7, 116, 8), // "fileName"
QT_MOC_LITERAL(8, 125, 20), // "saveToProjectFileSig"
QT_MOC_LITERAL(9, 146, 15), // "solveProjectSig"
QT_MOC_LITERAL(10, 162, 12), // "projectIndex"
QT_MOC_LITERAL(11, 175, 11), // "solverIndex"
QT_MOC_LITERAL(12, 187, 23), // "projectFileProcessedSig"
QT_MOC_LITERAL(13, 211, 4), // "file"
QT_MOC_LITERAL(14, 216, 7), // "success"
QT_MOC_LITERAL(15, 224, 6), // "isread"
QT_MOC_LITERAL(16, 231, 9), // "clearData"
QT_MOC_LITERAL(17, 241, 6), // "unlock"
QT_MOC_LITERAL(18, 248, 14), // "on_actionSolve"
QT_MOC_LITERAL(19, 263, 16), // "on_actionEnglish"
QT_MOC_LITERAL(20, 280, 16), // "on_actionChinese"
QT_MOC_LITERAL(21, 297, 20), // "handleTreeMouseEvent"
QT_MOC_LITERAL(22, 318, 9), // "eventtype"
QT_MOC_LITERAL(23, 328, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(24, 345, 4), // "item"
QT_MOC_LITERAL(25, 350, 5), // "proID"
QT_MOC_LITERAL(26, 356, 14), // "solveProjectPy"
QT_MOC_LITERAL(27, 371, 12), // "solveProject"
QT_MOC_LITERAL(28, 384, 19), // "generateSurfaceMesh"
QT_MOC_LITERAL(29, 404, 17), // "generateSolidMesh"
QT_MOC_LITERAL(30, 422, 17), // "generateFluidMesh"
QT_MOC_LITERAL(31, 440, 7), // "genMesh"
QT_MOC_LITERAL(32, 448, 19), // "appendGeneratedMesh"
QT_MOC_LITERAL(33, 468, 4), // "name"
QT_MOC_LITERAL(34, 473, 11), // "vtkDataSet*"
QT_MOC_LITERAL(35, 485, 7), // "dataset"
QT_MOC_LITERAL(36, 493, 14), // "exportMeshByID"
QT_MOC_LITERAL(37, 508, 6), // "suffix"
QT_MOC_LITERAL(38, 515, 8), // "kenerlID"
QT_MOC_LITERAL(39, 524, 12), // "exportMeshPy"
QT_MOC_LITERAL(40, 537, 19), // "updateActionsStates"
QT_MOC_LITERAL(41, 557, 16), // "open2DPlotWindow"
QT_MOC_LITERAL(42, 574, 18), // "open2DPlotWindowPy"
QT_MOC_LITERAL(43, 593, 17), // "open3DGraphWindow"
QT_MOC_LITERAL(44, 611, 19), // "open3DGraphWindowPy"
QT_MOC_LITERAL(45, 631, 15), // "closePostWindow"
QT_MOC_LITERAL(46, 647, 21), // "Post::PostWindowBase*"
QT_MOC_LITERAL(47, 669, 1), // "p"
QT_MOC_LITERAL(48, 671, 10), // "saveImange"
QT_MOC_LITERAL(49, 682, 15), // "openProjectFile"
QT_MOC_LITERAL(50, 698, 20), // "projectFileProcessed"
QT_MOC_LITERAL(51, 719, 8), // "filename"
QT_MOC_LITERAL(52, 728, 4), // "read"
QT_MOC_LITERAL(53, 733, 17), // "saveToProjectFile"
QT_MOC_LITERAL(54, 751, 12), // "meshChecking"
QT_MOC_LITERAL(55, 764, 16), // "showUserGuidence"
QT_MOC_LITERAL(56, 781, 5), // "start"
QT_MOC_LITERAL(57, 787, 4), // "undo"
QT_MOC_LITERAL(58, 792, 4), // "redo"
QT_MOC_LITERAL(59, 797, 9), // "createBox"
QT_MOC_LITERAL(60, 807, 14), // "createCylinder"
QT_MOC_LITERAL(61, 822, 12), // "CreateSphere"
QT_MOC_LITERAL(62, 835, 10), // "CreateCone"
QT_MOC_LITERAL(63, 846, 11), // "CreatePoint"
QT_MOC_LITERAL(64, 858, 10), // "CreateEdge"
QT_MOC_LITERAL(65, 869, 10), // "CreateFace"
QT_MOC_LITERAL(66, 880, 11), // "CreateFilet"
QT_MOC_LITERAL(67, 892, 20), // "CreateVariableFillet"
QT_MOC_LITERAL(68, 913, 13), // "CreateChamfer"
QT_MOC_LITERAL(69, 927, 13), // "CreateBoolCut"
QT_MOC_LITERAL(70, 941, 15), // "CreateBoolFause"
QT_MOC_LITERAL(71, 957, 16), // "CreateBoolCommon"
QT_MOC_LITERAL(72, 974, 13), // "MirrorFeature"
QT_MOC_LITERAL(73, 988, 15), // "CreateExtrusion"
QT_MOC_LITERAL(74, 1004, 11), // "MoveFeature"
QT_MOC_LITERAL(75, 1016, 13), // "RotateFeature"
QT_MOC_LITERAL(76, 1030, 11), // "CreateRevol"
QT_MOC_LITERAL(77, 1042, 10), // "CreateLoft"
QT_MOC_LITERAL(78, 1053, 11), // "CreateSweep"
QT_MOC_LITERAL(79, 1065, 16), // "CreateDatumplane"
QT_MOC_LITERAL(80, 1082, 16), // "DrawGraphicsLine"
QT_MOC_LITERAL(81, 1099, 21), // "DrawGraphicsRectangle"
QT_MOC_LITERAL(82, 1121, 18), // "DrawGraphicsCircle"
QT_MOC_LITERAL(83, 1140, 15), // "DrawGraphicsArc"
QT_MOC_LITERAL(84, 1156, 20), // "DrawGraphicsPolyline"
QT_MOC_LITERAL(85, 1177, 15), // "DrawGraphSpline"
QT_MOC_LITERAL(86, 1193, 10), // "showDialog"
QT_MOC_LITERAL(87, 1204, 8), // "QDialog*"
QT_MOC_LITERAL(88, 1213, 1), // "d"
QT_MOC_LITERAL(89, 1215, 10), // "MakeMatrix"
QT_MOC_LITERAL(90, 1226, 15), // "MeasureDistance"
QT_MOC_LITERAL(91, 1242, 11), // "GeoSplitter"
QT_MOC_LITERAL(92, 1254, 12), // "MakeFillHole"
QT_MOC_LITERAL(93, 1267, 17) // "MakeRemoveSurface"

    },
    "GUI::SignalHandler\0importMeshPySig\0\0"
    "exportMeshPySig\0open3DGraphWindowPySig\0"
    "open2DPlotWindowPySig\0openProjectFileSig\0"
    "fileName\0saveToProjectFileSig\0"
    "solveProjectSig\0projectIndex\0solverIndex\0"
    "projectFileProcessedSig\0file\0success\0"
    "isread\0clearData\0unlock\0on_actionSolve\0"
    "on_actionEnglish\0on_actionChinese\0"
    "handleTreeMouseEvent\0eventtype\0"
    "QTreeWidgetItem*\0item\0proID\0solveProjectPy\0"
    "solveProject\0generateSurfaceMesh\0"
    "generateSolidMesh\0generateFluidMesh\0"
    "genMesh\0appendGeneratedMesh\0name\0"
    "vtkDataSet*\0dataset\0exportMeshByID\0"
    "suffix\0kenerlID\0exportMeshPy\0"
    "updateActionsStates\0open2DPlotWindow\0"
    "open2DPlotWindowPy\0open3DGraphWindow\0"
    "open3DGraphWindowPy\0closePostWindow\0"
    "Post::PostWindowBase*\0p\0saveImange\0"
    "openProjectFile\0projectFileProcessed\0"
    "filename\0read\0saveToProjectFile\0"
    "meshChecking\0showUserGuidence\0start\0"
    "undo\0redo\0createBox\0createCylinder\0"
    "CreateSphere\0CreateCone\0CreatePoint\0"
    "CreateEdge\0CreateFace\0CreateFilet\0"
    "CreateVariableFillet\0CreateChamfer\0"
    "CreateBoolCut\0CreateBoolFause\0"
    "CreateBoolCommon\0MirrorFeature\0"
    "CreateExtrusion\0MoveFeature\0RotateFeature\0"
    "CreateRevol\0CreateLoft\0CreateSweep\0"
    "CreateDatumplane\0DrawGraphicsLine\0"
    "DrawGraphicsRectangle\0DrawGraphicsCircle\0"
    "DrawGraphicsArc\0DrawGraphicsPolyline\0"
    "DrawGraphSpline\0showDialog\0QDialog*\0"
    "d\0MakeMatrix\0MeasureDistance\0GeoSplitter\0"
    "MakeFillHole\0MakeRemoveSurface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUI__SignalHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  374,    2, 0x06 /* Public */,
       3,    2,  381,    2, 0x06 /* Public */,
       4,    0,  386,    2, 0x06 /* Public */,
       5,    0,  387,    2, 0x06 /* Public */,
       6,    1,  388,    2, 0x06 /* Public */,
       8,    1,  391,    2, 0x06 /* Public */,
       9,    2,  394,    2, 0x06 /* Public */,
      12,    3,  399,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  406,    2, 0x0a /* Public */,
      16,    0,  409,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  410,    2, 0x0a /* Public */,
      19,    0,  411,    2, 0x0a /* Public */,
      20,    0,  412,    2, 0x0a /* Public */,
      21,    3,  413,    2, 0x0a /* Public */,
      26,    2,  420,    2, 0x0a /* Public */,
      27,    2,  425,    2, 0x0a /* Public */,
      28,    0,  430,    2, 0x0a /* Public */,
      29,    0,  431,    2, 0x0a /* Public */,
      30,    0,  432,    2, 0x0a /* Public */,
      31,    0,  433,    2, 0x0a /* Public */,
      32,    2,  434,    2, 0x0a /* Public */,
      36,    3,  439,    2, 0x0a /* Public */,
      36,    2,  446,    2, 0x2a /* Public | MethodCloned */,
      39,    2,  451,    2, 0x0a /* Public */,
      40,    0,  456,    2, 0x0a /* Public */,
      41,    0,  457,    2, 0x0a /* Public */,
      42,    0,  458,    2, 0x0a /* Public */,
      43,    0,  459,    2, 0x0a /* Public */,
      44,    0,  460,    2, 0x0a /* Public */,
      45,    1,  461,    2, 0x0a /* Public */,
      48,    0,  464,    2, 0x0a /* Public */,
      49,    1,  465,    2, 0x0a /* Public */,
      50,    3,  468,    2, 0x0a /* Public */,
      53,    1,  475,    2, 0x0a /* Public */,
      54,    0,  478,    2, 0x0a /* Public */,
      55,    1,  479,    2, 0x0a /* Public */,
      55,    0,  482,    2, 0x2a /* Public | MethodCloned */,
      57,    0,  483,    2, 0x0a /* Public */,
      58,    0,  484,    2, 0x0a /* Public */,
      59,    0,  485,    2, 0x0a /* Public */,
      60,    0,  486,    2, 0x0a /* Public */,
      61,    0,  487,    2, 0x0a /* Public */,
      62,    0,  488,    2, 0x0a /* Public */,
      63,    0,  489,    2, 0x0a /* Public */,
      64,    0,  490,    2, 0x0a /* Public */,
      65,    0,  491,    2, 0x0a /* Public */,
      66,    0,  492,    2, 0x0a /* Public */,
      67,    0,  493,    2, 0x0a /* Public */,
      68,    0,  494,    2, 0x0a /* Public */,
      69,    0,  495,    2, 0x0a /* Public */,
      70,    0,  496,    2, 0x0a /* Public */,
      71,    0,  497,    2, 0x0a /* Public */,
      72,    0,  498,    2, 0x0a /* Public */,
      73,    0,  499,    2, 0x0a /* Public */,
      74,    0,  500,    2, 0x0a /* Public */,
      75,    0,  501,    2, 0x0a /* Public */,
      76,    0,  502,    2, 0x0a /* Public */,
      77,    0,  503,    2, 0x0a /* Public */,
      78,    0,  504,    2, 0x0a /* Public */,
      79,    0,  505,    2, 0x0a /* Public */,
      80,    0,  506,    2, 0x0a /* Public */,
      81,    0,  507,    2, 0x0a /* Public */,
      82,    0,  508,    2, 0x0a /* Public */,
      83,    0,  509,    2, 0x0a /* Public */,
      84,    0,  510,    2, 0x0a /* Public */,
      85,    0,  511,    2, 0x0a /* Public */,
      86,    1,  512,    2, 0x0a /* Public */,
      89,    0,  515,    2, 0x0a /* Public */,
      90,    0,  516,    2, 0x0a /* Public */,
      91,    0,  517,    2, 0x0a /* Public */,
      92,    0,  518,    2, 0x0a /* Public */,
      93,    0,  519,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   13,   14,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 23, QMetaType::Int,   22,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 34,   33,   35,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    7,   37,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   51,   14,   52,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   56,
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
    QMetaType::Void, 0x80000000 | 87,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GUI::SignalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignalHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->importMeshPySig((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->exportMeshPySig((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->open3DGraphWindowPySig(); break;
        case 3: _t->open2DPlotWindowPySig(); break;
        case 4: { bool _r = _t->openProjectFileSig((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->saveToProjectFileSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->solveProjectSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->projectFileProcessedSig((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->clearData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->clearData(); break;
        case 10: _t->on_actionSolve(); break;
        case 11: _t->on_actionEnglish(); break;
        case 12: _t->on_actionChinese(); break;
        case 13: _t->handleTreeMouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->solveProjectPy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->solveProject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->generateSurfaceMesh(); break;
        case 17: _t->generateSolidMesh(); break;
        case 18: _t->generateFluidMesh(); break;
        case 19: _t->genMesh(); break;
        case 20: _t->appendGeneratedMesh((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< vtkDataSet*(*)>(_a[2]))); break;
        case 21: _t->exportMeshByID((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->exportMeshByID((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->exportMeshPy((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->updateActionsStates(); break;
        case 25: _t->open2DPlotWindow(); break;
        case 26: _t->open2DPlotWindowPy(); break;
        case 27: _t->open3DGraphWindow(); break;
        case 28: _t->open3DGraphWindowPy(); break;
        case 29: _t->closePostWindow((*reinterpret_cast< Post::PostWindowBase*(*)>(_a[1]))); break;
        case 30: _t->saveImange(); break;
        case 31: { bool _r = _t->openProjectFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->projectFileProcessed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 33: _t->saveToProjectFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->meshChecking(); break;
        case 35: _t->showUserGuidence((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->showUserGuidence(); break;
        case 37: _t->undo(); break;
        case 38: _t->redo(); break;
        case 39: _t->createBox(); break;
        case 40: _t->createCylinder(); break;
        case 41: _t->CreateSphere(); break;
        case 42: _t->CreateCone(); break;
        case 43: _t->CreatePoint(); break;
        case 44: _t->CreateEdge(); break;
        case 45: _t->CreateFace(); break;
        case 46: _t->CreateFilet(); break;
        case 47: _t->CreateVariableFillet(); break;
        case 48: _t->CreateChamfer(); break;
        case 49: _t->CreateBoolCut(); break;
        case 50: _t->CreateBoolFause(); break;
        case 51: _t->CreateBoolCommon(); break;
        case 52: _t->MirrorFeature(); break;
        case 53: _t->CreateExtrusion(); break;
        case 54: _t->MoveFeature(); break;
        case 55: _t->RotateFeature(); break;
        case 56: _t->CreateRevol(); break;
        case 57: _t->CreateLoft(); break;
        case 58: _t->CreateSweep(); break;
        case 59: _t->CreateDatumplane(); break;
        case 60: _t->DrawGraphicsLine(); break;
        case 61: _t->DrawGraphicsRectangle(); break;
        case 62: _t->DrawGraphicsCircle(); break;
        case 63: _t->DrawGraphicsArc(); break;
        case 64: _t->DrawGraphicsPolyline(); break;
        case 65: _t->DrawGraphSpline(); break;
        case 66: _t->showDialog((*reinterpret_cast< QDialog*(*)>(_a[1]))); break;
        case 67: _t->MakeMatrix(); break;
        case 68: _t->MeasureDistance(); break;
        case 69: _t->GeoSplitter(); break;
        case 70: _t->MakeFillHole(); break;
        case 71: _t->MakeRemoveSurface(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SignalHandler::*)(QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::importMeshPySig)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SignalHandler::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::exportMeshPySig)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SignalHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::open3DGraphWindowPySig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SignalHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::open2DPlotWindowPySig)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = bool (SignalHandler::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::openProjectFileSig)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SignalHandler::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::saveToProjectFileSig)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SignalHandler::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::solveProjectSig)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SignalHandler::*)(QString , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignalHandler::projectFileProcessedSig)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GUI::SignalHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GUI__SignalHandler.data,
    qt_meta_data_GUI__SignalHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GUI::SignalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI::SignalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GUI__SignalHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GUI::SignalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 72;
    }
    return _id;
}

// SIGNAL 0
void GUI::SignalHandler::importMeshPySig(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::SignalHandler::exportMeshPySig(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GUI::SignalHandler::open3DGraphWindowPySig()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GUI::SignalHandler::open2DPlotWindowPySig()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
bool GUI::SignalHandler::openProjectFileSig(QString _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
void GUI::SignalHandler::saveToProjectFileSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GUI::SignalHandler::solveProjectSig(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GUI::SignalHandler::projectFileProcessedSig(QString _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
