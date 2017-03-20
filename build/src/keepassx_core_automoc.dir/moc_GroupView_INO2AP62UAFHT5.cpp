/****************************************************************************
** Meta object code from reading C++ file 'GroupView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/group/GroupView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroupView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GroupView_t {
    QByteArrayData data[13];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupView_t qt_meta_stringdata_GroupView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GroupView"
QT_MOC_LITERAL(1, 10, 12), // "groupChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "Group*"
QT_MOC_LITERAL(4, 31, 5), // "group"
QT_MOC_LITERAL(5, 37, 15), // "expandedChanged"
QT_MOC_LITERAL(6, 53, 5), // "index"
QT_MOC_LITERAL(7, 59, 16), // "emitGroupChanged"
QT_MOC_LITERAL(8, 76, 17), // "syncExpandedState"
QT_MOC_LITERAL(9, 94, 6), // "parent"
QT_MOC_LITERAL(10, 101, 5), // "start"
QT_MOC_LITERAL(11, 107, 3), // "end"
QT_MOC_LITERAL(12, 111, 10) // "modelReset"

    },
    "GroupView\0groupChanged\0\0Group*\0group\0"
    "expandedChanged\0index\0emitGroupChanged\0"
    "syncExpandedState\0parent\0start\0end\0"
    "modelReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,
       8,    3,   54,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void,

       0        // eod
};

void GroupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupView *_t = static_cast<GroupView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupChanged((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 1: _t->expandedChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->emitGroupChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->emitGroupChanged(); break;
        case 4: _t->syncExpandedState((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->modelReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GroupView::*_t)(Group * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GroupView::groupChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GroupView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_GroupView.data,
      qt_meta_data_GroupView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GroupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GroupView.stringdata0))
        return static_cast<void*>(const_cast< GroupView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int GroupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GroupView::groupChanged(Group * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
