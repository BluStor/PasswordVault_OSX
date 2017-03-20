/****************************************************************************
** Meta object code from reading C++ file 'TestSymmetricCipher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tests/TestSymmetricCipher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestSymmetricCipher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestSymmetricCipher_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestSymmetricCipher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestSymmetricCipher_t qt_meta_stringdata_TestSymmetricCipher = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TestSymmetricCipher"
QT_MOC_LITERAL(1, 20, 12), // "initTestCase"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "testAes256CbcEncryption"
QT_MOC_LITERAL(4, 58, 23), // "testAes256CbcDecryption"
QT_MOC_LITERAL(5, 82, 11), // "testSalsa20"
QT_MOC_LITERAL(6, 94, 11), // "testPadding"
QT_MOC_LITERAL(7, 106, 15) // "testStreamReset"

    },
    "TestSymmetricCipher\0initTestCase\0\0"
    "testAes256CbcEncryption\0testAes256CbcDecryption\0"
    "testSalsa20\0testPadding\0testStreamReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestSymmetricCipher[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestSymmetricCipher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestSymmetricCipher *_t = static_cast<TestSymmetricCipher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testAes256CbcEncryption(); break;
        case 2: _t->testAes256CbcDecryption(); break;
        case 3: _t->testSalsa20(); break;
        case 4: _t->testPadding(); break;
        case 5: _t->testStreamReset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestSymmetricCipher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestSymmetricCipher.data,
      qt_meta_data_TestSymmetricCipher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestSymmetricCipher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestSymmetricCipher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestSymmetricCipher.stringdata0))
        return static_cast<void*>(const_cast< TestSymmetricCipher*>(this));
    return QObject::qt_metacast(_clname);
}

int TestSymmetricCipher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
