/****************************************************************************
** Meta object code from reading C++ file 'tranceiverlora.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Terminal1/tranceiverlora.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tranceiverlora.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tranceiverlora[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   39,   39,   39, 0x05,
      40,   39,   39,   39, 0x05,
      58,   39,   39,   39, 0x05,
      81,   39,   39,   39, 0x05,
      97,   39,   39,   39, 0x05,
     117,   39,   39,   39, 0x05,
     138,  173,   39,   39, 0x05,
     175,   39,   39,   39, 0x05,
     199,  228,   39,   39, 0x05,
     231,   39,   39,   39, 0x05,
     252,  173,   39,   39, 0x05,
     272,  173,   39,   39, 0x05,
     290,   39,   39,   39, 0x05,
     312,  173,   39,   39, 0x05,
     333,   39,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
     355,   39,   39,   39, 0x0a,
     368,   39,   39,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tranceiverlora[] = {
    "tranceiverlora\0receivedDataLR(QString)\0"
    "\0workRequestedLR()\0ImageReceived(QString)\0"
    "nodeJoinLR(int)\0tempAndHum(QString)\0"
    "tempAndHum1(QString)\0"
    "receiveCompletely(QString,QString)\0,\0"
    "motionDetected(QString)\0"
    "sendTandH(int,double,double)\0,,\0"
    "completeLux(QString)\0sendLux(int,double)\0"
    "sendMois(int,int)\0completeMois(QString)\0"
    "sendDust(int,double)\0completeDust(QString)\0"
    "readDataLR()\0doWorkLR()\0"
};

void tranceiverlora::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tranceiverlora *_t = static_cast<tranceiverlora *>(_o);
        switch (_id) {
        case 0: _t->receivedDataLR((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->workRequestedLR(); break;
        case 2: _t->ImageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->nodeJoinLR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->tempAndHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->tempAndHum1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->receiveCompletely((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->motionDetected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->sendTandH((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 9: _t->completeLux((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->sendLux((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->sendMois((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->completeMois((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->sendDust((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->completeDust((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->readDataLR(); break;
        case 16: _t->doWorkLR(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tranceiverlora::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tranceiverlora::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tranceiverlora,
      qt_meta_data_tranceiverlora, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tranceiverlora::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tranceiverlora::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tranceiverlora::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tranceiverlora))
        return static_cast<void*>(const_cast< tranceiverlora*>(this));
    return QObject::qt_metacast(_clname);
}

int tranceiverlora::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void tranceiverlora::receivedDataLR(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tranceiverlora::workRequestedLR()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void tranceiverlora::ImageReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tranceiverlora::nodeJoinLR(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tranceiverlora::tempAndHum(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void tranceiverlora::tempAndHum1(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void tranceiverlora::receiveCompletely(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void tranceiverlora::motionDetected(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void tranceiverlora::sendTandH(int _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void tranceiverlora::completeLux(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void tranceiverlora::sendLux(int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void tranceiverlora::sendMois(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void tranceiverlora::completeMois(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void tranceiverlora::sendDust(int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void tranceiverlora::completeDust(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
