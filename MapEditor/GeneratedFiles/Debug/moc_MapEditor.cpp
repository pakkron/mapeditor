/****************************************************************************
** Meta object code from reading C++ file 'MapEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MapEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapEditor_t {
    QByteArrayData data[22];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapEditor_t qt_meta_stringdata_MapEditor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MapEditor"
QT_MOC_LITERAL(1, 10, 10), // "QuitViewer"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "QuitAppToMain"
QT_MOC_LITERAL(4, 36, 9), // "SendBlock"
QT_MOC_LITERAL(5, 46, 7), // "TexType"
QT_MOC_LITERAL(6, 54, 7), // "texType"
QT_MOC_LITERAL(7, 62, 8), // "FillType"
QT_MOC_LITERAL(8, 71, 8), // "fillType"
QT_MOC_LITERAL(9, 80, 15), // "onClickedBushes"
QT_MOC_LITERAL(10, 96, 14), // "onClickedWater"
QT_MOC_LITERAL(11, 111, 12), // "onClickedIce"
QT_MOC_LITERAL(12, 124, 18), // "onClickedArmorFull"
QT_MOC_LITERAL(13, 143, 18), // "onClickedArmorLeft"
QT_MOC_LITERAL(14, 162, 19), // "onClickedArmorRight"
QT_MOC_LITERAL(15, 182, 17), // "onClickedArmorTop"
QT_MOC_LITERAL(16, 200, 20), // "onClickedArmorBottom"
QT_MOC_LITERAL(17, 221, 18), // "onClickedBrickFull"
QT_MOC_LITERAL(18, 240, 18), // "onClickedBrickLeft"
QT_MOC_LITERAL(19, 259, 19), // "onClickedBrickRight"
QT_MOC_LITERAL(20, 279, 17), // "onClickedBrickTop"
QT_MOC_LITERAL(21, 297, 20) // "onClickedBrickBottom"

    },
    "MapEditor\0QuitViewer\0\0QuitAppToMain\0"
    "SendBlock\0TexType\0texType\0FillType\0"
    "fillType\0onClickedBushes\0onClickedWater\0"
    "onClickedIce\0onClickedArmorFull\0"
    "onClickedArmorLeft\0onClickedArmorRight\0"
    "onClickedArmorTop\0onClickedArmorBottom\0"
    "onClickedBrickFull\0onClickedBrickLeft\0"
    "onClickedBrickRight\0onClickedBrickTop\0"
    "onClickedBrickBottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    2,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    0,  104,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    0,  109,    2, 0x0a /* Public */,
      18,    0,  110,    2, 0x0a /* Public */,
      19,    0,  111,    2, 0x0a /* Public */,
      20,    0,  112,    2, 0x0a /* Public */,
      21,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,

 // slots: parameters
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
    QMetaType::Void,

       0        // eod
};

void MapEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapEditor *_t = static_cast<MapEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->QuitViewer(); break;
        case 1: _t->QuitAppToMain(); break;
        case 2: _t->SendBlock((*reinterpret_cast< TexType(*)>(_a[1])),(*reinterpret_cast< FillType(*)>(_a[2]))); break;
        case 3: _t->onClickedBushes(); break;
        case 4: _t->onClickedWater(); break;
        case 5: _t->onClickedIce(); break;
        case 6: _t->onClickedArmorFull(); break;
        case 7: _t->onClickedArmorLeft(); break;
        case 8: _t->onClickedArmorRight(); break;
        case 9: _t->onClickedArmorTop(); break;
        case 10: _t->onClickedArmorBottom(); break;
        case 11: _t->onClickedBrickFull(); break;
        case 12: _t->onClickedBrickLeft(); break;
        case 13: _t->onClickedBrickRight(); break;
        case 14: _t->onClickedBrickTop(); break;
        case 15: _t->onClickedBrickBottom(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MapEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapEditor::QuitViewer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MapEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapEditor::QuitAppToMain)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MapEditor::*_t)(TexType , FillType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapEditor::SendBlock)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MapEditor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MapEditor.data,
      qt_meta_data_MapEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MapEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MapEditor.stringdata0))
        return static_cast<void*>(const_cast< MapEditor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MapEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MapEditor::QuitViewer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MapEditor::QuitAppToMain()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MapEditor::SendBlock(TexType _t1, FillType _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
