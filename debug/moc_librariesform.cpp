/****************************************************************************
** Meta object code from reading C++ file 'librariesform.h'
**
** Created: Sun Jun 27 01:34:37 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../librariesform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librariesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LibrariesForm[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   14,   14,   14, 0x08,
      68,   14,   14,   14, 0x08,
      91,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LibrariesForm[] = {
    "LibrariesForm\0\0name\0libraryAdded(QString)\0"
    "on_removeButton_clicked()\0"
    "on_addButton_clicked()\0on_okButton_clicked()\0"
};

const QMetaObject LibrariesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibrariesForm,
      qt_meta_data_LibrariesForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibrariesForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibrariesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibrariesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibrariesForm))
        return static_cast<void*>(const_cast< LibrariesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibrariesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: libraryAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_removeButton_clicked(); break;
        case 2: on_addButton_clicked(); break;
        case 3: on_okButton_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LibrariesForm::libraryAdded(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
