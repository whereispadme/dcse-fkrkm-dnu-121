/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab13-14/mainwindow.h"
#include <QtGui/qtextcursor.h>
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
    const uint offsetsAndSize[34];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 26), // "on_resetPushButton_clicked"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 28), // "on_numberLineEdit_textEdited"
QT_MOC_LITERAL(68, 4), // "arg1"
QT_MOC_LITERAL(73, 33), // "on_ticketPriceLineEdit_textEd..."
QT_MOC_LITERAL(107, 24), // "on_addPushButton_clicked"
QT_MOC_LITERAL(132, 25), // "on_editPushButton_clicked"
QT_MOC_LITERAL(158, 25), // "on_datePushButton_clicked"
QT_MOC_LITERAL(184, 28), // "on_firstSpinBox_valueChanged"
QT_MOC_LITERAL(213, 29), // "on_secondSpinBox_valueChanged"
QT_MOC_LITERAL(243, 27), // "on_firstSpinBox_textChanged"
QT_MOC_LITERAL(271, 28), // "on_secondSpinBox_textChanged"
QT_MOC_LITERAL(300, 29), // "on_intervalPushButton_clicked"
QT_MOC_LITERAL(330, 26), // "on_flightTableView_entered"
QT_MOC_LITERAL(357, 11), // "QModelIndex"
QT_MOC_LITERAL(369, 5) // "index"

    },
    "MainWindow\0on_resetPushButton_clicked\0"
    "\0on_numberLineEdit_textEdited\0arg1\0"
    "on_ticketPriceLineEdit_textEdited\0"
    "on_addPushButton_clicked\0"
    "on_editPushButton_clicked\0"
    "on_datePushButton_clicked\0"
    "on_firstSpinBox_valueChanged\0"
    "on_secondSpinBox_valueChanged\0"
    "on_firstSpinBox_textChanged\0"
    "on_secondSpinBox_textChanged\0"
    "on_intervalPushButton_clicked\0"
    "on_flightTableView_entered\0QModelIndex\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    1,   87,    2, 0x08,    2 /* Private */,
       5,    1,   90,    2, 0x08,    4 /* Private */,
       6,    0,   93,    2, 0x08,    6 /* Private */,
       7,    0,   94,    2, 0x08,    7 /* Private */,
       8,    0,   95,    2, 0x08,    8 /* Private */,
       9,    1,   96,    2, 0x08,    9 /* Private */,
      10,    1,   99,    2, 0x08,   11 /* Private */,
      11,    1,  102,    2, 0x08,   13 /* Private */,
      12,    1,  105,    2, 0x08,   15 /* Private */,
      13,    0,  108,    2, 0x08,   17 /* Private */,
      14,    1,  109,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_resetPushButton_clicked(); break;
        case 1: _t->on_numberLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_ticketPriceLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_addPushButton_clicked(); break;
        case 4: _t->on_editPushButton_clicked(); break;
        case 5: _t->on_datePushButton_clicked(); break;
        case 6: _t->on_firstSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_secondSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_firstSpinBox_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_secondSpinBox_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_intervalPushButton_clicked(); break;
        case 11: _t->on_flightTableView_entered((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
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
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>


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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
