/****************************************************************************
** Meta object code from reading C++ file 'arrayform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab03-04/arrayform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arrayform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_arrayform_t {
    const uint offsetsAndSize[24];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_arrayform_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_arrayform_t qt_meta_stringdata_arrayform = {
    {
QT_MOC_LITERAL(0, 9), // "arrayform"
QT_MOC_LITERAL(10, 20), // "sendSignalToMainForm"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 21), // "sendSignalToRangeForm"
QT_MOC_LITERAL(54, 22), // "getSignalFromRangeForm"
QT_MOC_LITERAL(77, 33), // "on_sizeOfArrayLineEdit_textEd..."
QT_MOC_LITERAL(111, 4), // "arg1"
QT_MOC_LITERAL(116, 32), // "on_sizeOfArrayPushButton_clicked"
QT_MOC_LITERAL(149, 27), // "on_indexLineEdit_textEdited"
QT_MOC_LITERAL(177, 32), // "on_addNewValuePushButton_clicked"
QT_MOC_LITERAL(210, 29), // "on_comboBoxPushButton_clicked"
QT_MOC_LITERAL(240, 26) // "on_resetPushButton_clicked"

    },
    "arrayform\0sendSignalToMainForm\0\0"
    "sendSignalToRangeForm\0getSignalFromRangeForm\0"
    "on_sizeOfArrayLineEdit_textEdited\0"
    "arg1\0on_sizeOfArrayPushButton_clicked\0"
    "on_indexLineEdit_textEdited\0"
    "on_addNewValuePushButton_clicked\0"
    "on_comboBoxPushButton_clicked\0"
    "on_resetPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_arrayform[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   70,    2, 0x0a,    3 /* Public */,
       5,    1,   75,    2, 0x08,    6 /* Private */,
       7,    0,   78,    2, 0x08,    8 /* Private */,
       8,    1,   79,    2, 0x08,    9 /* Private */,
       9,    0,   82,    2, 0x08,   11 /* Private */,
      10,    0,   83,    2, 0x08,   12 /* Private */,
      11,    0,   84,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void arrayform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<arrayform *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToMainForm(); break;
        case 1: _t->sendSignalToRangeForm(); break;
        case 2: _t->getSignalFromRangeForm((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_sizeOfArrayLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_sizeOfArrayPushButton_clicked(); break;
        case 5: _t->on_indexLineEdit_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_addNewValuePushButton_clicked(); break;
        case 7: _t->on_comboBoxPushButton_clicked(); break;
        case 8: _t->on_resetPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (arrayform::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&arrayform::sendSignalToMainForm)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (arrayform::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&arrayform::sendSignalToRangeForm)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject arrayform::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_arrayform.offsetsAndSize,
    qt_meta_data_arrayform,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_arrayform_t
, QtPrivate::TypeAndForceComplete<arrayform, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *arrayform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *arrayform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_arrayform.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int arrayform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void arrayform::sendSignalToMainForm()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void arrayform::sendSignalToRangeForm()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
