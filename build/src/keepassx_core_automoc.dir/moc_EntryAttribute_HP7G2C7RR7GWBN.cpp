/****************************************************************************
** Meta object code from reading C++ file 'EntryAttributes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/EntryAttributes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryAttributes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntryAttributes_t {
    QByteArrayData data[16];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntryAttributes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntryAttributes_t qt_meta_stringdata_EntryAttributes = {
    {
QT_MOC_LITERAL(0, 0, 15), // "EntryAttributes"
QT_MOC_LITERAL(1, 16, 8), // "modified"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 18), // "defaultKeyModified"
QT_MOC_LITERAL(4, 45, 17), // "customKeyModified"
QT_MOC_LITERAL(5, 63, 3), // "key"
QT_MOC_LITERAL(6, 67, 14), // "aboutToBeAdded"
QT_MOC_LITERAL(7, 82, 5), // "added"
QT_MOC_LITERAL(8, 88, 16), // "aboutToBeRemoved"
QT_MOC_LITERAL(9, 105, 7), // "removed"
QT_MOC_LITERAL(10, 113, 13), // "aboutToRename"
QT_MOC_LITERAL(11, 127, 6), // "oldKey"
QT_MOC_LITERAL(12, 134, 6), // "newKey"
QT_MOC_LITERAL(13, 141, 7), // "renamed"
QT_MOC_LITERAL(14, 149, 14), // "aboutToBeReset"
QT_MOC_LITERAL(15, 164, 5) // "reset"

    },
    "EntryAttributes\0modified\0\0defaultKeyModified\0"
    "customKeyModified\0key\0aboutToBeAdded\0"
    "added\0aboutToBeRemoved\0removed\0"
    "aboutToRename\0oldKey\0newKey\0renamed\0"
    "aboutToBeReset\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntryAttributes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,
      10,    2,   86,    2, 0x06 /* Public */,
      13,    2,   91,    2, 0x06 /* Public */,
      14,    0,   96,    2, 0x06 /* Public */,
      15,    0,   97,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EntryAttributes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntryAttributes *_t = static_cast<EntryAttributes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->defaultKeyModified(); break;
        case 2: _t->customKeyModified((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->aboutToBeAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->added((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->aboutToBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->removed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->aboutToRename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->renamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->aboutToBeReset(); break;
        case 10: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EntryAttributes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::modified)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::defaultKeyModified)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::customKeyModified)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::aboutToBeAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::added)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::aboutToBeRemoved)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::removed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::aboutToRename)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::renamed)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::aboutToBeReset)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (EntryAttributes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryAttributes::reset)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject EntryAttributes::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EntryAttributes.data,
      qt_meta_data_EntryAttributes,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EntryAttributes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntryAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EntryAttributes.stringdata0))
        return static_cast<void*>(const_cast< EntryAttributes*>(this));
    return QObject::qt_metacast(_clname);
}

int EntryAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EntryAttributes::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void EntryAttributes::defaultKeyModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void EntryAttributes::customKeyModified(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EntryAttributes::aboutToBeAdded(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EntryAttributes::added(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EntryAttributes::aboutToBeRemoved(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EntryAttributes::removed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void EntryAttributes::aboutToRename(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void EntryAttributes::renamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void EntryAttributes::aboutToBeReset()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void EntryAttributes::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
