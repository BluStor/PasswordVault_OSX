/****************************************************************************
** Meta object code from reading C++ file 'PasswordGeneratorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/PasswordGeneratorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PasswordGeneratorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PasswordGeneratorWidget_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PasswordGeneratorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PasswordGeneratorWidget_t qt_meta_stringdata_PasswordGeneratorWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PasswordGeneratorWidget"
QT_MOC_LITERAL(1, 24, 11), // "newPassword"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "password"
QT_MOC_LITERAL(4, 46, 18), // "updateApplyEnabled"
QT_MOC_LITERAL(5, 65, 15), // "emitNewPassword"
QT_MOC_LITERAL(6, 81, 12), // "saveSettings"
QT_MOC_LITERAL(7, 94, 11), // "sliderMoved"
QT_MOC_LITERAL(8, 106, 14), // "spinBoxChanged"
QT_MOC_LITERAL(9, 121, 15) // "updateGenerator"

    },
    "PasswordGeneratorWidget\0newPassword\0"
    "\0password\0updateApplyEnabled\0"
    "emitNewPassword\0saveSettings\0sliderMoved\0"
    "spinBoxChanged\0updateGenerator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PasswordGeneratorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x08 /* Private */,
       5,    0,   55,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PasswordGeneratorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PasswordGeneratorWidget *_t = static_cast<PasswordGeneratorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateApplyEnabled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->emitNewPassword(); break;
        case 3: _t->saveSettings(); break;
        case 4: _t->sliderMoved(); break;
        case 5: _t->spinBoxChanged(); break;
        case 6: _t->updateGenerator(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PasswordGeneratorWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PasswordGeneratorWidget::newPassword)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PasswordGeneratorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PasswordGeneratorWidget.data,
      qt_meta_data_PasswordGeneratorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PasswordGeneratorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PasswordGeneratorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PasswordGeneratorWidget.stringdata0))
        return static_cast<void*>(const_cast< PasswordGeneratorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PasswordGeneratorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PasswordGeneratorWidget::newPassword(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
