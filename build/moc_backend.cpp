/****************************************************************************
** Meta object code from reading C++ file 'backend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Backend/backend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Backend_t {
    QByteArrayData data[9];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Backend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Backend_t qt_meta_stringdata_Backend = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Backend"
QT_MOC_LITERAL(1, 8, 7), // "shaffle"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 10), // "BoardValid"
QT_MOC_LITERAL(4, 28, 11), // "neighboring"
QT_MOC_LITERAL(5, 40, 4), // "from"
QT_MOC_LITERAL(6, 45, 2), // "to"
QT_MOC_LITERAL(7, 48, 4), // "move"
QT_MOC_LITERAL(8, 53, 3) // "win"

    },
    "Backend\0shaffle\0\0BoardValid\0neighboring\0"
    "from\0to\0move\0win"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Backend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x02 /* Public */,
       3,    0,   40,    2, 0x02 /* Public */,
       4,    2,   41,    2, 0x02 /* Public */,
       7,    1,   46,    2, 0x02 /* Public */,
       8,    0,   49,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Bool,

       0        // eod
};

void Backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Backend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shaffle(); break;
        case 1: { bool _r = _t->BoardValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->neighboring((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->move((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->win();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Backend::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_Backend.data,
    qt_meta_data_Backend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Backend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Backend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Backend.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Backend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
