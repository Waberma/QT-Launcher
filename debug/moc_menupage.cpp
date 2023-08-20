/****************************************************************************
** Meta object code from reading C++ file 'menupage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menupage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menupage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Menupage_t {
    QByteArrayData data[15];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Menupage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Menupage_t qt_meta_stringdata_Menupage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Menupage"
QT_MOC_LITERAL(1, 9, 24), // "on_addWidget_itemClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 52, 4), // "item"
QT_MOC_LITERAL(5, 57, 24), // "on_delWidget_itemClicked"
QT_MOC_LITERAL(6, 82, 20), // "on_additempb_clicked"
QT_MOC_LITERAL(7, 103, 23), // "on_deleteitempb_clicked"
QT_MOC_LITERAL(8, 127, 17), // "on_editPB_clicked"
QT_MOC_LITERAL(9, 145, 19), // "on_CancelPB_clicked"
QT_MOC_LITERAL(10, 165, 15), // "on_OkPB_clicked"
QT_MOC_LITERAL(11, 181, 19), // "on_addRowPB_clicked"
QT_MOC_LITERAL(12, 201, 20), // "on_Table_itemClicked"
QT_MOC_LITERAL(13, 222, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(14, 239, 6) // "column"

    },
    "Menupage\0on_addWidget_itemClicked\0\0"
    "QListWidgetItem*\0item\0on_delWidget_itemClicked\0"
    "on_additempb_clicked\0on_deleteitempb_clicked\0"
    "on_editPB_clicked\0on_CancelPB_clicked\0"
    "on_OkPB_clicked\0on_addRowPB_clicked\0"
    "on_Table_itemClicked\0QTreeWidgetItem*\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Menupage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    2,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,    4,   14,

       0        // eod
};

void Menupage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Menupage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_delWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_additempb_clicked(); break;
        case 3: _t->on_deleteitempb_clicked(); break;
        case 4: _t->on_editPB_clicked(); break;
        case 5: _t->on_CancelPB_clicked(); break;
        case 6: _t->on_OkPB_clicked(); break;
        case 7: _t->on_addRowPB_clicked(); break;
        case 8: _t->on_Table_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Menupage::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Menupage.data,
    qt_meta_data_Menupage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Menupage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menupage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Menupage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Menupage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
