/****************************************************************************
** Meta object code from reading C++ file 'niepcemain.h'
**
** Created: Sat Jun 26 01:41:49 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../niepcemain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'niepcemain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NiepceMain[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NiepceMain[] = {
    "NiepceMain\0\0on_action_Libraries_triggered()\0"
    "on_action_Preferences_triggered()\0"
};

const QMetaObject NiepceMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NiepceMain,
      qt_meta_data_NiepceMain, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NiepceMain::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NiepceMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NiepceMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NiepceMain))
        return static_cast<void*>(const_cast< NiepceMain*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NiepceMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_action_Libraries_triggered(); break;
        case 1: on_action_Preferences_triggered(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
