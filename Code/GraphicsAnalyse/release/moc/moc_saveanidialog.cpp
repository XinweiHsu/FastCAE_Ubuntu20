/****************************************************************************
** Meta object code from reading C++ file 'saveanidialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../saveanidialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saveanidialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_saveAniDialog_t {
    QByteArrayData data[19];
    char stringdata0[486];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_saveAniDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_saveAniDialog_t qt_meta_stringdata_saveAniDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "saveAniDialog"
QT_MOC_LITERAL(1, 14, 37), // "on_aniRate_doubleSpinBox_valu..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4), // "arg1"
QT_MOC_LITERAL(4, 58, 32), // "on_frameNum_spinBox_valueChanged"
QT_MOC_LITERAL(5, 91, 33), // "on_frameStep_spinBox_valueCha..."
QT_MOC_LITERAL(6, 125, 34), // "on_startFrame_spinBox_valueCh..."
QT_MOC_LITERAL(7, 160, 32), // "on_endFrame_spinBox_valueChanged"
QT_MOC_LITERAL(8, 193, 34), // "on_pngWid_lineEdit_editingFin..."
QT_MOC_LITERAL(9, 228, 34), // "on_pngHei_lineEdit_editingFin..."
QT_MOC_LITERAL(10, 263, 22), // "on_saveAni_Btn_clicked"
QT_MOC_LITERAL(11, 286, 21), // "on_cancle_Btn_clicked"
QT_MOC_LITERAL(12, 308, 43), // "on_imageFormat_comboBox_curre..."
QT_MOC_LITERAL(13, 352, 5), // "index"
QT_MOC_LITERAL(14, 358, 31), // "on_imagePath_pushButton_clicked"
QT_MOC_LITERAL(15, 390, 29), // "on_povPath_pushButton_clicked"
QT_MOC_LITERAL(16, 420, 29), // "on_saveImage_checkBox_clicked"
QT_MOC_LITERAL(17, 450, 7), // "checked"
QT_MOC_LITERAL(18, 458, 27) // "on_savePOV_checkBox_clicked"

    },
    "saveAniDialog\0on_aniRate_doubleSpinBox_valueChanged\0"
    "\0arg1\0on_frameNum_spinBox_valueChanged\0"
    "on_frameStep_spinBox_valueChanged\0"
    "on_startFrame_spinBox_valueChanged\0"
    "on_endFrame_spinBox_valueChanged\0"
    "on_pngWid_lineEdit_editingFinished\0"
    "on_pngHei_lineEdit_editingFinished\0"
    "on_saveAni_Btn_clicked\0on_cancle_Btn_clicked\0"
    "on_imageFormat_comboBox_currentIndexChanged\0"
    "index\0on_imagePath_pushButton_clicked\0"
    "on_povPath_pushButton_clicked\0"
    "on_saveImage_checkBox_clicked\0checked\0"
    "on_savePOV_checkBox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_saveAniDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    1,   87,    2, 0x08 /* Private */,
       5,    1,   90,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       8,    0,   99,    2, 0x08 /* Private */,
       9,    0,  100,    2, 0x08 /* Private */,
      10,    0,  101,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    1,  103,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      18,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void saveAniDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<saveAniDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_aniRate_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_frameNum_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_frameStep_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_startFrame_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_endFrame_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pngWid_lineEdit_editingFinished(); break;
        case 6: _t->on_pngHei_lineEdit_editingFinished(); break;
        case 7: _t->on_saveAni_Btn_clicked(); break;
        case 8: _t->on_cancle_Btn_clicked(); break;
        case 9: _t->on_imageFormat_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_imagePath_pushButton_clicked(); break;
        case 11: _t->on_povPath_pushButton_clicked(); break;
        case 12: _t->on_saveImage_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_savePOV_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject saveAniDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_saveAniDialog.data,
    qt_meta_data_saveAniDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *saveAniDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *saveAniDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_saveAniDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int saveAniDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
