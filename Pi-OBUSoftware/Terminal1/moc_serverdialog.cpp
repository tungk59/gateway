/****************************************************************************
** Meta object code from reading C++ file 'serverdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Dialog/serverdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ServerDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      37,   13,   13,   13, 0x0a,
      62,   58,   13,   13, 0x0a,
     102,   13,   13,   13, 0x0a,
     117,  111,   13,   13, 0x0a,
     147,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ServerDialog[] = {
    "ServerDialog\0\0on_btnCancel_clicked()\0"
    "on_btnSend_clicked()\0loi\0"
    "loiSocket(QAbstractSocket::SocketError)\0"
    "ketNoi()\0reply\0replyFinished(QNetworkReply*)\0"
    "on_btnConnect_clicked()\0"
};

void ServerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ServerDialog *_t = static_cast<ServerDialog *>(_o);
        switch (_id) {
        case 0: _t->on_btnCancel_clicked(); break;
        case 1: _t->on_btnSend_clicked(); break;
        case 2: _t->loiSocket((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->ketNoi(); break;
        case 4: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->on_btnConnect_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ServerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ServerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ServerDialog,
      qt_meta_data_ServerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ServerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ServerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ServerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ServerDialog))
        return static_cast<void*>(const_cast< ServerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ServerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
