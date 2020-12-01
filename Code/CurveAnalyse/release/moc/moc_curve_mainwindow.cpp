/****************************************************************************
** Meta object code from reading C++ file 'curve_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../curve_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curve_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_curve_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_curve_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_curve_MainWindow_t qt_meta_stringdata_curve_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "curve_MainWindow"
QT_MOC_LITERAL(1, 17, 20), // "sig_update_curveTree"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "sig_CAE_curve_animate"
QT_MOC_LITERAL(4, 61, 15), // "slot_setChinese"
QT_MOC_LITERAL(5, 77, 15), // "slot_setEnglish"
QT_MOC_LITERAL(6, 93, 14), // "ChangeLanguage"
QT_MOC_LITERAL(7, 108, 4), // "lang"
QT_MOC_LITERAL(8, 113, 16), // "slot_showHelpPDF"
QT_MOC_LITERAL(9, 130, 16), // "slot_showToolBar"
QT_MOC_LITERAL(10, 147, 16), // "slot_showMenuBar"
QT_MOC_LITERAL(11, 164, 18), // "slot_showStatusBar"
QT_MOC_LITERAL(12, 183, 20), // "slot_showAboutDialog"
QT_MOC_LITERAL(13, 204, 12), // "slot_newFile"
QT_MOC_LITERAL(14, 217, 8), // "openFile"
QT_MOC_LITERAL(15, 226, 16), // "slot_savePngFile"
QT_MOC_LITERAL(16, 243, 17), // "slot_exitSoftware"
QT_MOC_LITERAL(17, 261, 15), // "slot_editScript"
QT_MOC_LITERAL(18, 277, 14), // "slot_runScript"
QT_MOC_LITERAL(19, 292, 12), // "slot_animate"
QT_MOC_LITERAL(20, 305, 19), // "slot_delAniPointAct"
QT_MOC_LITERAL(21, 325, 21), // "slot_finish_aniThread"
QT_MOC_LITERAL(22, 347, 13), // "slot_zoomXAct"
QT_MOC_LITERAL(23, 361, 13), // "slot_zoomYAct"
QT_MOC_LITERAL(24, 375, 18) // "slot_updateZoomBar"

    },
    "curve_MainWindow\0sig_update_curveTree\0"
    "\0sig_CAE_curve_animate\0slot_setChinese\0"
    "slot_setEnglish\0ChangeLanguage\0lang\0"
    "slot_showHelpPDF\0slot_showToolBar\0"
    "slot_showMenuBar\0slot_showStatusBar\0"
    "slot_showAboutDialog\0slot_newFile\0"
    "openFile\0slot_savePngFile\0slot_exitSoftware\0"
    "slot_editScript\0slot_runScript\0"
    "slot_animate\0slot_delAniPointAct\0"
    "slot_finish_aniThread\0slot_zoomXAct\0"
    "slot_zoomYAct\0slot_updateZoomBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_curve_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    1,  125,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  128,    2, 0x0a /* Public */,
       5,    0,  129,    2, 0x0a /* Public */,
       6,    1,  130,    2, 0x0a /* Public */,
       8,    0,  133,    2, 0x08 /* Private */,
       9,    0,  134,    2, 0x08 /* Private */,
      10,    0,  135,    2, 0x08 /* Private */,
      11,    0,  136,    2, 0x08 /* Private */,
      12,    0,  137,    2, 0x08 /* Private */,
      13,    0,  138,    2, 0x08 /* Private */,
      14,    0,  139,    2, 0x08 /* Private */,
      15,    0,  140,    2, 0x08 /* Private */,
      16,    0,  141,    2, 0x08 /* Private */,
      17,    0,  142,    2, 0x08 /* Private */,
      18,    0,  143,    2, 0x08 /* Private */,
      19,    0,  144,    2, 0x08 /* Private */,
      20,    0,  145,    2, 0x08 /* Private */,
      21,    1,  146,    2, 0x08 /* Private */,
      22,    1,  149,    2, 0x08 /* Private */,
      23,    1,  152,    2, 0x08 /* Private */,
      24,    1,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
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
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void curve_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<curve_MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_update_curveTree(); break;
        case 1: _t->sig_CAE_curve_animate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slot_setChinese(); break;
        case 3: _t->slot_setEnglish(); break;
        case 4: _t->ChangeLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slot_showHelpPDF(); break;
        case 6: _t->slot_showToolBar(); break;
        case 7: _t->slot_showMenuBar(); break;
        case 8: _t->slot_showStatusBar(); break;
        case 9: _t->slot_showAboutDialog(); break;
        case 10: _t->slot_newFile(); break;
        case 11: _t->openFile(); break;
        case 12: _t->slot_savePngFile(); break;
        case 13: _t->slot_exitSoftware(); break;
        case 14: _t->slot_editScript(); break;
        case 15: _t->slot_runScript(); break;
        case 16: _t->slot_animate(); break;
        case 17: _t->slot_delAniPointAct(); break;
        case 18: _t->slot_finish_aniThread((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->slot_zoomXAct((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->slot_zoomYAct((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->slot_updateZoomBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (curve_MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&curve_MainWindow::sig_update_curveTree)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (curve_MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&curve_MainWindow::sig_CAE_curve_animate)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject curve_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_curve_MainWindow.data,
    qt_meta_data_curve_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *curve_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *curve_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_curve_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int curve_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void curve_MainWindow::sig_update_curveTree()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void curve_MainWindow::sig_CAE_curve_animate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
