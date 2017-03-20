/****************************************************************************
** Meta object code from reading C++ file 'TestKeePass1Reader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../tests/TestKeePass1Reader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestKeePass1Reader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestKeePass1Reader_t {
    QByteArrayData data[14];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestKeePass1Reader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestKeePass1Reader_t qt_meta_stringdata_TestKeePass1Reader = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TestKeePass1Reader"
QT_MOC_LITERAL(1, 19, 12), // "initTestCase"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "testBasic"
QT_MOC_LITERAL(4, 43, 13), // "testMasterKey"
QT_MOC_LITERAL(5, 57, 15), // "testCustomIcons"
QT_MOC_LITERAL(6, 73, 17), // "testGroupExpanded"
QT_MOC_LITERAL(7, 91, 12), // "testAutoType"
QT_MOC_LITERAL(8, 104, 11), // "testFileKey"
QT_MOC_LITERAL(9, 116, 16), // "testFileKey_data"
QT_MOC_LITERAL(10, 133, 16), // "testCompositeKey"
QT_MOC_LITERAL(11, 150, 11), // "testTwofish"
QT_MOC_LITERAL(12, 162, 18), // "testCP1252Password"
QT_MOC_LITERAL(13, 181, 15) // "cleanupTestCase"

    },
    "TestKeePass1Reader\0initTestCase\0\0"
    "testBasic\0testMasterKey\0testCustomIcons\0"
    "testGroupExpanded\0testAutoType\0"
    "testFileKey\0testFileKey_data\0"
    "testCompositeKey\0testTwofish\0"
    "testCP1252Password\0cleanupTestCase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestKeePass1Reader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void TestKeePass1Reader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestKeePass1Reader *_t = static_cast<TestKeePass1Reader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testBasic(); break;
        case 2: _t->testMasterKey(); break;
        case 3: _t->testCustomIcons(); break;
        case 4: _t->testGroupExpanded(); break;
        case 5: _t->testAutoType(); break;
        case 6: _t->testFileKey(); break;
        case 7: _t->testFileKey_data(); break;
        case 8: _t->testCompositeKey(); break;
        case 9: _t->testTwofish(); break;
        case 10: _t->testCP1252Password(); break;
        case 11: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestKeePass1Reader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestKeePass1Reader.data,
      qt_meta_data_TestKeePass1Reader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestKeePass1Reader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestKeePass1Reader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestKeePass1Reader.stringdata0))
        return static_cast<void*>(const_cast< TestKeePass1Reader*>(this));
    return QObject::qt_metacast(_clname);
}

int TestKeePass1Reader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
