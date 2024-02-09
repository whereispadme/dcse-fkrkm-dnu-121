/****************************************************************************
** Meta object code from reading C++ file 'inputform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab07/inputform.h"
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
    const uint offsetsAndSize[12];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_InputForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_InputForm_t qt_meta_stringdata_InputForm = {
    {
QT_MOC_LITERAL(0, 9), // "InputForm"
QT_MOC_LITERAL(10, 20), // "sendSignalToMainForm"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 26), // "on_applyPushButton_clicked"
QT_MOC_LITERAL(59, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(82, 4) // "arg1"

    },
    "InputForm\0sendSignalToMainForm\0\0"
    "on_applyPushButton_clicked\0"
    "on_lineEdit_textEdited\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   35,    2, 0x08,    3 /* Private */,
       4,    1,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void InputForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToMainForm((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->on_applyPushButton_clicked(); break;
        case 2: _t->on_lineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputForm::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InputForm::sendSignalToMainForm)) {
                *result = 0;
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
, QtPrivate::TypeAndForceComplete<InputForm, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


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

// SIGNAL 0
void InputForm::sendSignalToMainForm(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
