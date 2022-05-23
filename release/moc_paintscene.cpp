/****************************************************************************
** Meta object code from reading C++ file 'paintscene.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../the_task_of_salesman_Qt-main/paintscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PaintScene_t {
    const uint offsetsAndSize[20];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PaintScene_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PaintScene_t qt_meta_stringdata_PaintScene = {
    {
QT_MOC_LITERAL(0, 10), // "PaintScene"
QT_MOC_LITERAL(11, 18), // "signalGetPtrMatrix"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 17), // "PointsAndMatrix*&"
QT_MOC_LITERAL(49, 13), // "out_ptrMatrix"
QT_MOC_LITERAL(63, 15), // "deleteItem_Line"
QT_MOC_LITERAL(79, 8), // "firstTop"
QT_MOC_LITERAL(88, 9), // "secondTop"
QT_MOC_LITERAL(98, 16), // "deleteItem_Point"
QT_MOC_LITERAL(115, 5) // "index"

    },
    "PaintScene\0signalGetPtrMatrix\0\0"
    "PointsAndMatrix*&\0out_ptrMatrix\0"
    "deleteItem_Line\0firstTop\0secondTop\0"
    "deleteItem_Point\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintScene[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   35,    2, 0x0a,    3 /* Public */,
       8,    1,   40,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void PaintScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaintScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalGetPtrMatrix((*reinterpret_cast< std::add_pointer_t<PointsAndMatrix*&>>(_a[1]))); break;
        case 1: _t->deleteItem_Line((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->deleteItem_Point((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaintScene::*)(PointsAndMatrix * & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintScene::signalGetPtrMatrix)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PaintScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_PaintScene.offsetsAndSize,
    qt_meta_data_PaintScene,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PaintScene_t
, QtPrivate::TypeAndForceComplete<PaintScene, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<PointsAndMatrix * &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *PaintScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaintScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int PaintScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
void PaintScene::signalGetPtrMatrix(PointsAndMatrix * & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
