/****************************************************************************
** Meta object code from reading C++ file 'configuracion.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QT/Final/configuracion.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuracion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Configuracion_t {
    const uint offsetsAndSize[14];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Configuracion_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Configuracion_t qt_meta_stringdata_Configuracion = {
    {
QT_MOC_LITERAL(0, 13), // "Configuracion"
QT_MOC_LITERAL(14, 18), // "on_Cambiar_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 24), // "on_cantprod_valueChanged"
QT_MOC_LITERAL(59, 4), // "arg1"
QT_MOC_LITERAL(64, 23), // "on_cantcon_valueChanged"
QT_MOC_LITERAL(88, 19) // "on_Cancelar_clicked"

    },
    "Configuracion\0on_Cambiar_clicked\0\0"
    "on_cantprod_valueChanged\0arg1\0"
    "on_cantcon_valueChanged\0on_Cancelar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Configuracion[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    0 /* Private */,
       3,    1,   39,    2, 0x08,    1 /* Private */,
       5,    1,   42,    2, 0x08,    3 /* Private */,
       6,    0,   45,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void Configuracion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Configuracion *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Cambiar_clicked(); break;
        case 1: _t->on_cantprod_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_cantcon_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_Cancelar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Configuracion::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Configuracion.offsetsAndSize,
    qt_meta_data_Configuracion,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Configuracion_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Configuracion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Configuracion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Configuracion.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Configuracion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
