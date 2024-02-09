/****************************************************************************
** Meta object code from reading C++ file 'inputform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab08/inputform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputForm_t {
    const uint offsetsAndSize[24];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_InputForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_InputForm_t qt_meta_stringdata_InputForm = {
    {
QT_MOC_LITERAL(0, 9), // "InputForm"
QT_MOC_LITERAL(10, 20), // "sendSignalToMainForm"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 4), // "Date"
QT_MOC_LITERAL(37, 4), // "date"
QT_MOC_LITERAL(42, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(67, 30), // "sendSignalToMainFormCloseEvent"
QT_MOC_LITERAL(98, 26), // "on_applyPushButton_clicked"
QT_MOC_LITERAL(125, 33), // "on_destinationLineEdit_textEd..."
QT_MOC_LITERAL(159, 4), // "arg1"
QT_MOC_LITERAL(164, 34), // "on_flightNumberLineEdit_textE..."
QT_MOC_LITERAL(199, 27) // "on_priceLineEdit_textEdited"

    },
    "InputForm\0sendSignalToMainForm\0\0Date\0"
    "date\0std::vector<std::string>\0"
    "sendSignalToMainFormCloseEvent\0"
    "on_applyPushButton_clicked\0"
    "on_destinationLineEdit_textEdited\0"
    "arg1\0on_flightNumberLineEdit_textEdited\0"
    "on_priceLineEdit_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       6,    0,   55,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   56,    2, 0x08,    5 /* Private */,
       8,    1,   57,    2, 0x08,    6 /* Private */,
      10,    1,   60,    2, 0x08,    8 /* Private */,
      11,    1,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void InputForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToMainForm((*reinterpret_cast< std::add_pointer_t<Date>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<std::string>>>(_a[2]))); break;
        case 1: _t->sendSignalToMainFormCloseEvent(); break;
        case 2: _t->on_applyPushButton_clicked(); break;
        case 3: _t->on_destinationLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_flightNumberLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_priceLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputForm::*)(Date , std::vector<std::string> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputForm::sendSignalToMainForm)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InputForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputForm::sendSignalToMainFormCloseEvent)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject InputForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_InputForm.offsetsAndSize,
    qt_meta_data_InputForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_InputForm_t
, QtPrivate::TypeAndForceComplete<InputForm, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Date, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *InputForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InputForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void InputForm::sendSignalToMainForm(Date _t1, std::vector<std::string> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputForm::sendSignalToMainFormCloseEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
