/****************************************************************************
** Meta object code from reading C++ file 'rangeform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab03-04/rangeform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rangeform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rangeform_t {
    const uint offsetsAndSize[16];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_rangeform_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_rangeform_t qt_meta_stringdata_rangeform = {
    {
QT_MOC_LITERAL(0, 9), // "rangeform"
QT_MOC_LITERAL(10, 21), // "sendSignalToArrayForm"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 22), // "getSignalFromArrayForm"
QT_MOC_LITERAL(56, 26), // "on_applyPushButton_clicked"
QT_MOC_LITERAL(83, 27), // "on_firstLineEdit_textEdited"
QT_MOC_LITERAL(111, 4), // "arg1"
QT_MOC_LITERAL(116, 26) // "on_lastLineEdit_textEdited"

    },
    "rangeform\0sendSignalToArrayForm\0\0"
    "getSignalFromArrayForm\0"
    "on_applyPushButton_clicked\0"
    "on_firstLineEdit_textEdited\0arg1\0"
    "on_lastLineEdit_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rangeform[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   49,    2, 0x0a,    4 /* Public */,
       4,    0,   50,    2, 0x08,    5 /* Private */,
       5,    1,   51,    2, 0x08,    6 /* Private */,
       7,    1,   54,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void rangeform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rangeform *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToArrayForm((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->getSignalFromArrayForm(); break;
        case 2: _t->on_applyPushButton_clicked(); break;
        case 3: _t->on_firstLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_lastLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (rangeform::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rangeform::sendSignalToArrayForm)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject rangeform::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_rangeform.offsetsAndSize,
    qt_meta_data_rangeform,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_rangeform_t
, QtPrivate::TypeAndForceComplete<rangeform, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *rangeform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rangeform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rangeform.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rangeform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void rangeform::sendSignalToArrayForm(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
