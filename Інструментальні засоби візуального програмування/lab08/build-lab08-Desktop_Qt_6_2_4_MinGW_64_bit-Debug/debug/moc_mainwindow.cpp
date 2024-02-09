/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab08/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[26];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 20), // "sendSignalToInfoForm"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 19), // "std::vector<Flight>"
QT_MOC_LITERAL(53, 34), // "on_callInputFormPushButton_cl..."
QT_MOC_LITERAL(88, 25), // "on_infoPushButton_clicked"
QT_MOC_LITERAL(114, 25), // "on_exitPushButton_clicked"
QT_MOC_LITERAL(140, 22), // "getSignalFromInputForm"
QT_MOC_LITERAL(163, 4), // "Date"
QT_MOC_LITERAL(168, 4), // "date"
QT_MOC_LITERAL(173, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(198, 32), // "getSignalFromInputFormCloseEvent"
QT_MOC_LITERAL(231, 21) // "getSignalFromInfoForm"

    },
    "MainWindow\0sendSignalToInfoForm\0\0"
    "std::vector<Flight>\0"
    "on_callInputFormPushButton_clicked\0"
    "on_infoPushButton_clicked\0"
    "on_exitPushButton_clicked\0"
    "getSignalFromInputForm\0Date\0date\0"
    "std::vector<std::string>\0"
    "getSignalFromInputFormCloseEvent\0"
    "getSignalFromInfoForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   59,    2, 0x08,    3 /* Private */,
       5,    0,   60,    2, 0x08,    4 /* Private */,
       6,    0,   61,    2, 0x08,    5 /* Private */,
       7,    2,   62,    2, 0x0a,    6 /* Public */,
      11,    0,   67,    2, 0x0a,    9 /* Public */,
      12,    0,   68,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToInfoForm((*reinterpret_cast< std::add_pointer_t<std::vector<Flight>>>(_a[1]))); break;
        case 1: _t->on_callInputFormPushButton_clicked(); break;
        case 2: _t->on_infoPushButton_clicked(); break;
        case 3: _t->on_exitPushButton_clicked(); break;
        case 4: _t->getSignalFromInputForm((*reinterpret_cast< std::add_pointer_t<Date>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<std::string>>>(_a[2]))); break;
        case 5: _t->getSignalFromInputFormCloseEvent(); break;
        case 6: _t->getSignalFromInfoForm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(std::vector<Flight> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendSignalToInfoForm)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<Flight>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Date, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendSignalToInfoForm(std::vector<Flight> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
