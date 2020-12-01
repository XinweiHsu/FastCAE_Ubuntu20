/****************************************************************************
** Meta object code from reading C++ file 'ParaBasicSetup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ParaBasicSetup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParaBasicSetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FastCAEDesigner__ParaBasicSetup_t {
    QByteArrayData data[10];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FastCAEDesigner__ParaBasicSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FastCAEDesigner__ParaBasicSetup_t qt_meta_stringdata_FastCAEDesigner__ParaBasicSetup = {
    {
QT_MOC_LITERAL(0, 0, 31), // "FastCAEDesigner::ParaBasicSetup"
QT_MOC_LITERAL(1, 32, 14), // "OnBtnOkClicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 18), // "OnBtnCancelClicked"
QT_MOC_LITERAL(4, 67, 20), // "OnBtnOpenLogoClicked"
QT_MOC_LITERAL(5, 88, 23), // "OnBtnOpenWelcomeClicked"
QT_MOC_LITERAL(6, 112, 21), // "OnTxtEmailTextChanged"
QT_MOC_LITERAL(7, 134, 4), // "text"
QT_MOC_LITERAL(8, 139, 23), // "OnTxtWebSiteTextChanged"
QT_MOC_LITERAL(9, 163, 9) // "OnTimeout"

    },
    "FastCAEDesigner::ParaBasicSetup\0"
    "OnBtnOkClicked\0\0OnBtnCancelClicked\0"
    "OnBtnOpenLogoClicked\0OnBtnOpenWelcomeClicked\0"
    "OnTxtEmailTextChanged\0text\0"
    "OnTxtWebSiteTextChanged\0OnTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FastCAEDesigner__ParaBasicSetup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void FastCAEDesigner::ParaBasicSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParaBasicSetup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBtnOkClicked(); break;
        case 1: _t->OnBtnCancelClicked(); break;
        case 2: _t->OnBtnOpenLogoClicked(); break;
        case 3: _t->OnBtnOpenWelcomeClicked(); break;
        case 4: _t->OnTxtEmailTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->OnTxtWebSiteTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->OnTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FastCAEDesigner::ParaBasicSetup::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FastCAEDesigner__ParaBasicSetup.data,
    qt_meta_data_FastCAEDesigner__ParaBasicSetup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FastCAEDesigner::ParaBasicSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FastCAEDesigner::ParaBasicSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FastCAEDesigner__ParaBasicSetup.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FastCAEDesigner::ParaBasicSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
