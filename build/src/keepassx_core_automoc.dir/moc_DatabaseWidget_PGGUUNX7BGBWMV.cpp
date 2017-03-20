/****************************************************************************
** Meta object code from reading C++ file 'DatabaseWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/DatabaseWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseWidget_t {
    QByteArrayData data[72];
    char stringdata0[1067];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseWidget_t qt_meta_stringdata_DatabaseWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DatabaseWidget"
QT_MOC_LITERAL(1, 15, 12), // "closeRequest"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "currentModeChanged"
QT_MOC_LITERAL(4, 48, 20), // "DatabaseWidget::Mode"
QT_MOC_LITERAL(5, 69, 4), // "mode"
QT_MOC_LITERAL(6, 74, 12), // "groupChanged"
QT_MOC_LITERAL(7, 87, 21), // "entrySelectionChanged"
QT_MOC_LITERAL(8, 109, 15), // "databaseChanged"
QT_MOC_LITERAL(9, 125, 9), // "Database*"
QT_MOC_LITERAL(10, 135, 5), // "newDb"
QT_MOC_LITERAL(11, 141, 25), // "groupContextMenuRequested"
QT_MOC_LITERAL(12, 167, 9), // "globalPos"
QT_MOC_LITERAL(13, 177, 25), // "entryContextMenuRequested"
QT_MOC_LITERAL(14, 203, 16), // "unlockedDatabase"
QT_MOC_LITERAL(15, 220, 23), // "listModeAboutToActivate"
QT_MOC_LITERAL(16, 244, 17), // "listModeActivated"
QT_MOC_LITERAL(17, 262, 25), // "searchModeAboutToActivate"
QT_MOC_LITERAL(18, 288, 19), // "searchModeActivated"
QT_MOC_LITERAL(19, 308, 20), // "splitterSizesChanged"
QT_MOC_LITERAL(20, 329, 23), // "entryColumnSizesChanged"
QT_MOC_LITERAL(21, 353, 11), // "createEntry"
QT_MOC_LITERAL(22, 365, 10), // "cloneEntry"
QT_MOC_LITERAL(23, 376, 13), // "deleteEntries"
QT_MOC_LITERAL(24, 390, 9), // "copyTitle"
QT_MOC_LITERAL(25, 400, 12), // "copyUsername"
QT_MOC_LITERAL(26, 413, 12), // "copyPassword"
QT_MOC_LITERAL(27, 426, 7), // "copyURL"
QT_MOC_LITERAL(28, 434, 9), // "copyNotes"
QT_MOC_LITERAL(29, 444, 13), // "copyAttribute"
QT_MOC_LITERAL(30, 458, 8), // "QAction*"
QT_MOC_LITERAL(31, 467, 6), // "action"
QT_MOC_LITERAL(32, 474, 15), // "performAutoType"
QT_MOC_LITERAL(33, 490, 7), // "openUrl"
QT_MOC_LITERAL(34, 498, 15), // "openUrlForEntry"
QT_MOC_LITERAL(35, 514, 6), // "Entry*"
QT_MOC_LITERAL(36, 521, 5), // "entry"
QT_MOC_LITERAL(37, 527, 11), // "createGroup"
QT_MOC_LITERAL(38, 539, 11), // "deleteGroup"
QT_MOC_LITERAL(39, 551, 17), // "switchToEntryEdit"
QT_MOC_LITERAL(40, 569, 17), // "switchToGroupEdit"
QT_MOC_LITERAL(41, 587, 23), // "switchToMasterKeyChange"
QT_MOC_LITERAL(42, 611, 24), // "switchToDatabaseSettings"
QT_MOC_LITERAL(43, 636, 20), // "switchToOpenDatabase"
QT_MOC_LITERAL(44, 657, 8), // "fileName"
QT_MOC_LITERAL(45, 666, 8), // "password"
QT_MOC_LITERAL(46, 675, 7), // "keyFile"
QT_MOC_LITERAL(47, 683, 22), // "switchToImportKeepass1"
QT_MOC_LITERAL(48, 706, 10), // "openSearch"
QT_MOC_LITERAL(49, 717, 29), // "entryActivationSignalReceived"
QT_MOC_LITERAL(50, 747, 23), // "EntryModel::ModelColumn"
QT_MOC_LITERAL(51, 771, 6), // "column"
QT_MOC_LITERAL(52, 778, 21), // "switchBackToEntryEdit"
QT_MOC_LITERAL(53, 800, 12), // "switchToView"
QT_MOC_LITERAL(54, 813, 8), // "accepted"
QT_MOC_LITERAL(55, 822, 19), // "switchToHistoryView"
QT_MOC_LITERAL(56, 842, 6), // "create"
QT_MOC_LITERAL(57, 849, 6), // "Group*"
QT_MOC_LITERAL(58, 856, 29), // "emitGroupContextMenuRequested"
QT_MOC_LITERAL(59, 886, 3), // "pos"
QT_MOC_LITERAL(60, 890, 29), // "emitEntryContextMenuRequested"
QT_MOC_LITERAL(61, 920, 15), // "updateMasterKey"
QT_MOC_LITERAL(62, 936, 12), // "openDatabase"
QT_MOC_LITERAL(63, 949, 14), // "unlockDatabase"
QT_MOC_LITERAL(64, 964, 22), // "emitCurrentModeChanged"
QT_MOC_LITERAL(65, 987, 14), // "clearLastGroup"
QT_MOC_LITERAL(66, 1002, 5), // "group"
QT_MOC_LITERAL(67, 1008, 6), // "search"
QT_MOC_LITERAL(68, 1015, 11), // "startSearch"
QT_MOC_LITERAL(69, 1027, 16), // "startSearchTimer"
QT_MOC_LITERAL(70, 1044, 10), // "showSearch"
QT_MOC_LITERAL(71, 1055, 11) // "closeSearch"

    },
    "DatabaseWidget\0closeRequest\0\0"
    "currentModeChanged\0DatabaseWidget::Mode\0"
    "mode\0groupChanged\0entrySelectionChanged\0"
    "databaseChanged\0Database*\0newDb\0"
    "groupContextMenuRequested\0globalPos\0"
    "entryContextMenuRequested\0unlockedDatabase\0"
    "listModeAboutToActivate\0listModeActivated\0"
    "searchModeAboutToActivate\0searchModeActivated\0"
    "splitterSizesChanged\0entryColumnSizesChanged\0"
    "createEntry\0cloneEntry\0deleteEntries\0"
    "copyTitle\0copyUsername\0copyPassword\0"
    "copyURL\0copyNotes\0copyAttribute\0"
    "QAction*\0action\0performAutoType\0openUrl\0"
    "openUrlForEntry\0Entry*\0entry\0createGroup\0"
    "deleteGroup\0switchToEntryEdit\0"
    "switchToGroupEdit\0switchToMasterKeyChange\0"
    "switchToDatabaseSettings\0switchToOpenDatabase\0"
    "fileName\0password\0keyFile\0"
    "switchToImportKeepass1\0openSearch\0"
    "entryActivationSignalReceived\0"
    "EntryModel::ModelColumn\0column\0"
    "switchBackToEntryEdit\0switchToView\0"
    "accepted\0switchToHistoryView\0create\0"
    "Group*\0emitGroupContextMenuRequested\0"
    "pos\0emitEntryContextMenuRequested\0"
    "updateMasterKey\0openDatabase\0"
    "unlockDatabase\0emitCurrentModeChanged\0"
    "clearLastGroup\0group\0search\0startSearch\0"
    "startSearchTimer\0showSearch\0closeSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  289,    2, 0x06 /* Public */,
       3,    1,  290,    2, 0x06 /* Public */,
       6,    0,  293,    2, 0x06 /* Public */,
       7,    0,  294,    2, 0x06 /* Public */,
       8,    1,  295,    2, 0x06 /* Public */,
      11,    1,  298,    2, 0x06 /* Public */,
      13,    1,  301,    2, 0x06 /* Public */,
      14,    0,  304,    2, 0x06 /* Public */,
      15,    0,  305,    2, 0x06 /* Public */,
      16,    0,  306,    2, 0x06 /* Public */,
      17,    0,  307,    2, 0x06 /* Public */,
      18,    0,  308,    2, 0x06 /* Public */,
      19,    0,  309,    2, 0x06 /* Public */,
      20,    0,  310,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  311,    2, 0x0a /* Public */,
      22,    0,  312,    2, 0x0a /* Public */,
      23,    0,  313,    2, 0x0a /* Public */,
      24,    0,  314,    2, 0x0a /* Public */,
      25,    0,  315,    2, 0x0a /* Public */,
      26,    0,  316,    2, 0x0a /* Public */,
      27,    0,  317,    2, 0x0a /* Public */,
      28,    0,  318,    2, 0x0a /* Public */,
      29,    1,  319,    2, 0x0a /* Public */,
      32,    0,  322,    2, 0x0a /* Public */,
      33,    0,  323,    2, 0x0a /* Public */,
      34,    1,  324,    2, 0x0a /* Public */,
      37,    0,  327,    2, 0x0a /* Public */,
      38,    0,  328,    2, 0x0a /* Public */,
      39,    0,  329,    2, 0x0a /* Public */,
      40,    0,  330,    2, 0x0a /* Public */,
      41,    0,  331,    2, 0x0a /* Public */,
      42,    0,  332,    2, 0x0a /* Public */,
      43,    1,  333,    2, 0x0a /* Public */,
      43,    3,  336,    2, 0x0a /* Public */,
      47,    1,  343,    2, 0x0a /* Public */,
      48,    0,  346,    2, 0x0a /* Public */,
      49,    2,  347,    2, 0x08 /* Private */,
      52,    0,  352,    2, 0x08 /* Private */,
      53,    1,  353,    2, 0x08 /* Private */,
      55,    1,  356,    2, 0x08 /* Private */,
      39,    1,  359,    2, 0x08 /* Private */,
      39,    2,  362,    2, 0x08 /* Private */,
      40,    2,  367,    2, 0x08 /* Private */,
      58,    1,  372,    2, 0x08 /* Private */,
      60,    1,  375,    2, 0x08 /* Private */,
      61,    1,  378,    2, 0x08 /* Private */,
      62,    1,  381,    2, 0x08 /* Private */,
      63,    1,  384,    2, 0x08 /* Private */,
      64,    0,  387,    2, 0x08 /* Private */,
      65,    1,  388,    2, 0x08 /* Private */,
      67,    0,  391,    2, 0x08 /* Private */,
      68,    0,  392,    2, 0x08 /* Private */,
      69,    0,  393,    2, 0x08 /* Private */,
      70,    0,  394,    2, 0x08 /* Private */,
      71,    0,  395,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   44,   45,   46,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 50,   36,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool,   36,   56,
    QMetaType::Void, 0x80000000 | 57, QMetaType::Bool,   36,   56,
    QMetaType::Void, QMetaType::QPoint,   59,
    QMetaType::Void, QMetaType::QPoint,   59,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 57,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DatabaseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DatabaseWidget *_t = static_cast<DatabaseWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeRequest(); break;
        case 1: _t->currentModeChanged((*reinterpret_cast< DatabaseWidget::Mode(*)>(_a[1]))); break;
        case 2: _t->groupChanged(); break;
        case 3: _t->entrySelectionChanged(); break;
        case 4: _t->databaseChanged((*reinterpret_cast< Database*(*)>(_a[1]))); break;
        case 5: _t->groupContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->entryContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->unlockedDatabase(); break;
        case 8: _t->listModeAboutToActivate(); break;
        case 9: _t->listModeActivated(); break;
        case 10: _t->searchModeAboutToActivate(); break;
        case 11: _t->searchModeActivated(); break;
        case 12: _t->splitterSizesChanged(); break;
        case 13: _t->entryColumnSizesChanged(); break;
        case 14: _t->createEntry(); break;
        case 15: _t->cloneEntry(); break;
        case 16: _t->deleteEntries(); break;
        case 17: _t->copyTitle(); break;
        case 18: _t->copyUsername(); break;
        case 19: _t->copyPassword(); break;
        case 20: _t->copyURL(); break;
        case 21: _t->copyNotes(); break;
        case 22: _t->copyAttribute((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 23: _t->performAutoType(); break;
        case 24: _t->openUrl(); break;
        case 25: _t->openUrlForEntry((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 26: _t->createGroup(); break;
        case 27: _t->deleteGroup(); break;
        case 28: _t->switchToEntryEdit(); break;
        case 29: _t->switchToGroupEdit(); break;
        case 30: _t->switchToMasterKeyChange(); break;
        case 31: _t->switchToDatabaseSettings(); break;
        case 32: _t->switchToOpenDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->switchToOpenDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 34: _t->switchToImportKeepass1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->openSearch(); break;
        case 36: _t->entryActivationSignalReceived((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< EntryModel::ModelColumn(*)>(_a[2]))); break;
        case 37: _t->switchBackToEntryEdit(); break;
        case 38: _t->switchToView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->switchToHistoryView((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 40: _t->switchToEntryEdit((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 41: _t->switchToEntryEdit((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->switchToGroupEdit((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 43: _t->emitGroupContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 44: _t->emitEntryContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 45: _t->updateMasterKey((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->openDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->unlockDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->emitCurrentModeChanged(); break;
        case 49: _t->clearLastGroup((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 50: _t->search(); break;
        case 51: _t->startSearch(); break;
        case 52: _t->startSearchTimer(); break;
        case 53: _t->showSearch(); break;
        case 54: _t->closeSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::closeRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)(DatabaseWidget::Mode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::currentModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::groupChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::entrySelectionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)(Database * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::databaseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::groupContextMenuRequested)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::entryContextMenuRequested)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::unlockedDatabase)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::listModeAboutToActivate)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::listModeActivated)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::searchModeAboutToActivate)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::searchModeActivated)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::splitterSizesChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (DatabaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseWidget::entryColumnSizesChanged)) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject DatabaseWidget::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_DatabaseWidget.data,
      qt_meta_data_DatabaseWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DatabaseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseWidget.stringdata0))
        return static_cast<void*>(const_cast< DatabaseWidget*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int DatabaseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void DatabaseWidget::closeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DatabaseWidget::currentModeChanged(DatabaseWidget::Mode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DatabaseWidget::groupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DatabaseWidget::entrySelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DatabaseWidget::databaseChanged(Database * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DatabaseWidget::groupContextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DatabaseWidget::entryContextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DatabaseWidget::unlockedDatabase()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void DatabaseWidget::listModeAboutToActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void DatabaseWidget::listModeActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void DatabaseWidget::searchModeAboutToActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void DatabaseWidget::searchModeActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void DatabaseWidget::splitterSizesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void DatabaseWidget::entryColumnSizesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
