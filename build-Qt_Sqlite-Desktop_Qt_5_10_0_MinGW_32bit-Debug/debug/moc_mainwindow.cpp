/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Qt_Sqlite/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_btn_create_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 27), // "on_btn_create_table_clicked"
QT_MOC_LITERAL(4, 62, 21), // "on_btn_select_clicked"
QT_MOC_LITERAL(5, 84, 11), // "db_callback"
QT_MOC_LITERAL(6, 96, 6), // "p_data"
QT_MOC_LITERAL(7, 103, 10), // "num_fields"
QT_MOC_LITERAL(8, 114, 6), // "char**"
QT_MOC_LITERAL(9, 121, 8), // "p_fields"
QT_MOC_LITERAL(10, 130, 11), // "p_col_names"
QT_MOC_LITERAL(11, 142, 21), // "on_btn_insert_clicked"
QT_MOC_LITERAL(12, 164, 23), // "create_insert_statement"
QT_MOC_LITERAL(13, 188, 11), // "const char*"
QT_MOC_LITERAL(14, 200, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(15, 225, 5), // "param"
QT_MOC_LITERAL(16, 231, 23), // "create_delete_statement"
QT_MOC_LITERAL(17, 255, 21) // "on_btn_delete_clicked"

    },
    "MainWindow\0on_btn_create_clicked\0\0"
    "on_btn_create_table_clicked\0"
    "on_btn_select_clicked\0db_callback\0"
    "p_data\0num_fields\0char**\0p_fields\0"
    "p_col_names\0on_btn_insert_clicked\0"
    "create_insert_statement\0const char*\0"
    "std::vector<std::string>\0param\0"
    "create_delete_statement\0on_btn_delete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    4,   57,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,
      16,    1,   70,    2, 0x08 /* Private */,
      17,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::VoidStar, QMetaType::Int, 0x80000000 | 8, 0x80000000 | 8,    6,    7,    9,   10,
    QMetaType::Void,
    0x80000000 | 13, 0x80000000 | 14,   15,
    0x80000000 | 13, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_create_clicked(); break;
        case 1: _t->on_btn_create_table_clicked(); break;
        case 2: _t->on_btn_select_clicked(); break;
        case 3: { int _r = _t->db_callback((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char**(*)>(_a[3])),(*reinterpret_cast< char**(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_btn_insert_clicked(); break;
        case 5: { const char* _r = _t->create_insert_statement((*reinterpret_cast< std::vector<std::string>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = std::move(_r); }  break;
        case 6: { const char* _r = _t->create_delete_statement((*reinterpret_cast< std::vector<std::string>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_btn_delete_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
