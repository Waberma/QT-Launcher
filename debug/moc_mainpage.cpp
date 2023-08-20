/****************************************************************************
** Meta object code from reading C++ file 'mainpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginPage_t {
    QByteArrayData data[20];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginPage_t qt_meta_stringdata_LoginPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LoginPage"
QT_MOC_LITERAL(1, 10, 9), // "statusBar"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "setUser"
QT_MOC_LITERAL(4, 29, 11), // "setUserpass"
QT_MOC_LITERAL(5, 41, 13), // "SetCornerMenu"
QT_MOC_LITERAL(6, 55, 15), // "StartCreateMenu"
QT_MOC_LITERAL(7, 71, 14), // "QList<QString>"
QT_MOC_LITERAL(8, 86, 8), // "rolelist"
QT_MOC_LITERAL(9, 95, 4), // "open"
QT_MOC_LITERAL(10, 100, 9), // "clearMain"
QT_MOC_LITERAL(11, 110, 4), // "exit"
QT_MOC_LITERAL(12, 115, 11), // "menuActions"
QT_MOC_LITERAL(13, 127, 6), // "action"
QT_MOC_LITERAL(14, 134, 13), // "keyPressEvent"
QT_MOC_LITERAL(15, 148, 10), // "QKeyEvent*"
QT_MOC_LITERAL(16, 159, 1), // "e"
QT_MOC_LITERAL(17, 161, 16), // "on_okBtn_clicked"
QT_MOC_LITERAL(18, 178, 20), // "on_cancelBtn_clicked"
QT_MOC_LITERAL(19, 199, 19) // "formatAuthorization"

    },
    "LoginPage\0statusBar\0\0setUser\0setUserpass\0"
    "SetCornerMenu\0StartCreateMenu\0"
    "QList<QString>\0rolelist\0open\0clearMain\0"
    "exit\0menuActions\0action\0keyPressEvent\0"
    "QKeyEvent*\0e\0on_okBtn_clicked\0"
    "on_cancelBtn_clicked\0formatAuthorization"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    1,   85,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       9,    0,   92,    2, 0x06 /* Public */,
      10,    0,   93,    2, 0x06 /* Public */,
      11,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   95,    2, 0x0a /* Public */,
      14,    1,   98,    2, 0x0a /* Public */,
      17,    0,  101,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusBar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setUser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setUserpass((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SetCornerMenu(); break;
        case 4: _t->StartCreateMenu((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 5: _t->open(); break;
        case 6: _t->clearMain(); break;
        case 7: _t->exit(); break;
        case 8: _t->menuActions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 10: _t->on_okBtn_clicked(); break;
        case 11: _t->on_cancelBtn_clicked(); break;
        case 12: _t->formatAuthorization(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginPage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::statusBar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::setUser)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::setUserpass)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::SetCornerMenu)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)(QList<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::StartCreateMenu)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::open)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::clearMain)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LoginPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginPage::exit)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginPage::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_LoginPage.data,
    qt_meta_data_LoginPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoginPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LoginPage::statusBar(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoginPage::setUser(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LoginPage::setUserpass(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LoginPage::SetCornerMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LoginPage::StartCreateMenu(QList<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LoginPage::open()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LoginPage::clearMain()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LoginPage::exit()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
