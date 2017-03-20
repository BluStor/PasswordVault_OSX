/****************************************************************************
** Meta object code from reading C++ file 'AutoTypeAssociations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/AutoTypeAssociations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoTypeAssociations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoTypeAssociations_t {
    QByteArrayData data[11];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoTypeAssociations_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoTypeAssociations_t qt_meta_stringdata_AutoTypeAssociations = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AutoTypeAssociations"
QT_MOC_LITERAL(1, 21, 8), // "modified"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "dataChanged"
QT_MOC_LITERAL(4, 43, 5), // "index"
QT_MOC_LITERAL(5, 49, 10), // "aboutToAdd"
QT_MOC_LITERAL(6, 60, 5), // "added"
QT_MOC_LITERAL(7, 66, 13), // "aboutToRemove"
QT_MOC_LITERAL(8, 80, 7), // "removed"
QT_MOC_LITERAL(9, 88, 12), // "aboutToReset"
QT_MOC_LITERAL(10, 101, 5) // "reset"

    },
    "AutoTypeAssociations\0modified\0\0"
    "dataChanged\0index\0aboutToAdd\0added\0"
    "aboutToRemove\0removed\0aboutToReset\0"
    "reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoTypeAssociations[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       6,    1,   61,    2, 0x06 /* Public */,
       7,    1,   64,    2, 0x06 /* Public */,
       8,    1,   67,    2, 0x06 /* Public */,
       9,    0,   70,    2, 0x06 /* Public */,
      10,    0,   71,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutoTypeAssociations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoTypeAssociations *_t = static_cast<AutoTypeAssociations *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->aboutToAdd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->added((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->aboutToRemove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->removed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->aboutToReset(); break;
        case 7: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutoTypeAssociations::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypeAssociations::modified)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AutoTypeAssociations::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypeAssociations::dataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AutoTypeAssociations::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypeAssociations::aboutToAdd)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AutoTypeAssociations::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypeAssociations::added)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AutoTypeAssociations::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypeAssociations::aboutToRemove)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AutoTypeAssociations::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypeAssociations::removed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (AutoTypeAssociations::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypeAssociations::aboutToReset)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (AutoTypeAssociations::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypeAssociations::reset)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject AutoTypeAssociations::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoTypeAssociations.data,
      qt_meta_data_AutoTypeAssociations,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutoTypeAssociations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoTypeAssociations::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutoTypeAssociations.stringdata0))
        return static_cast<void*>(const_cast< AutoTypeAssociations*>(this));
    return QObject::qt_metacast(_clname);
}

int AutoTypeAssociations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AutoTypeAssociations::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AutoTypeAssociations::dataChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AutoTypeAssociations::aboutToAdd(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AutoTypeAssociations::added(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AutoTypeAssociations::aboutToRemove(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AutoTypeAssociations::removed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AutoTypeAssociations::aboutToReset()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void AutoTypeAssociations::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
