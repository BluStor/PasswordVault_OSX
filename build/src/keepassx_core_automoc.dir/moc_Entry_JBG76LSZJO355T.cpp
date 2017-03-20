/****************************************************************************
** Meta object code from reading C++ file 'Entry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/Entry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Entry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Entry_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Entry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Entry_t qt_meta_stringdata_Entry = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Entry"
QT_MOC_LITERAL(1, 6, 11), // "dataChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "Entry*"
QT_MOC_LITERAL(4, 26, 5), // "entry"
QT_MOC_LITERAL(5, 32, 8), // "modified"
QT_MOC_LITERAL(6, 41, 15), // "emitDataChanged"
QT_MOC_LITERAL(7, 57, 14), // "updateTimeinfo"
QT_MOC_LITERAL(8, 72, 24) // "updateModifiedSinceBegin"

    },
    "Entry\0dataChanged\0\0Entry*\0entry\0"
    "modified\0emitDataChanged\0updateTimeinfo\0"
    "updateModifiedSinceBegin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Entry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Entry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Entry *_t = static_cast<Entry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 1: _t->modified(); break;
        case 2: _t->emitDataChanged(); break;
        case 3: _t->updateTimeinfo(); break;
        case 4: _t->updateModifiedSinceBegin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (Entry::*_t)(Entry * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Entry::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Entry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Entry::modified)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Entry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Entry.data,
      qt_meta_data_Entry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Entry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Entry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Entry.stringdata0))
        return static_cast<void*>(const_cast< Entry*>(this));
    return QObject::qt_metacast(_clname);
}

int Entry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Entry::dataChanged(Entry * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Entry::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
