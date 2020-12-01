/****************************************************************************
** Meta object code from reading C++ file 'curveaxispropdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../curveaxispropdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curveaxispropdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_curveAxisPropDialog_t {
    QByteArrayData data[16];
    char stringdata0[494];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_curveAxisPropDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_curveAxisPropDialog_t qt_meta_stringdata_curveAxisPropDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "curveAxisPropDialog"
QT_MOC_LITERAL(1, 20, 15), // "sig_setAxisName"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "sig_axis_font"
QT_MOC_LITERAL(4, 51, 16), // "sig_setAxisRange"
QT_MOC_LITERAL(5, 68, 27), // "sig_xAxis_dataSource_change"
QT_MOC_LITERAL(6, 96, 34), // "on_axis_name_lineEdit1_textCh..."
QT_MOC_LITERAL(7, 131, 46), // "on_axis_fontType_comboBox1_cu..."
QT_MOC_LITERAL(8, 178, 37), // "on_axis_fontColor_pushButton1..."
QT_MOC_LITERAL(9, 216, 38), // "on_axis_fontSize_spinBox1_val..."
QT_MOC_LITERAL(10, 255, 48), // "on_axis_dataSource_comboBox1_..."
QT_MOC_LITERAL(11, 304, 46), // "on_axis_dataFile_comboBox1_cu..."
QT_MOC_LITERAL(12, 351, 48), // "on_axis_dataColumn_comboBox1_..."
QT_MOC_LITERAL(13, 400, 31), // "on_lineEdit_min_editingFinished"
QT_MOC_LITERAL(14, 432, 31), // "on_lineEdit_max_editingFinished"
QT_MOC_LITERAL(15, 464, 29) // "on_rescale_pushButton_clicked"

    },
    "curveAxisPropDialog\0sig_setAxisName\0"
    "\0sig_axis_font\0sig_setAxisRange\0"
    "sig_xAxis_dataSource_change\0"
    "on_axis_name_lineEdit1_textChanged\0"
    "on_axis_fontType_comboBox1_currentIndexChanged\0"
    "on_axis_fontColor_pushButton1_clicked\0"
    "on_axis_fontSize_spinBox1_valueChanged\0"
    "on_axis_dataSource_comboBox1_currentIndexChanged\0"
    "on_axis_dataFile_comboBox1_currentIndexChanged\0"
    "on_axis_dataColumn_comboBox1_currentIndexChanged\0"
    "on_lineEdit_min_editingFinished\0"
    "on_lineEdit_max_editingFinished\0"
    "on_rescale_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_curveAxisPropDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   96,    2, 0x08 /* Private */,
       7,    1,   99,    2, 0x08 /* Private */,
       8,    0,  102,    2, 0x08 /* Private */,
       9,    1,  103,    2, 0x08 /* Private */,
      10,    1,  106,    2, 0x08 /* Private */,
      11,    1,  109,    2, 0x08 /* Private */,
      12,    1,  112,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void curveAxisPropDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<curveAxisPropDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_setAxisName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sig_axis_font((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sig_setAxisRange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sig_xAxis_dataSource_change((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_axis_name_lineEdit1_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_axis_fontType_comboBox1_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_axis_fontColor_pushButton1_clicked(); break;
        case 7: _t->on_axis_fontSize_spinBox1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_axis_dataSource_comboBox1_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_axis_dataFile_comboBox1_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_axis_dataColumn_comboBox1_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_lineEdit_min_editingFinished(); break;
        case 12: _t->on_lineEdit_max_editingFinished(); break;
        case 13: _t->on_rescale_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (curveAxisPropDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&curveAxisPropDialog::sig_setAxisName)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (curveAxisPropDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&curveAxisPropDialog::sig_axis_font)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (curveAxisPropDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&curveAxisPropDialog::sig_setAxisRange)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (curveAxisPropDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&curveAxisPropDialog::sig_xAxis_dataSource_change)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject curveAxisPropDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_curveAxisPropDialog.data,
    qt_meta_data_curveAxisPropDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *curveAxisPropDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *curveAxisPropDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_curveAxisPropDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int curveAxisPropDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void curveAxisPropDialog::sig_setAxisName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void curveAxisPropDialog::sig_axis_font(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void curveAxisPropDialog::sig_setAxisRange(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void curveAxisPropDialog::sig_xAxis_dataSource_change(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
