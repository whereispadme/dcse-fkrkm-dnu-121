/****************************************************************************
** Meta object code from reading C++ file 'infoform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab08/infoform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infoform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InfoForm_t {
    const uint offsetsAndSize[30];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_InfoForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_InfoForm_t qt_meta_stringdata_InfoForm = {
    {
QT_MOC_LITERAL(0, 8), // "InfoForm"
QT_MOC_LITERAL(9, 20), // "sendSignalToMainForm"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 31), // "on_exitToMainPushButton_clicked"
QT_MOC_LITERAL(63, 33), // "on_destinationRadioButton_cli..."
QT_MOC_LITERAL(97, 26), // "on_timeRadioButton_clicked"
QT_MOC_LITERAL(124, 33), // "on_destinationLineEdit_textEd..."
QT_MOC_LITERAL(158, 4), // "arg1"
QT_MOC_LITERAL(163, 32), // "on_firstTimeEdit_userTimeChanged"
QT_MOC_LITERAL(196, 4), // "time"
QT_MOC_LITERAL(201, 31), // "on_lastTimeEdit_userTimeChanged"
QT_MOC_LITERAL(233, 25), // "on_showPushButton_clicked"
QT_MOC_LITERAL(259, 26), // "on_resetPushButton_clicked"
QT_MOC_LITERAL(286, 21), // "getSignalFromMainForm"
QT_MOC_LITERAL(308, 19) // "std::vector<Flight>"

    },
    "InfoForm\0sendSignalToMainForm\0\0"
    "on_exitToMainPushButton_clicked\0"
    "on_destinationRadioButton_clicked\0"
    "on_timeRadioButton_clicked\0"
    "on_destinationLineEdit_textEdited\0"
    "arg1\0on_firstTimeEdit_userTimeChanged\0"
    "time\0on_lastTimeEdit_userTimeChanged\0"
    "on_showPushButton_clicked\0"
    "on_resetPushButton_clicked\0"
    "getSignalFromMainForm\0std::vector<Flight>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InfoForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    1,   78,    2, 0x08,    5 /* Private */,
       8,    1,   81,    2, 0x08,    7 /* Private */,
      10,    1,   84,    2, 0x08,    9 /* Private */,
      11,    0,   87,    2, 0x08,   11 /* Private */,
      12,    0,   88,    2, 0x08,   12 /* Private */,
      13,    1,   89,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QTime,    9,
    QMetaType::Void, QMetaType::QTime,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,

       0        // eod
};

void InfoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InfoForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToMainForm(); break;
        case 1: _t->on_exitToMainPushButton_clicked(); break;
        case 2: _t->on_destinationRadioButton_clicked(); break;
        case 3: _t->on_timeRadioButton_clicked(); break;
        case 4: _t->on_destinationLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_firstTimeEdit_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 6: _t->on_lastTimeEdit_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 7: _t->on_showPushButton_clicked(); break;
        case 8: _t->on_resetPushButton_clicked(); break;
        case 9: _t->getSignalFromMainForm((*reinterpret_cast< std::add_pointer_t<std::vector<Flight>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InfoForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InfoForm::sendSignalToMainForm)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InfoForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_InfoForm.offsetsAndSize,
    qt_meta_data_InfoForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_InfoForm_t
, QtPrivate::TypeAndForceComplete<InfoForm, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<Flight>, std::false_type>


>,
    nullptr
} };


const QMetaObject *InfoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InfoForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InfoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void InfoForm::sendSignalToMainForm()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
