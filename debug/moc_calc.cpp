/****************************************************************************
** Meta object code from reading C++ file 'calc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalculateMainWindow_t {
    QByteArrayData data[18];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalculateMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalculateMainWindow_t qt_meta_stringdata_CalculateMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CalculateMainWindow"
QT_MOC_LITERAL(1, 20, 9), // "StatusBar"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "setSlots"
QT_MOC_LITERAL(4, 40, 37), // "QList<void(CalculateMainWindo..."
QT_MOC_LITERAL(5, 78, 9), // "calcSlots"
QT_MOC_LITERAL(6, 88, 10), // "sendParent"
QT_MOC_LITERAL(7, 99, 10), // "sendAction"
QT_MOC_LITERAL(8, 110, 8), // "QAction*"
QT_MOC_LITERAL(9, 119, 8), // "DigitNum"
QT_MOC_LITERAL(10, 128, 4), // "PNum"
QT_MOC_LITERAL(11, 133, 14), // "MathOperations"
QT_MOC_LITERAL(12, 148, 5), // "Equal"
QT_MOC_LITERAL(13, 154, 7), // "PlusMin"
QT_MOC_LITERAL(14, 162, 12), // "ClearDisplay"
QT_MOC_LITERAL(15, 175, 8), // "TapPoint"
QT_MOC_LITERAL(16, 184, 4), // "tab7"
QT_MOC_LITERAL(17, 189, 16) // "takeFromKeyboard"

    },
    "CalculateMainWindow\0StatusBar\0\0setSlots\0"
    "QList<void(CalculateMainWindow::*)()>\0"
    "calcSlots\0sendParent\0sendAction\0"
    "QAction*\0DigitNum\0PNum\0MathOperations\0"
    "Equal\0PlusMin\0ClearDisplay\0TapPoint\0"
    "tab7\0takeFromKeyboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculateMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       7,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   86,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,
      16,    0,   94,    2, 0x0a /* Public */,
      17,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalculateMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalculateMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StatusBar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setSlots((*reinterpret_cast< QList<void(CalculateMainWindow::*)()>(*)>(_a[1]))); break;
        case 2: _t->sendParent((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->sendAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->DigitNum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->MathOperations(); break;
        case 6: _t->Equal(); break;
        case 7: _t->PlusMin(); break;
        case 8: _t->ClearDisplay(); break;
        case 9: _t->TapPoint(); break;
        case 10: _t->tab7(); break;
        case 11: _t->takeFromKeyboard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CalculateMainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalculateMainWindow::StatusBar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CalculateMainWindow::*)(QList<void(CalculateMainWindow::*)()> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalculateMainWindow::setSlots)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CalculateMainWindow::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalculateMainWindow::sendParent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CalculateMainWindow::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalculateMainWindow::sendAction)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalculateMainWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_CalculateMainWindow.data,
    qt_meta_data_CalculateMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalculateMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculateMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalculateMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CalculateMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CalculateMainWindow::StatusBar(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CalculateMainWindow::setSlots(QList<void(CalculateMainWindow::*)()> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CalculateMainWindow::sendParent(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CalculateMainWindow::sendAction(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
