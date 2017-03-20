/****************************************************************************
** Meta object code from reading C++ file 'AutoTypeTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/autotype/test/AutoTypeTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoTypeTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoTypePlatformTest_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoTypePlatformTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoTypePlatformTest_t qt_meta_stringdata_AutoTypePlatformTest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AutoTypePlatformTest"
QT_MOC_LITERAL(1, 21, 23), // "globalShortcutTriggered"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "AutoTypePlatformTest\0globalShortcutTriggered\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoTypePlatformTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void AutoTypePlatformTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoTypePlatformTest *_t = static_cast<AutoTypePlatformTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->globalShortcutTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutoTypePlatformTest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoTypePlatformTest::globalShortcutTriggered)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AutoTypePlatformTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoTypePlatformTest.data,
      qt_meta_data_AutoTypePlatformTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutoTypePlatformTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoTypePlatformTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutoTypePlatformTest.stringdata0))
        return static_cast<void*>(const_cast< AutoTypePlatformTest*>(this));
    if (!strcmp(_clname, "AutoTypePlatformInterface"))
        return static_cast< AutoTypePlatformInterface*>(const_cast< AutoTypePlatformTest*>(this));
    if (!strcmp(_clname, "AutoTypeTestInterface"))
        return static_cast< AutoTypeTestInterface*>(const_cast< AutoTypePlatformTest*>(this));
    if (!strcmp(_clname, "org.keepassx.AutoTypePlatformInterface/1"))
        return static_cast< AutoTypePlatformInterface*>(const_cast< AutoTypePlatformTest*>(this));
    if (!strcmp(_clname, "org.keepassx.AutoTypeTestInterface/1"))
        return static_cast< AutoTypeTestInterface*>(const_cast< AutoTypePlatformTest*>(this));
    return QObject::qt_metacast(_clname);
}

int AutoTypePlatformTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AutoTypePlatformTest::globalShortcutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '&',  0x00, 'o',  'r',  'g',  '.',  'k',  'e', 
    'e',  'p',  'a',  's',  's',  'x',  '.',  'A', 
    'u',  't',  'o',  'T',  'y',  'p',  'e',  'P', 
    'l',  'a',  't',  'f',  'o',  'r',  'm',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x14, 0x00, 'A',  'u',  't',  'o',  'T',  'y', 
    'p',  'e',  'P',  'l',  'a',  't',  'f',  'o', 
    'r',  'm',  'T',  'e',  's',  't',  0x00, 0x00,
    0x1a, 0x00, 0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x12, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xb4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '&',  0x00, 'o',  'r',  'g',  '.',  'k',  'e', 
    'e',  'p',  'a',  's',  's',  'x',  '.',  'A', 
    'u',  't',  'o',  'T',  'y',  'p',  'e',  'P', 
    'l',  'a',  't',  'f',  'o',  'r',  'm',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x14, 0x00, 'A',  'u', 
    't',  'o',  'T',  'y',  'p',  'e',  'P',  'l', 
    'a',  't',  'f',  'o',  'r',  'm',  'T',  'e', 
    's',  't',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, 0x00, 0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(AutoTypePlatformTest, AutoTypePlatformTest)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
