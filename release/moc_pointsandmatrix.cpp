/****************************************************************************
** Meta object code from reading C++ file 'pointsandmatrix.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../the_task_of_salesman_Qt-main/pointsandmatrix.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pointsandmatrix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PointsAndMatrix_t {
    const uint offsetsAndSize[18];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PointsAndMatrix_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PointsAndMatrix_t qt_meta_stringdata_PointsAndMatrix = {
    {
QT_MOC_LITERAL(0, 15), // "PointsAndMatrix"
QT_MOC_LITERAL(16, 21), // "signalDeleteItem_Line"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 7), // "index_i"
QT_MOC_LITERAL(47, 7), // "index_j"
QT_MOC_LITERAL(55, 22), // "signalDeleteItem_Point"
QT_MOC_LITERAL(78, 5), // "index"
QT_MOC_LITERAL(84, 20), // "signalSendMatrixSize"
QT_MOC_LITERAL(105, 4) // "size"

    },
    "PointsAndMatrix\0signalDeleteItem_Line\0"
    "\0index_i\0index_j\0signalDeleteItem_Point\0"
    "index\0signalSendMatrixSize\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PointsAndMatrix[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,
       5,    1,   37,    2, 0x06,    4 /* Public */,
       7,    1,   40,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void PointsAndMatrix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PointsAndMatrix *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalDeleteItem_Line((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->signalDeleteItem_Point((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->signalSendMatrixSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PointsAndMatrix::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PointsAndMatrix::signalDeleteItem_Line)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PointsAndMatrix::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PointsAndMatrix::signalDeleteItem_Point)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PointsAndMatrix::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PointsAndMatrix::signalSendMatrixSize)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PointsAndMatrix::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PointsAndMatrix.offsetsAndSize,
    qt_meta_data_PointsAndMatrix,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PointsAndMatrix_t
, QtPrivate::TypeAndForceComplete<PointsAndMatrix, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>



>,
    nullptr
} };


const QMetaObject *PointsAndMatrix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PointsAndMatrix::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PointsAndMatrix.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PointsAndMatrix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PointsAndMatrix::signalDeleteItem_Line(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PointsAndMatrix::signalDeleteItem_Point(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PointsAndMatrix::signalSendMatrixSize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
