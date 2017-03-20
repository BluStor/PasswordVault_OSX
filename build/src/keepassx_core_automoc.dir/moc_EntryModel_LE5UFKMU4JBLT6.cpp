/****************************************************************************
** Meta object code from reading C++ file 'EntryModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/entry/EntryModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntryModel_t {
    QByteArrayData data[14];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntryModel_t qt_meta_stringdata_EntryModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EntryModel"
QT_MOC_LITERAL(1, 11, 23), // "switchedToEntryListMode"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "switchedToGroupMode"
QT_MOC_LITERAL(4, 56, 8), // "setGroup"
QT_MOC_LITERAL(5, 65, 6), // "Group*"
QT_MOC_LITERAL(6, 72, 5), // "group"
QT_MOC_LITERAL(7, 78, 15), // "entryAboutToAdd"
QT_MOC_LITERAL(8, 94, 6), // "Entry*"
QT_MOC_LITERAL(9, 101, 5), // "entry"
QT_MOC_LITERAL(10, 107, 10), // "entryAdded"
QT_MOC_LITERAL(11, 118, 18), // "entryAboutToRemove"
QT_MOC_LITERAL(12, 137, 12), // "entryRemoved"
QT_MOC_LITERAL(13, 150, 16) // "entryDataChanged"

    },
    "EntryModel\0switchedToEntryListMode\0\0"
    "switchedToGroupMode\0setGroup\0Group*\0"
    "group\0entryAboutToAdd\0Entry*\0entry\0"
    "entryAdded\0entryAboutToRemove\0"
    "entryRemoved\0entryDataChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   56,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void EntryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntryModel *_t = static_cast<EntryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switchedToEntryListMode(); break;
        case 1: _t->switchedToGroupMode(); break;
        case 2: _t->setGroup((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 3: _t->entryAboutToAdd((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 4: _t->entryAdded((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 5: _t->entryAboutToRemove((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 6: _t->entryRemoved(); break;
        case 7: _t->entryDataChanged((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EntryModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryModel::switchedToEntryListMode)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EntryModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryModel::switchedToGroupMode)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject EntryModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_EntryModel.data,
      qt_meta_data_EntryModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EntryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EntryModel.stringdata0))
        return static_cast<void*>(const_cast< EntryModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int EntryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
void EntryModel::switchedToEntryListMode()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void EntryModel::switchedToGroupMode()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
