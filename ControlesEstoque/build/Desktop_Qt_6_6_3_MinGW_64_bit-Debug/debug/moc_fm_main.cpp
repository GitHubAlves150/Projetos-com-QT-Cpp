/****************************************************************************
** Meta object code from reading C++ file 'fm_main.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../fm_main.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fm_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFM_MainENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFM_MainENDCLASS = QtMocHelpers::stringData(
    "FM_Main",
    "on_btn_blockANDunblock_clicked",
    "",
    "on_btn_nova_venda_clicked",
    "on_actionEstoque_triggered",
    "on_actionVendas_triggered",
    "on_actionColaboradores_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFM_MainENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[8];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[27];
    char stringdata5[26];
    char stringdata6[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFM_MainENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFM_MainENDCLASS_t qt_meta_stringdata_CLASSFM_MainENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "FM_Main"
        QT_MOC_LITERAL(8, 30),  // "on_btn_blockANDunblock_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 25),  // "on_btn_nova_venda_clicked"
        QT_MOC_LITERAL(66, 26),  // "on_actionEstoque_triggered"
        QT_MOC_LITERAL(93, 25),  // "on_actionVendas_triggered"
        QT_MOC_LITERAL(119, 32)   // "on_actionColaboradores_triggered"
    },
    "FM_Main",
    "on_btn_blockANDunblock_clicked",
    "",
    "on_btn_nova_venda_clicked",
    "on_actionEstoque_triggered",
    "on_actionVendas_triggered",
    "on_actionColaboradores_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFM_MainENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FM_Main::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSFM_MainENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFM_MainENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFM_MainENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FM_Main, std::true_type>,
        // method 'on_btn_blockANDunblock_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_nova_venda_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEstoque_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionVendas_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionColaboradores_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FM_Main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FM_Main *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_blockANDunblock_clicked(); break;
        case 1: _t->on_btn_nova_venda_clicked(); break;
        case 2: _t->on_actionEstoque_triggered(); break;
        case 3: _t->on_actionVendas_triggered(); break;
        case 4: _t->on_actionColaboradores_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FM_Main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FM_Main::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFM_MainENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FM_Main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
