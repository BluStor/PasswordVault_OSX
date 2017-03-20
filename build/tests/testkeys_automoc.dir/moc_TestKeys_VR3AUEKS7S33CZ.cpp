/****************************************************************************
** Meta object code from reading C++ file 'TestKeys.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tests/TestKeys.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestKeys.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestKeys_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestKeys_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestKeys_t qt_meta_stringdata_TestKeys = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TestKeys"
QT_MOC_LITERAL(1, 9, 12), // "initTestCase"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "testComposite"
QT_MOC_LITERAL(4, 37, 11), // "testFileKey"
QT_MOC_LITERAL(5, 49, 16), // "testFileKey_data"
QT_MOC_LITERAL(6, 66, 17), // "testCreateFileKey"
QT_MOC_LITERAL(7, 84, 16), // "testFileKeyError"
QT_MOC_LITERAL(8, 101, 21) // "benchmarkTransformKey"

    },
    "TestKeys\0initTestCase\0\0testComposite\0"
    "testFileKey\0testFileKey_data\0"
    "testCreateFileKey\0testFileKeyError\0"
    "benchmarkTransformKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestKeys[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestKeys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestKeys *_t = static_cast<TestKeys *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testComposite(); break;
        case 2: _t->testFileKey(); break;
        case 3: _t->testFileKey_data(); break;
        case 4: _t->testCreateFileKey(); break;
        case 5: _t->testFileKeyError(); break;
        case 6: _t->benchmarkTransformKey(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestKeys::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestKeys.data,
      qt_meta_data_TestKeys,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestKeys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestKeys::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestKeys.stringdata0))
        return static_cast<void*>(const_cast< TestKeys*>(this));
    return QObject::qt_metacast(_clname);
}

int TestKeys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
