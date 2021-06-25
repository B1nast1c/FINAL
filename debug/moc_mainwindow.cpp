/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Final/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[48];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 5), // "Parar"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 14), // "StartProductor"
QT_MOC_LITERAL(33, 12), // "QVBoxLayout*"
QT_MOC_LITERAL(46, 7), // "layout1"
QT_MOC_LITERAL(54, 15), // "StartConsumidor"
QT_MOC_LITERAL(70, 7), // "EstresC"
QT_MOC_LITERAL(78, 7), // "QLabel*"
QT_MOC_LITERAL(86, 5), // "label"
QT_MOC_LITERAL(92, 16), // "on_leeme_clicked"
QT_MOC_LITERAL(109, 15), // "on_info_clicked"
QT_MOC_LITERAL(125, 17), // "on_config_clicked"
QT_MOC_LITERAL(143, 19), // "on_starprod_clicked"
QT_MOC_LITERAL(163, 19), // "on_startcon_clicked"
QT_MOC_LITERAL(183, 6), // "EntraP"
QT_MOC_LITERAL(190, 1), // "p"
QT_MOC_LITERAL(192, 6), // "EntraC"
QT_MOC_LITERAL(199, 17), // "BufferActualizado"
QT_MOC_LITERAL(217, 4), // "cant"
QT_MOC_LITERAL(222, 9), // "Producido"
QT_MOC_LITERAL(232, 4), // "prod"
QT_MOC_LITERAL(237, 5), // "tprod"
QT_MOC_LITERAL(243, 9) // "Consumido"

    },
    "MainWindow\0Parar\0\0StartProductor\0"
    "QVBoxLayout*\0layout1\0StartConsumidor\0"
    "EstresC\0QLabel*\0label\0on_leeme_clicked\0"
    "on_info_clicked\0on_config_clicked\0"
    "on_starprod_clicked\0on_startcon_clicked\0"
    "EntraP\0p\0EntraC\0BufferActualizado\0"
    "cant\0Producido\0prod\0tprod\0Consumido"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    0 /* Public */,
       3,    1,   99,    2, 0x06,    1 /* Public */,
       6,    1,  102,    2, 0x06,    3 /* Public */,
       7,    1,  105,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  108,    2, 0x08,    7 /* Private */,
      11,    0,  109,    2, 0x08,    8 /* Private */,
      12,    0,  110,    2, 0x08,    9 /* Private */,
      13,    0,  111,    2, 0x08,   10 /* Private */,
      14,    0,  112,    2, 0x08,   11 /* Private */,
      15,    1,  113,    2, 0x0a,   12 /* Public */,
      17,    1,  116,    2, 0x0a,   14 /* Public */,
      18,    1,  119,    2, 0x0a,   16 /* Public */,
      20,    2,  122,    2, 0x0a,   18 /* Public */,
      23,    0,  127,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Char, QMetaType::Int,   21,   22,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Parar(); break;
        case 1: _t->StartProductor((*reinterpret_cast< QVBoxLayout*(*)>(_a[1]))); break;
        case 2: _t->StartConsumidor((*reinterpret_cast< QVBoxLayout*(*)>(_a[1]))); break;
        case 3: _t->EstresC((*reinterpret_cast< QLabel*(*)>(_a[1]))); break;
        case 4: _t->on_leeme_clicked(); break;
        case 5: _t->on_info_clicked(); break;
        case 6: _t->on_config_clicked(); break;
        case 7: _t->on_starprod_clicked(); break;
        case 8: _t->on_startcon_clicked(); break;
        case 9: _t->EntraP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->EntraC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->BufferActualizado((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->Producido((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->Consumido(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QVBoxLayout* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QVBoxLayout* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::Parar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QVBoxLayout * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::StartProductor)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QVBoxLayout * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::StartConsumidor)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QLabel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::EstresC)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVBoxLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVBoxLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<char, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::Parar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::StartProductor(QVBoxLayout * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::StartConsumidor(QVBoxLayout * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::EstresC(QLabel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
