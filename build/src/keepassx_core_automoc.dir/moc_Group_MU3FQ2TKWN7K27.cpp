/****************************************************************************
** Meta object code from reading C++ file 'Group.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/Group.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Group_t {
    QByteArrayData data[21];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Group_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Group_t qt_meta_stringdata_Group = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Group"
QT_MOC_LITERAL(1, 6, 11), // "dataChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "Group*"
QT_MOC_LITERAL(4, 26, 5), // "group"
QT_MOC_LITERAL(5, 32, 10), // "aboutToAdd"
QT_MOC_LITERAL(6, 43, 5), // "index"
QT_MOC_LITERAL(7, 49, 5), // "added"
QT_MOC_LITERAL(8, 55, 13), // "aboutToRemove"
QT_MOC_LITERAL(9, 69, 7), // "removed"
QT_MOC_LITERAL(10, 77, 11), // "aboutToMove"
QT_MOC_LITERAL(11, 89, 7), // "toGroup"
QT_MOC_LITERAL(12, 97, 5), // "moved"
QT_MOC_LITERAL(13, 103, 15), // "entryAboutToAdd"
QT_MOC_LITERAL(14, 119, 6), // "Entry*"
QT_MOC_LITERAL(15, 126, 5), // "entry"
QT_MOC_LITERAL(16, 132, 10), // "entryAdded"
QT_MOC_LITERAL(17, 143, 18), // "entryAboutToRemove"
QT_MOC_LITERAL(18, 162, 12), // "entryRemoved"
QT_MOC_LITERAL(19, 175, 16), // "entryDataChanged"
QT_MOC_LITERAL(20, 192, 8) // "modified"

    },
    "Group\0dataChanged\0\0Group*\0group\0"
    "aboutToAdd\0index\0added\0aboutToRemove\0"
    "removed\0aboutToMove\0toGroup\0moved\0"
    "entryAboutToAdd\0Entry*\0entry\0entryAdded\0"
    "entryAboutToRemove\0entryRemoved\0"
    "entryDataChanged\0modified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Group[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    2,   82,    2, 0x06 /* Public */,
       7,    0,   87,    2, 0x06 /* Public */,
       8,    1,   88,    2, 0x06 /* Public */,
       9,    0,   91,    2, 0x06 /* Public */,
      10,    3,   92,    2, 0x06 /* Public */,
      12,    0,   99,    2, 0x06 /* Public */,
      13,    1,  100,    2, 0x06 /* Public */,
      16,    1,  103,    2, 0x06 /* Public */,
      17,    1,  106,    2, 0x06 /* Public */,
      18,    1,  109,    2, 0x06 /* Public */,
      19,    1,  112,    2, 0x06 /* Public */,
      20,    0,  115,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,   11,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void Group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Group *_t = static_cast<Group *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 1: _t->aboutToAdd((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->added(); break;
        case 3: _t->aboutToRemove((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 4: _t->removed(); break;
        case 5: _t->aboutToMove((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< Group*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->moved(); break;
        case 7: _t->entryAboutToAdd((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 8: _t->entryAdded((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 9: _t->entryAboutToRemove((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 10: _t->entryRemoved((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 11: _t->entryDataChanged((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 12: _t->modified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Group* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Group* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Group* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Group* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Group::*_t)(Group * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Group::*_t)(Group * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::aboutToAdd)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::added)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Group::*_t)(Group * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::aboutToRemove)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::removed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Group::*_t)(Group * , Group * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::aboutToMove)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::moved)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Group::*_t)(Entry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::entryAboutToAdd)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Group::*_t)(Entry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::entryAdded)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Group::*_t)(Entry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::entryAboutToRemove)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Group::*_t)(Entry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::entryRemoved)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Group::*_t)(Entry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::entryDataChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Group::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Group::modified)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject Group::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Group.data,
      qt_meta_data_Group,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Group::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Group.stringdata0))
        return static_cast<void*>(const_cast< Group*>(this));
    return QObject::qt_metacast(_clname);
}

int Group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Group::dataChanged(Group * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Group::aboutToAdd(Group * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Group::added()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Group::aboutToRemove(Group * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Group::removed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Group::aboutToMove(Group * _t1, Group * _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Group::moved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Group::entryAboutToAdd(Entry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Group::entryAdded(Entry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Group::entryAboutToRemove(Entry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Group::entryRemoved(Entry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Group::entryDataChanged(Entry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Group::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
