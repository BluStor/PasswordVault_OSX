/****************************************************************************
** Meta object code from reading C++ file 'DatabaseSettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/DatabaseSettingsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseSettingsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseSettingsWidget_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseSettingsWidget_t qt_meta_stringdata_DatabaseSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DatabaseSettingsWidget"
QT_MOC_LITERAL(1, 23, 12), // "editFinished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "accepted"
QT_MOC_LITERAL(4, 46, 4), // "save"
QT_MOC_LITERAL(5, 51, 6), // "reject"
QT_MOC_LITERAL(6, 58, 24) // "transformRoundsBenchmark"

    },
    "DatabaseSettingsWidget\0editFinished\0"
    "\0accepted\0save\0reject\0transformRoundsBenchmark"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseSettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DatabaseSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DatabaseSettingsWidget *_t = static_cast<DatabaseSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->save(); break;
        case 2: _t->reject(); break;
        case 3: _t->transformRoundsBenchmark(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DatabaseSettingsWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseSettingsWidget::editFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DatabaseSettingsWidget::staticMetaObject = {
    { &DialogyWidget::staticMetaObject, qt_meta_stringdata_DatabaseSettingsWidget.data,
      qt_meta_data_DatabaseSettingsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DatabaseSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseSettingsWidget.stringdata0))
        return static_cast<void*>(const_cast< DatabaseSettingsWidget*>(this));
    return DialogyWidget::qt_metacast(_clname);
}

int DatabaseSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DatabaseSettingsWidget::editFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
