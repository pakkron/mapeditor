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
    QByteArrayData data[34];
    char stringdata0[404];
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
QT_MOC_LITERAL(4, 36, 13), // "SendBlockType"
QT_MOC_LITERAL(5, 50, 9), // "BlockType"
QT_MOC_LITERAL(6, 60, 9), // "blockType"
QT_MOC_LITERAL(7, 70, 6), // "NewMap"
QT_MOC_LITERAL(8, 77, 13), // "changeMapSize"
QT_MOC_LITERAL(9, 91, 9), // "blockEdit"
QT_MOC_LITERAL(10, 101, 11), // "LoadXMLFile"
QT_MOC_LITERAL(11, 113, 11), // "SaveXMLFile"
QT_MOC_LITERAL(12, 125, 13), // "SaveAsXMLFile"
QT_MOC_LITERAL(13, 139, 8), // "AddBlock"
QT_MOC_LITERAL(14, 148, 19), // "osg::ref_ptr<Block>"
QT_MOC_LITERAL(15, 168, 5), // "block"
QT_MOC_LITERAL(16, 174, 11), // "RemoveBlock"
QT_MOC_LITERAL(17, 186, 12), // "ReplaceBlock"
QT_MOC_LITERAL(18, 199, 15), // "ChangeBlockType"
QT_MOC_LITERAL(19, 215, 16), // "QAbstractButton*"
QT_MOC_LITERAL(20, 232, 7), // "rButton"
QT_MOC_LITERAL(21, 240, 10), // "BlockType&"
QT_MOC_LITERAL(22, 251, 12), // "blockTypeOld"
QT_MOC_LITERAL(23, 264, 15), // "CreateBlockType"
QT_MOC_LITERAL(24, 280, 13), // "QButtonGroup*"
QT_MOC_LITERAL(25, 294, 8), // "btnGroup"
QT_MOC_LITERAL(26, 303, 12), // "AddBlockType"
QT_MOC_LITERAL(27, 316, 2), // "id"
QT_MOC_LITERAL(28, 319, 18), // "AddBlockTypeButton"
QT_MOC_LITERAL(29, 338, 13), // "QRadioButton*"
QT_MOC_LITERAL(30, 352, 15), // "RemoveBlockType"
QT_MOC_LITERAL(31, 368, 21), // "RemoveBlockTypeButton"
QT_MOC_LITERAL(32, 390, 4), // "Undo"
QT_MOC_LITERAL(33, 395, 8) // "GetMutex"

    },
    "MapEditor\0QuitViewer\0\0QuitAppToMain\0"
    "SendBlockType\0BlockType\0blockType\0"
    "NewMap\0changeMapSize\0blockEdit\0"
    "LoadXMLFile\0SaveXMLFile\0SaveAsXMLFile\0"
    "AddBlock\0osg::ref_ptr<Block>\0block\0"
    "RemoveBlock\0ReplaceBlock\0ChangeBlockType\0"
    "QAbstractButton*\0rButton\0BlockType&\0"
    "blockTypeOld\0CreateBlockType\0QButtonGroup*\0"
    "btnGroup\0AddBlockType\0id\0AddBlockTypeButton\0"
    "QRadioButton*\0RemoveBlockType\0"
    "RemoveBlockTypeButton\0Undo\0GetMutex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    0,  115,    2, 0x06 /* Public */,
       4,    1,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  119,    2, 0x0a /* Public */,
       8,    0,  120,    2, 0x0a /* Public */,
       9,    0,  121,    2, 0x0a /* Public */,
      10,    0,  122,    2, 0x0a /* Public */,
      11,    0,  123,    2, 0x0a /* Public */,
      12,    0,  124,    2, 0x0a /* Public */,
      13,    2,  125,    2, 0x0a /* Public */,
      16,    1,  130,    2, 0x0a /* Public */,
      17,    2,  133,    2, 0x0a /* Public */,
      18,    3,  138,    2, 0x0a /* Public */,
      23,    2,  145,    2, 0x0a /* Public */,
      26,    2,  150,    2, 0x0a /* Public */,
      28,    1,  155,    2, 0x0a /* Public */,
      30,    1,  158,    2, 0x0a /* Public */,
      31,    1,  161,    2, 0x0a /* Public */,
      32,    0,  164,    2, 0x0a /* Public */,
      33,    0,  165,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 5,   15,    6,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 5,   15,    6,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 5,   20,    6,   22,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 5,   25,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,   27,    6,
    QMetaType::Void, 0x80000000 | 29,   20,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, 0x80000000 | 29,   20,
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
        case 2: _t->SendBlockType((*reinterpret_cast< BlockType(*)>(_a[1]))); break;
        case 3: _t->NewMap(); break;
        case 4: _t->changeMapSize(); break;
        case 5: _t->blockEdit(); break;
        case 6: _t->LoadXMLFile(); break;
        case 7: _t->SaveXMLFile(); break;
        case 8: _t->SaveAsXMLFile(); break;
        case 9: _t->AddBlock((*reinterpret_cast< osg::ref_ptr<Block>(*)>(_a[1])),(*reinterpret_cast< BlockType(*)>(_a[2]))); break;
        case 10: _t->RemoveBlock((*reinterpret_cast< osg::ref_ptr<Block>(*)>(_a[1]))); break;
        case 11: _t->ReplaceBlock((*reinterpret_cast< osg::ref_ptr<Block>(*)>(_a[1])),(*reinterpret_cast< BlockType(*)>(_a[2]))); break;
        case 12: _t->ChangeBlockType((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< BlockType(*)>(_a[2])),(*reinterpret_cast< BlockType(*)>(_a[3]))); break;
        case 13: _t->CreateBlockType((*reinterpret_cast< QButtonGroup*(*)>(_a[1])),(*reinterpret_cast< BlockType(*)>(_a[2]))); break;
        case 14: _t->AddBlockType((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< BlockType(*)>(_a[2]))); break;
        case 15: _t->AddBlockTypeButton((*reinterpret_cast< QRadioButton*(*)>(_a[1]))); break;
        case 16: _t->RemoveBlockType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->RemoveBlockTypeButton((*reinterpret_cast< QRadioButton*(*)>(_a[1]))); break;
        case 18: _t->Undo(); break;
        case 19: _t->GetMutex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QButtonGroup* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioButton* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioButton* >(); break;
            }
            break;
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
            typedef void (MapEditor::*_t)(BlockType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapEditor::SendBlockType)) {
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
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
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
void MapEditor::SendBlockType(BlockType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
