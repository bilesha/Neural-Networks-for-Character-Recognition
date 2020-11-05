/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Start_up_codes_LetterRecognition_v2/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[571];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 31), // "on_pushButton_Read_File_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 40), // "pushButton_ApplyFunction_and_..."
QT_MOC_LITERAL(4, 85, 43), // "on_horizScrollBar_LearningRat..."
QT_MOC_LITERAL(5, 129, 5), // "value"
QT_MOC_LITERAL(6, 135, 21), // "setTestPatternOutputs"
QT_MOC_LITERAL(7, 157, 6), // "letter"
QT_MOC_LITERAL(8, 164, 16), // "LetterStructure*"
QT_MOC_LITERAL(9, 181, 15), // "letterstructure"
QT_MOC_LITERAL(10, 197, 43), // "on_pushButton_Classify_Test_P..."
QT_MOC_LITERAL(11, 241, 46), // "on_pushButton_Train_Network_M..."
QT_MOC_LITERAL(12, 288, 40), // "on_pushButton_Initialise_Netw..."
QT_MOC_LITERAL(13, 329, 39), // "on_pushButton_Test_All_Patter..."
QT_MOC_LITERAL(14, 369, 34), // "on_pushButton_Save_Weights_cl..."
QT_MOC_LITERAL(15, 404, 34), // "on_pushButton_Load_Weights_cl..."
QT_MOC_LITERAL(16, 439, 34), // "on_pushButton_Shuffle_Data_cl..."
QT_MOC_LITERAL(17, 474, 42), // "on_pushButton_testNetOnTraini..."
QT_MOC_LITERAL(18, 517, 46), // "on_horizScrollBar_LearningRat..."
QT_MOC_LITERAL(19, 564, 6) // "action"

    },
    "MainWindow\0on_pushButton_Read_File_clicked\0"
    "\0pushButton_ApplyFunction_and_HiddenLayer\0"
    "on_horizScrollBar_LearningRate_valueChanged\0"
    "value\0setTestPatternOutputs\0letter\0"
    "LetterStructure*\0letterstructure\0"
    "on_pushButton_Classify_Test_Pattern_clicked\0"
    "on_pushButton_Train_Network_Max_Epochs_clicked\0"
    "on_pushButton_Initialise_Network_clicked\0"
    "on_pushButton_Test_All_Patterns_clicked\0"
    "on_pushButton_Save_Weights_clicked\0"
    "on_pushButton_Load_Weights_clicked\0"
    "on_pushButton_Shuffle_Data_clicked\0"
    "on_pushButton_testNetOnTrainingSet_clicked\0"
    "on_horizScrollBar_LearningRate_actionTriggered\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       6,    2,   84,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,
      17,    0,   96,    2, 0x08 /* Private */,
      18,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Char, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Read_File_clicked(); break;
        case 1: _t->pushButton_ApplyFunction_and_HiddenLayer(); break;
        case 2: _t->on_horizScrollBar_LearningRate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setTestPatternOutputs((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< LetterStructure*(*)>(_a[2]))); break;
        case 4: _t->on_pushButton_Classify_Test_Pattern_clicked(); break;
        case 5: _t->on_pushButton_Train_Network_Max_Epochs_clicked(); break;
        case 6: _t->on_pushButton_Initialise_Network_clicked(); break;
        case 7: _t->on_pushButton_Test_All_Patterns_clicked(); break;
        case 8: _t->on_pushButton_Save_Weights_clicked(); break;
        case 9: _t->on_pushButton_Load_Weights_clicked(); break;
        case 10: _t->on_pushButton_Shuffle_Data_clicked(); break;
        case 11: _t->on_pushButton_testNetOnTrainingSet_clicked(); break;
        case 12: _t->on_horizScrollBar_LearningRate_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
