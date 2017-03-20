/****************************************************************************
** Meta object code from reading C++ file 'TestEntryModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tests/TestEntryModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestEntryModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestEntryModel_t {
    QByteArrayData data[11];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestEntryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestEntryModel_t qt_meta_stringdata_TestEntryModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TestEntryModel"
QT_MOC_LITERAL(1, 15, 12), // "initTestCase"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "test"
QT_MOC_LITERAL(4, 34, 20), // "testAttachmentsModel"
QT_MOC_LITERAL(5, 55, 19), // "testAttributesModel"
QT_MOC_LITERAL(6, 75, 20), // "testDefaultIconModel"
QT_MOC_LITERAL(7, 96, 19), // "testCustomIconModel"
QT_MOC_LITERAL(8, 116, 29), // "testAutoTypeAssociationsModel"
QT_MOC_LITERAL(9, 146, 14), // "testProxyModel"
QT_MOC_LITERAL(10, 161, 18) // "testDatabaseDelete"

    },
    "TestEntryModel\0initTestCase\0\0test\0"
    "testAttachmentsModel\0testAttributesModel\0"
    "testDefaultIconModel\0testCustomIconModel\0"
    "testAutoTypeAssociationsModel\0"
    "testProxyModel\0testDatabaseDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestEntryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestEntryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestEntryModel *_t = static_cast<TestEntryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->test(); break;
        case 2: _t->testAttachmentsModel(); break;
        case 3: _t->testAttributesModel(); break;
        case 4: _t->testDefaultIconModel(); break;
        case 5: _t->testCustomIconModel(); break;
        case 6: _t->testAutoTypeAssociationsModel(); break;
        case 7: _t->testProxyModel(); break;
        case 8: _t->testDatabaseDelete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestEntryModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestEntryModel.data,
      qt_meta_data_TestEntryModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestEntryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestEntryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestEntryModel.stringdata0))
        return static_cast<void*>(const_cast< TestEntryModel*>(this));
    return QObject::qt_metacast(_clname);
}

int TestEntryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
