/****************************************************************************
** Meta object code from reading C++ file 'MediaController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MediaController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MediaController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phonon__MPlayer__MediaController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,
      62,   33,   33,   33, 0x05,
     112,   94,   33,   33, 0x05,
     158,  142,   33,   33, 0x05,
     202,  186,   33,   33, 0x05,
     242,  230,   33,   33, 0x05,
     274,  260,   33,   33, 0x05,
     306,  294,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
     344,  324,   33,   33, 0x08,
     400,  384,   33,   33, 0x08,
     435,  432,   33,   33, 0x08,
     466,  456,   33,   33, 0x08,
     506,  489,   33,   33, 0x08,
     545,  528,   33,   33, 0x08,
     605,  590,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Phonon__MPlayer__MediaController[] = {
    "Phonon::MPlayer::MediaController\0\0"
    "availableSubtitlesChanged()\0"
    "availableAudioChannelsChanged()\0"
    "availableChapters\0availableChaptersChanged(int)\0"
    "availableTitles\0availableTitlesChanged(int)\0"
    "availableAngles\0availableAnglesChanged(int)\0"
    "angleNumber\0angleChanged(int)\0"
    "chapterNumber\0chapterChanged(int)\0"
    "titleNumber\0titleChanged(int)\0"
    "id,audioChannelData\0"
    "audioChannelAdded(int,AudioChannelData)\0"
    "id,subtitleData\0subtitleAdded(int,SubtitleData)\0"
    "id\0subtitleChanged(int)\0id,length\0"
    "titleAdded(int,qint64)\0titleId,chapters\0"
    "chapterAdded(int,int)\0id,title,from,to\0"
    "mkvChapterAdded(int,QString,QString,QString)\0"
    "titleId,angles\0angleAdded(int,int)\0"
};

void Phonon::MPlayer::MediaController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MediaController *_t = static_cast<MediaController *>(_o);
        switch (_id) {
        case 0: _t->availableSubtitlesChanged(); break;
        case 1: _t->availableAudioChannelsChanged(); break;
        case 2: _t->availableChaptersChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->availableTitlesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->availableAnglesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->angleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->chapterChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->titleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->audioChannelAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const AudioChannelData(*)>(_a[2]))); break;
        case 9: _t->subtitleAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SubtitleData(*)>(_a[2]))); break;
        case 10: _t->subtitleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->titleAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 12: _t->chapterAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->mkvChapterAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 14: _t->angleAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phonon::MPlayer::MediaController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phonon::MPlayer::MediaController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Phonon__MPlayer__MediaController,
      qt_meta_data_Phonon__MPlayer__MediaController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phonon::MPlayer::MediaController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phonon::MPlayer::MediaController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phonon::MPlayer::MediaController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__MPlayer__MediaController))
        return static_cast<void*>(const_cast< MediaController*>(this));
    if (!strcmp(_clname, "AddonInterface"))
        return static_cast< AddonInterface*>(const_cast< MediaController*>(this));
    return QObject::qt_metacast(_clname);
}

int Phonon::MPlayer::MediaController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Phonon::MPlayer::MediaController::availableSubtitlesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Phonon::MPlayer::MediaController::availableAudioChannelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Phonon::MPlayer::MediaController::availableChaptersChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Phonon::MPlayer::MediaController::availableTitlesChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Phonon::MPlayer::MediaController::availableAnglesChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Phonon::MPlayer::MediaController::angleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Phonon::MPlayer::MediaController::chapterChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Phonon::MPlayer::MediaController::titleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
