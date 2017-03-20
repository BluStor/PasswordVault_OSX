/****************************************************************************
** Meta object code from reading C++ file 'EntryView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/entry/EntryView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntryView_t {
    QByteArrayData data[15];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntryView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntryView_t qt_meta_stringdata_EntryView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EntryView"
QT_MOC_LITERAL(1, 10, 14), // "entryActivated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "Entry*"
QT_MOC_LITERAL(4, 33, 5), // "entry"
QT_MOC_LITERAL(5, 39, 23), // "EntryModel::ModelColumn"
QT_MOC_LITERAL(6, 63, 6), // "column"
QT_MOC_LITERAL(7, 70, 21), // "entrySelectionChanged"
QT_MOC_LITERAL(8, 92, 8), // "setGroup"
QT_MOC_LITERAL(9, 101, 6), // "Group*"
QT_MOC_LITERAL(10, 108, 5), // "group"
QT_MOC_LITERAL(11, 114, 18), // "emitEntryActivated"
QT_MOC_LITERAL(12, 133, 5), // "index"
QT_MOC_LITERAL(13, 139, 21), // "switchToEntryListMode"
QT_MOC_LITERAL(14, 161, 17) // "switchToGroupMode"

    },
    "EntryView\0entryActivated\0\0Entry*\0entry\0"
    "EntryModel::ModelColumn\0column\0"
    "entrySelectionChanged\0setGroup\0Group*\0"
    "group\0emitEntryActivated\0index\0"
    "switchToEntryListMode\0switchToGroupMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntryView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   50,    2, 0x0a /* Public */,
      11,    1,   53,    2, 0x08 /* Private */,
      13,    0,   56,    2, 0x08 /* Private */,
      14,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QModelIndex,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EntryView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntryView *_t = static_cast<EntryView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entryActivated((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< EntryModel::ModelColumn(*)>(_a[2]))); break;
        case 1: _t->entrySelectionChanged(); break;
        case 2: _t->setGroup((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 3: _t->emitEntryActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->switchToEntryListMode(); break;
        case 5: _t->switchToGroupMode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EntryView::*_t)(Entry * , EntryModel::ModelColumn );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryView::entryActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EntryView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EntryView::entrySelectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject EntryView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_EntryView.data,
      qt_meta_data_EntryView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EntryView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntryView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EntryView.stringdata0))
        return static_cast<void*>(const_cast< EntryView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int EntryView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EntryView::entryActivated(Entry * _t1, EntryModel::ModelColumn _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EntryView::entrySelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
