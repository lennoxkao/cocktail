/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_connect_motor_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "on_test_motor_clicked"
QT_MOC_LITERAL(4, 59, 26), // "on_connect_arduino_clicked"
QT_MOC_LITERAL(5, 86, 23), // "on_test_arduino_clicked"
QT_MOC_LITERAL(6, 110, 18), // "on_Bacardi_clicked"
QT_MOC_LITERAL(7, 129, 15), // "on_test_clicked"
QT_MOC_LITERAL(8, 145, 10), // "receiveMsg"
QT_MOC_LITERAL(9, 156, 3), // "msg"
QT_MOC_LITERAL(10, 160, 7), // "timeOut"
QT_MOC_LITERAL(11, 168, 13), // "Bacardi_step1"
QT_MOC_LITERAL(12, 182, 13), // "Bacardi_step2"
QT_MOC_LITERAL(13, 196, 13), // "Bacardi_step3"
QT_MOC_LITERAL(14, 210, 13), // "Bacardi_step4"
QT_MOC_LITERAL(15, 224, 21), // "on_Cuba_Libre_clicked"
QT_MOC_LITERAL(16, 246, 16), // "Cuba_Libre_step1"
QT_MOC_LITERAL(17, 263, 16), // "Cuba_Libre_step2"
QT_MOC_LITERAL(18, 280, 19), // "on_Daiquiri_clicked"
QT_MOC_LITERAL(19, 300, 14), // "Daiquiri_step1"
QT_MOC_LITERAL(20, 315, 14), // "Daiquiri_step2"
QT_MOC_LITERAL(21, 330, 14) // "Daiquiri_step3"

    },
    "MainWindow\0on_connect_motor_clicked\0"
    "\0on_test_motor_clicked\0"
    "on_connect_arduino_clicked\0"
    "on_test_arduino_clicked\0on_Bacardi_clicked\0"
    "on_test_clicked\0receiveMsg\0msg\0timeOut\0"
    "Bacardi_step1\0Bacardi_step2\0Bacardi_step3\0"
    "Bacardi_step4\0on_Cuba_Libre_clicked\0"
    "Cuba_Libre_step1\0Cuba_Libre_step2\0"
    "on_Daiquiri_clicked\0Daiquiri_step1\0"
    "Daiquiri_step2\0Daiquiri_step3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    1,  115,    2, 0x08 /* Private */,
      10,    0,  118,    2, 0x08 /* Private */,
      11,    0,  119,    2, 0x08 /* Private */,
      12,    0,  120,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    0,  122,    2, 0x08 /* Private */,
      15,    0,  123,    2, 0x08 /* Private */,
      16,    0,  124,    2, 0x08 /* Private */,
      17,    0,  125,    2, 0x08 /* Private */,
      18,    0,  126,    2, 0x08 /* Private */,
      19,    0,  127,    2, 0x08 /* Private */,
      20,    0,  128,    2, 0x08 /* Private */,
      21,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_connect_motor_clicked(); break;
        case 1: _t->on_test_motor_clicked(); break;
        case 2: _t->on_connect_arduino_clicked(); break;
        case 3: _t->on_test_arduino_clicked(); break;
        case 4: _t->on_Bacardi_clicked(); break;
        case 5: _t->on_test_clicked(); break;
        case 6: _t->receiveMsg((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->timeOut(); break;
        case 8: _t->Bacardi_step1(); break;
        case 9: _t->Bacardi_step2(); break;
        case 10: _t->Bacardi_step3(); break;
        case 11: _t->Bacardi_step4(); break;
        case 12: _t->on_Cuba_Libre_clicked(); break;
        case 13: _t->Cuba_Libre_step1(); break;
        case 14: _t->Cuba_Libre_step2(); break;
        case 15: _t->on_Daiquiri_clicked(); break;
        case 16: _t->Daiquiri_step1(); break;
        case 17: _t->Daiquiri_step2(); break;
        case 18: _t->Daiquiri_step3(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
