/****************************************************************************
** Meta object code from reading C++ file 'hemisphereform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../project/hemisphereform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hemisphereform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hemisphereForm_t {
    const uint offsetsAndSize[16];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_hemisphereForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_hemisphereForm_t qt_meta_stringdata_hemisphereForm = {
    {
QT_MOC_LITERAL(0, 14), // "hemisphereForm"
QT_MOC_LITERAL(15, 18), // "signalToMainWindow"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 6), // "radius"
QT_MOC_LITERAL(42, 9), // "getSignal"
QT_MOC_LITERAL(52, 29), // "on_radiusLineEdit_textChanged"
QT_MOC_LITERAL(82, 4), // "arg1"
QT_MOC_LITERAL(87, 26) // "on_applyPushButton_clicked"

    },
    "hemisphereForm\0signalToMainWindow\0\0"
    "radius\0getSignal\0on_radiusLineEdit_textChanged\0"
    "arg1\0on_applyPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hemisphereForm[] = {

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
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   41,    2, 0x0a,    3 /* Public */,
       5,    1,   42,    2, 0x08,    4 /* Private */,
       7,    0,   45,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void hemisphereForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<hemisphereForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalToMainWindow((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->getSignal(); break;
        case 2: _t->on_radiusLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_applyPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (hemisphereForm::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&hemisphereForm::signalToMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject hemisphereForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_hemisphereForm.offsetsAndSize,
    qt_meta_data_hemisphereForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_hemisphereForm_t
, QtPrivate::TypeAndForceComplete<hemisphereForm, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *hemisphereForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hemisphereForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hemisphereForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int hemisphereForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void hemisphereForm::signalToMainWindow(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
