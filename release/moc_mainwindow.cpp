/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../the_task_of_salesman_Qt-main/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[393];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 13), // "sendPtrMatrix"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 17), // "PointsAndMatrix*&"
QT_MOC_LITERAL(44, 13), // "out_ptrMatrix"
QT_MOC_LITERAL(58, 17), // "slotGetMatrixSize"
QT_MOC_LITERAL(76, 4), // "size"
QT_MOC_LITERAL(81, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(103, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(127, 33), // "on_comboBox_2_currentIndexCha..."
QT_MOC_LITERAL(161, 5), // "index"
QT_MOC_LITERAL(167, 33), // "on_comboBox_3_currentIndexCha..."
QT_MOC_LITERAL(201, 4), // "arg1"
QT_MOC_LITERAL(206, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(230, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(255, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(287, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(311, 33), // "on_comboBox_4_currentIndexCha..."
QT_MOC_LITERAL(345, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(369, 23) // "on_pushButton_5_clicked"

    },
    "MainWindow\0sendPtrMatrix\0\0PointsAndMatrix*&\0"
    "out_ptrMatrix\0slotGetMatrixSize\0size\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_comboBox_2_currentIndexChanged\0"
    "index\0on_comboBox_3_currentIndexChanged\0"
    "arg1\0on_lineEdit_textChanged\0"
    "on_checkBox_stateChanged\0"
    "on_comboBox_currentIndexChanged\0"
    "on_pushButton_3_clicked\0"
    "on_comboBox_4_currentIndexChanged\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x08,    1 /* Private */,
       5,    1,   95,    2, 0x08,    3 /* Private */,
       7,    0,   98,    2, 0x08,    5 /* Private */,
       8,    0,   99,    2, 0x08,    6 /* Private */,
       9,    1,  100,    2, 0x08,    7 /* Private */,
      11,    1,  103,    2, 0x08,    9 /* Private */,
      13,    1,  106,    2, 0x08,   11 /* Private */,
      14,    1,  109,    2, 0x08,   13 /* Private */,
      15,    1,  112,    2, 0x08,   15 /* Private */,
      16,    0,  115,    2, 0x08,   17 /* Private */,
      17,    1,  116,    2, 0x08,   18 /* Private */,
      18,    0,  119,    2, 0x08,   20 /* Private */,
      19,    0,  120,    2, 0x08,   21 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendPtrMatrix((*reinterpret_cast< std::add_pointer_t<PointsAndMatrix*&>>(_a[1]))); break;
        case 1: _t->slotGetMatrixSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_comboBox_2_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_comboBox_3_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_lineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_pushButton_3_clicked(); break;
        case 10: _t->on_comboBox_4_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_pushButton_4_clicked(); break;
        case 12: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<PointsAndMatrix * &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
