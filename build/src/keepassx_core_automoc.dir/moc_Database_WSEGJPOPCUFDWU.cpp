/****************************************************************************
** Meta object code from reading C++ file 'Database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/Database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Database_t {
    QByteArrayData data[17];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Database_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Database_t qt_meta_stringdata_Database = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Database"
QT_MOC_LITERAL(1, 9, 16), // "groupDataChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "Group*"
QT_MOC_LITERAL(4, 34, 5), // "group"
QT_MOC_LITERAL(5, 40, 15), // "groupAboutToAdd"
QT_MOC_LITERAL(6, 56, 5), // "index"
QT_MOC_LITERAL(7, 62, 10), // "groupAdded"
QT_MOC_LITERAL(8, 73, 18), // "groupAboutToRemove"
QT_MOC_LITERAL(9, 92, 12), // "groupRemoved"
QT_MOC_LITERAL(10, 105, 16), // "groupAboutToMove"
QT_MOC_LITERAL(11, 122, 7), // "toGroup"
QT_MOC_LITERAL(12, 130, 10), // "groupMoved"
QT_MOC_LITERAL(13, 141, 15), // "nameTextChanged"
QT_MOC_LITERAL(14, 157, 8), // "modified"
QT_MOC_LITERAL(15, 166, 17), // "modifiedImmediate"
QT_MOC_LITERAL(16, 184, 18) // "startModifiedTimer"

    },
    "Database\0groupDataChanged\0\0Group*\0"
    "group\0groupAboutToAdd\0index\0groupAdded\0"
    "groupAboutToRemove\0groupRemoved\0"
    "groupAboutToMove\0toGroup\0groupMoved\0"
    "nameTextChanged\0modified\0modifiedImmediate\0"
    "startModifiedTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Database[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    2,   72,    2, 0x06 /* Public */,
       7,    0,   77,    2, 0x06 /* Public */,
       8,    1,   78,    2, 0x06 /* Public */,
       9,    0,   81,    2, 0x06 /* Public */,
      10,    3,   82,    2, 0x06 /* Public */,
      12,    0,   89,    2, 0x06 /* Public */,
      13,    0,   90,    2, 0x06 /* Public */,
      14,    0,   91,    2, 0x06 /* Public */,
      15,    0,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,   11,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Database *_t = static_cast<Database *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupDataChanged((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 1: _t->groupAboutToAdd((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->groupAdded(); break;
        case 3: _t->groupAboutToRemove((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 4: _t->groupRemoved(); break;
        case 5: _t->groupAboutToMove((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< Group*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->groupMoved(); break;
        case 7: _t->nameTextChanged(); break;
        case 8: _t->modified(); break;
        case 9: _t->modifiedImmediate(); break;
        case 10: _t->startModifiedTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Database::*_t)(Group * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::groupDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Database::*_t)(Group * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::groupAboutToAdd)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Database::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::groupAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Database::*_t)(Group * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::groupAboutToRemove)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Database::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::groupRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Database::*_t)(Group * , Group * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::groupAboutToMove)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Database::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::groupMoved)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Database::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::nameTextChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Database::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::modified)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Database::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Database::modifiedImmediate)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject Database::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Database.data,
      qt_meta_data_Database,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Database::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Database.stringdata0))
        return static_cast<void*>(const_cast< Database*>(this));
    return QObject::qt_metacast(_clname);
}

int Database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Database::groupDataChanged(Group * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Database::groupAboutToAdd(Group * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Database::groupAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Database::groupAboutToRemove(Group * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Database::groupRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Database::groupAboutToMove(Group * _t1, Group * _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Database::groupMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Database::nameTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void Database::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void Database::modifiedImmediate()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
