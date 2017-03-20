/****************************************************************************
** Meta object code from reading C++ file 'TestAutoType.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tests/TestAutoType.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestAutoType.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestAutoType_t {
    QByteArrayData data[13];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestAutoType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestAutoType_t qt_meta_stringdata_TestAutoType = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TestAutoType"
QT_MOC_LITERAL(1, 13, 12), // "initTestCase"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "init"
QT_MOC_LITERAL(4, 32, 7), // "cleanup"
QT_MOC_LITERAL(5, 40, 12), // "testInternal"
QT_MOC_LITERAL(6, 53, 27), // "testAutoTypeWithoutSequence"
QT_MOC_LITERAL(7, 81, 24), // "testAutoTypeWithSequence"
QT_MOC_LITERAL(8, 106, 29), // "testGlobalAutoTypeWithNoMatch"
QT_MOC_LITERAL(9, 136, 30), // "testGlobalAutoTypeWithOneMatch"
QT_MOC_LITERAL(10, 167, 28), // "testGlobalAutoTypeTitleMatch"
QT_MOC_LITERAL(11, 196, 36), // "testGlobalAutoTypeTitleMatchD..."
QT_MOC_LITERAL(12, 233, 24) // "testGlobalAutoTypeRegExp"

    },
    "TestAutoType\0initTestCase\0\0init\0cleanup\0"
    "testInternal\0testAutoTypeWithoutSequence\0"
    "testAutoTypeWithSequence\0"
    "testGlobalAutoTypeWithNoMatch\0"
    "testGlobalAutoTypeWithOneMatch\0"
    "testGlobalAutoTypeTitleMatch\0"
    "testGlobalAutoTypeTitleMatchDisabled\0"
    "testGlobalAutoTypeRegExp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestAutoType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestAutoType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestAutoType *_t = static_cast<TestAutoType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->testInternal(); break;
        case 4: _t->testAutoTypeWithoutSequence(); break;
        case 5: _t->testAutoTypeWithSequence(); break;
        case 6: _t->testGlobalAutoTypeWithNoMatch(); break;
        case 7: _t->testGlobalAutoTypeWithOneMatch(); break;
        case 8: _t->testGlobalAutoTypeTitleMatch(); break;
        case 9: _t->testGlobalAutoTypeTitleMatchDisabled(); break;
        case 10: _t->testGlobalAutoTypeRegExp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestAutoType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestAutoType.data,
      qt_meta_data_TestAutoType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestAutoType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestAutoType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestAutoType.stringdata0))
        return static_cast<void*>(const_cast< TestAutoType*>(this));
    return QObject::qt_metacast(_clname);
}

int TestAutoType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
