/****************************************************************************
** Meta object code from reading C++ file 'AudioOutput.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AudioOutput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phonon__MPlayer__AudioOutput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   30,   29,   29, 0x05,
      58,   29,   29,   29, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Phonon__MPlayer__AudioOutput[] = {
    "Phonon::MPlayer::AudioOutput\0\0volume\0"
    "volumeChanged(qreal)\0audioDeviceFailed()\0"
};

void Phonon::MPlayer::AudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AudioOutput *_t = static_cast<AudioOutput *>(_o);
        switch (_id) {
        case 0: _t->volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->audioDeviceFailed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phonon::MPlayer::AudioOutput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phonon::MPlayer::AudioOutput::staticMetaObject = {
    { &SinkNode::staticMetaObject, qt_meta_stringdata_Phonon__MPlayer__AudioOutput,
      qt_meta_data_Phonon__MPlayer__AudioOutput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phonon::MPlayer::AudioOutput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phonon::MPlayer::AudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phonon::MPlayer::AudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__MPlayer__AudioOutput))
        return static_cast<void*>(const_cast< AudioOutput*>(this));
    if (!strcmp(_clname, "AudioOutputInterface"))
        return static_cast< AudioOutputInterface*>(const_cast< AudioOutput*>(this));
    if (!strcmp(_clname, "AudioOutputInterface2.phonon.kde.org"))
        return static_cast< Phonon::AudioOutputInterface*>(const_cast< AudioOutput*>(this));
    return SinkNode::qt_metacast(_clname);
}

int Phonon::MPlayer::AudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinkNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Phonon::MPlayer::AudioOutput::volumeChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::MPlayer::AudioOutput::audioDeviceFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
