/****************************************************************************
** Meta object code from reading C++ file 'salaryform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab03-04/salaryform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'salaryform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_salaryform_t {
    const uint offsetsAndSize[22];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_salaryform_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_salaryform_t qt_meta_stringdata_salaryform = {
    {
QT_MOC_LITERAL(0, 10), // "salaryform"
QT_MOC_LITERAL(11, 20), // "sendSignalToMainForm"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 36), // "on_firstComboBox_currentIndex..."
QT_MOC_LITERAL(70, 5), // "index"
QT_MOC_LITERAL(76, 35), // "on_lastComboBox_currentIndexC..."
QT_MOC_LITERAL(112, 32), // "on_comboxApplyPushButton_clicked"
QT_MOC_LITERAL(145, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(169, 4), // "arg1"
QT_MOC_LITERAL(174, 26), // "on_applyPushButton_clicked"
QT_MOC_LITERAL(201, 26) // "on_resetPushButton_clicked"

    },
    "salaryform\0sendSignalToMainForm\0\0"
    "on_firstComboBox_currentIndexChanged\0"
    "index\0on_lastComboBox_currentIndexChanged\0"
    "on_comboxApplyPushButton_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_applyPushButton_clicked\0"
    "on_resetPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_salaryform[] = {

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
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   57,    2, 0x08,    2 /* Private */,
       5,    1,   60,    2, 0x08,    4 /* Private */,
       6,    0,   63,    2, 0x08,    6 /* Private */,
       7,    1,   64,    2, 0x08,    7 /* Private */,
       9,    0,   67,    2, 0x08,    9 /* Private */,
      10,    0,   68,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void salaryform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<salaryform *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToMainForm(); break;
        case 1: _t->on_firstComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_lastComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_comboxApplyPushButton_clicked(); break;
        case 4: _t->on_lineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_applyPushButton_clicked(); break;
        case 6: _t->on_resetPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (salaryform::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&salaryform::sendSignalToMainForm)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject salaryform::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_salaryform.offsetsAndSize,
    qt_meta_data_salaryform,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_salaryform_t
, QtPrivate::TypeAndForceComplete<salaryform, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *salaryform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *salaryform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_salaryform.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int salaryform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void salaryform::sendSignalToMainForm()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
