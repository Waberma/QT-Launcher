/****************************************************************************
** Meta object code from reading C++ file 'pagination.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pagination.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagination.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pagination_t {
    QByteArrayData data[22];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pagination_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pagination_t qt_meta_stringdata_Pagination = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Pagination"
QT_MOC_LITERAL(1, 11, 12), // "GetNewNextEl"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "startindex"
QT_MOC_LITERAL(4, 36, 4), // "step"
QT_MOC_LITERAL(5, 41, 10), // "numOfPages"
QT_MOC_LITERAL(6, 52, 15), // "QSqlQueryModel*"
QT_MOC_LITERAL(7, 68, 9), // "mainmodel"
QT_MOC_LITERAL(8, 78, 7), // "setStep"
QT_MOC_LITERAL(9, 86, 9), // "setMapInv"
QT_MOC_LITERAL(10, 96, 6), // "mapinv"
QT_MOC_LITERAL(11, 103, 18), // "on_nextbtn_clicked"
QT_MOC_LITERAL(12, 122, 22), // "on_previousbtn_clicked"
QT_MOC_LITERAL(13, 145, 28), // "on_pager_currentIndexChanged"
QT_MOC_LITERAL(14, 174, 5), // "index"
QT_MOC_LITERAL(15, 180, 25), // "on_searchline_textChanged"
QT_MOC_LITERAL(16, 206, 4), // "arg1"
QT_MOC_LITERAL(17, 211, 36), // "on_fieldcomboBox_currentIndex..."
QT_MOC_LITERAL(18, 248, 37), // "on_filterComboBox_currentInde..."
QT_MOC_LITERAL(19, 286, 25), // "on_clearFilterBtn_clicked"
QT_MOC_LITERAL(20, 312, 28), // "on_previousSearchBtn_clicked"
QT_MOC_LITERAL(21, 341, 24) // "on_nextSearchBtn_clicked"

    },
    "Pagination\0GetNewNextEl\0\0startindex\0"
    "step\0numOfPages\0QSqlQueryModel*\0"
    "mainmodel\0setStep\0setMapInv\0mapinv\0"
    "on_nextbtn_clicked\0on_previousbtn_clicked\0"
    "on_pager_currentIndexChanged\0index\0"
    "on_searchline_textChanged\0arg1\0"
    "on_fieldcomboBox_currentIndexChanged\0"
    "on_filterComboBox_currentIndexChanged\0"
    "on_clearFilterBtn_clicked\0"
    "on_previousSearchBtn_clicked\0"
    "on_nextSearchBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pagination[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   74,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
       9,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      17,    1,   97,    2, 0x08 /* Private */,
      18,    1,  100,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,
      20,    0,  104,    2, 0x08 /* Private */,
      21,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 6,    3,    4,    5,    7,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Pagination::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pagination *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GetNewNextEl((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QSqlQueryModel*(*)>(_a[4]))); break;
        case 1: _t->setStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setMapInv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_nextbtn_clicked(); break;
        case 4: _t->on_previousbtn_clicked(); break;
        case 5: _t->on_pager_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_searchline_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_fieldcomboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_filterComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_clearFilterBtn_clicked(); break;
        case 10: _t->on_previousSearchBtn_clicked(); break;
        case 11: _t->on_nextSearchBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Pagination::*)(int , int , int , QSqlQueryModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagination::GetNewNextEl)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Pagination::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagination::setStep)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Pagination::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pagination::setMapInv)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Pagination::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Pagination.data,
    qt_meta_data_Pagination,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Pagination::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pagination::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pagination.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Pagination::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Pagination::GetNewNextEl(int _t1, int _t2, int _t3, QSqlQueryModel * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pagination::setStep(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Pagination::setMapInv(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
