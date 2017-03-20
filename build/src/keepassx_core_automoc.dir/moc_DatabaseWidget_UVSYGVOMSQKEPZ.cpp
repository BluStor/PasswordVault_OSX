/****************************************************************************
** Meta object code from reading C++ file 'DatabaseWidgetStateSync.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/DatabaseWidgetStateSync.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseWidgetStateSync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseWidgetStateSync_t {
    QByteArrayData data[10];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseWidgetStateSync_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseWidgetStateSync_t qt_meta_stringdata_DatabaseWidgetStateSync = {
    {
QT_MOC_LITERAL(0, 0, 23), // "DatabaseWidgetStateSync"
QT_MOC_LITERAL(1, 24, 9), // "setActive"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "DatabaseWidget*"
QT_MOC_LITERAL(4, 51, 8), // "dbWidget"
QT_MOC_LITERAL(5, 60, 15), // "restoreListView"
QT_MOC_LITERAL(6, 76, 17), // "restoreSearchView"
QT_MOC_LITERAL(7, 94, 12), // "blockUpdates"
QT_MOC_LITERAL(8, 107, 19), // "updateSplitterSizes"
QT_MOC_LITERAL(9, 127, 17) // "updateColumnSizes"

    },
    "DatabaseWidgetStateSync\0setActive\0\0"
    "DatabaseWidget*\0dbWidget\0restoreListView\0"
    "restoreSearchView\0blockUpdates\0"
    "updateSplitterSizes\0updateColumnSizes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseWidgetStateSync[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DatabaseWidgetStateSync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DatabaseWidgetStateSync *_t = static_cast<DatabaseWidgetStateSync *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setActive((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 1: _t->restoreListView(); break;
        case 2: _t->restoreSearchView(); break;
        case 3: _t->blockUpdates(); break;
        case 4: _t->updateSplitterSizes(); break;
        case 5: _t->updateColumnSizes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatabaseWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject DatabaseWidgetStateSync::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DatabaseWidgetStateSync.data,
      qt_meta_data_DatabaseWidgetStateSync,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DatabaseWidgetStateSync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseWidgetStateSync::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseWidgetStateSync.stringdata0))
        return static_cast<void*>(const_cast< DatabaseWidgetStateSync*>(this));
    return QObject::qt_metacast(_clname);
}

int DatabaseWidgetStateSync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
