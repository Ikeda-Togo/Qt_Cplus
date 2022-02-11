/****************************************************************************
** Meta object code from reading C++ file 'savelog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../log_save_test/savelog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savelog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SaveLog_t {
    const uint offsetsAndSize[16];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SaveLog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SaveLog_t qt_meta_stringdata_SaveLog = {
    {
QT_MOC_LITERAL(0, 7), // "SaveLog"
QT_MOC_LITERAL(8, 8), // "writeLog"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 4), // "date"
QT_MOC_LITERAL(23, 7), // "comment"
QT_MOC_LITERAL(31, 8), // "openFile"
QT_MOC_LITERAL(40, 7), // "fileUrl"
QT_MOC_LITERAL(48, 9) // "closeFile"

    },
    "SaveLog\0writeLog\0\0date\0comment\0openFile\0"
    "fileUrl\0closeFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SaveLog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x02,    1 /* Public */,
       5,    1,   37,    2, 0x02,    4 /* Public */,
       7,    0,   40,    2, 0x02,    6 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void SaveLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaveLog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->writeLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->openFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->closeFile(); break;
        default: ;
        }
    }
}

const QMetaObject SaveLog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SaveLog.offsetsAndSize,
    qt_meta_data_SaveLog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SaveLog_t
, QtPrivate::TypeAndForceComplete<SaveLog, std::true_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>

>,
    nullptr
} };


const QMetaObject *SaveLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveLog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SaveLog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SaveLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
