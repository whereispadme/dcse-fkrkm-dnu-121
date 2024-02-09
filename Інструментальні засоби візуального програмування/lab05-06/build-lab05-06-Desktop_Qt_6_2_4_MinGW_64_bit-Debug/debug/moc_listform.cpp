/****************************************************************************
** Meta object code from reading C++ file 'listform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab05-06/listform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListForm_t {
    const uint offsetsAndSize[24];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ListForm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ListForm_t qt_meta_stringdata_ListForm = {
    {
QT_MOC_LITERAL(0, 8), // "ListForm"
QT_MOC_LITERAL(9, 20), // "sendSignalToMainForm"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 22), // "getSignalFromInputForm"
QT_MOC_LITERAL(54, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(79, 32), // "on_uploadApplyPushButton_clicked"
QT_MOC_LITERAL(112, 33), // "on_addToGenListPushButton_cli..."
QT_MOC_LITERAL(146, 35), // "on_delFromGenListPushButton_c..."
QT_MOC_LITERAL(182, 34), // "on_comeToNewListPushButton_cl..."
QT_MOC_LITERAL(217, 26), // "on_resetPushButton_clicked"
QT_MOC_LITERAL(244, 36), // "on_saveGeneralListPushButton_..."
QT_MOC_LITERAL(281, 32) // "on_saveNewListPushButton_clicked"

    },
    "ListForm\0sendSignalToMainForm\0\0"
    "getSignalFromInputForm\0std::vector<std::string>\0"
    "on_uploadApplyPushButton_clicked\0"
    "on_addToGenListPushButton_clicked\0"
    "on_delFromGenListPushButton_clicked\0"
    "on_comeToNewListPushButton_clicked\0"
    "on_resetPushButton_clicked\0"
    "on_saveGeneralListPushButton_clicked\0"
    "on_saveNewListPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListForm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   69,    2, 0x0a,    2 /* Public */,
       5,    0,   72,    2, 0x08,    4 /* Private */,
       6,    0,   73,    2, 0x08,    5 /* Private */,
       7,    0,   74,    2, 0x08,    6 /* Private */,
       8,    0,   75,    2, 0x08,    7 /* Private */,
       9,    0,   76,    2, 0x08,    8 /* Private */,
      10,    0,   77,    2, 0x08,    9 /* Private */,
      11,    0,   78,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ListForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListForm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendSignalToMainForm(); break;
        case 1: _t->getSignalFromInputForm((*reinterpret_cast< std::add_pointer_t<std::vector<std::string>>>(_a[1]))); break;
        case 2: _t->on_uploadApplyPushButton_clicked(); break;
        case 3: _t->on_addToGenListPushButton_clicked(); break;
        case 4: _t->on_delFromGenListPushButton_clicked(); break;
        case 5: _t->on_comeToNewListPushButton_clicked(); break;
        case 6: _t->on_resetPushButton_clicked(); break;
        case 7: _t->on_saveGeneralListPushButton_clicked(); break;
        case 8: _t->on_saveNewListPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ListForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListForm::sendSignalToMainForm)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ListForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ListForm.offsetsAndSize,
    qt_meta_data_ListForm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ListForm_t
, QtPrivate::TypeAndForceComplete<ListForm, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::vector<std::string>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ListForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ListForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ListForm::sendSignalToMainForm()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
