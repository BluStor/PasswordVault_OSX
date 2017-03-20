/****************************************************************************
** Meta object code from reading C++ file 'AutoType.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/autotype/AutoType.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoType.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoType_t {
    QByteArrayData data[12];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoType_t qt_meta_stringdata_AutoType = {
    {
QT_MOC_LITERAL(0, 0, 8), // "AutoType"
QT_MOC_LITERAL(1, 9, 23), // "globalShortcutTriggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "performGlobalAutoType"
QT_MOC_LITERAL(4, 56, 16), // "QList<Database*>"
QT_MOC_LITERAL(5, 73, 6), // "dbList"
QT_MOC_LITERAL(6, 80, 25), // "performAutoTypeFromGlobal"
QT_MOC_LITERAL(7, 106, 6), // "Entry*"
QT_MOC_LITERAL(8, 113, 5), // "entry"
QT_MOC_LITERAL(9, 119, 8), // "sequence"
QT_MOC_LITERAL(10, 128, 15), // "resetInAutoType"
QT_MOC_LITERAL(11, 144, 12) // "unloadPlugin"

    },
    "AutoType\0globalShortcutTriggered\0\0"
    "performGlobalAutoType\0QList<Database*>\0"
    "dbList\0performAutoTypeFromGlobal\0"
    "Entry*\0entry\0sequence\0resetInAutoType\0"
    "unloadPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       6,    2,   43,    2, 0x08 /* Private */,
      10,    0,   48,    2, 0x08 /* Private */,
      11,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutoType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoType *_t = static_cast<AutoType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->globalShortcutTriggered(); break;
        case 1: _t->performGlobalAutoType((*reinterpret_cast< const QList<Database*>(*)>(_a[1]))); break;
        case 2: _t->performAutoTypeFromGlobal((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->resetInAutoType(); break;
        case 4: _t->unloadPlugin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutoType::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoType::globalShortcutTriggered)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AutoType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoType.data,
      qt_meta_data_AutoType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutoType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutoType.stringdata0))
        return static_cast<void*>(const_cast< AutoType*>(this));
    return QObject::qt_metacast(_clname);
}

int AutoType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AutoType::globalShortcutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
