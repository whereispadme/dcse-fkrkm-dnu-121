/****************************************************************************
** Meta object code from reading C++ file 'priceform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab05-06/priceform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'priceform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PriceForm_t {
    const uint offsetsAndSize[14];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PriceForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PriceForm_t qt_meta_stringdata_PriceForm = {
    {
QT_MOC_LITERAL(0, 9), // "PriceForm"
QT_MOC_LITERAL(10, 20), // "sendSignalToMainForm"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 31), // "on_durationLineEdit_textChanged"
QT_MOC_LITERAL(64, 4), // "arg1"
QT_MOC_LITERAL(69, 26), // "on_resetPushButton_clicked"
QT_MOC_LITERAL(96, 26) // "on_applyPushButton_clicked"

    },
    "PriceForm\0sendSignalToMainForm\0\0"
    "on_durationLineEdit_textChanged\0arg1\0"
    "on_resetPushButton_clicked\0"
    "on_applyPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PriceForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   39,    2, 0x08,    2 /* Private */,
       5,    0,   42,    2, 0x08,    4 /* Private */,
       6,    0,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PriceForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PriceForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToMainForm(); break;
        case 1: _t->on_durationLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_resetPushButton_clicked(); break;
        case 3: _t->on_applyPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PriceForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PriceForm::sendSignalToMainForm)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PriceForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PriceForm.offsetsAndSize,
    qt_meta_data_PriceForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PriceForm_t
, QtPrivate::TypeAndForceComplete<PriceForm, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *PriceForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PriceForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PriceForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PriceForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PriceForm::sendSignalToMainForm()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
