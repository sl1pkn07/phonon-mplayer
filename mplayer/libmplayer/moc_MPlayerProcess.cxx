/****************************************************************************
** Meta object code from reading C++ file 'MPlayerProcess.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MPlayerProcess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MPlayerProcess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phonon__MPlayer__MPlayerProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: signature, parameters, type, tag, flags
      51,   33,   32,   32, 0x05,
      93,   32,   32,   32, 0x05,
     117,  112,   32,   32, 0x05,
     140,  130,   32,   32, 0x05,
     172,  165,   32,   32, 0x05,
     213,  204,   32,   32, 0x05,
     244,  235,   32,   32, 0x05,
     280,  269,   32,   32, 0x05,
     302,   32,   32,   32, 0x05,
     326,  316,   32,   32, 0x05,
     367,  354,   32,   32, 0x05,
     407,  399,   32,   32, 0x05,
     442,  399,   32,   32, 0x05,
     496,  476,   32,   32, 0x05,
     552,  536,   32,   32, 0x05,
     587,  584,   32,   32, 0x05,
     625,  608,   32,   32, 0x05,
     665,  655,   32,   32, 0x05,
     688,  584,   32,   32, 0x05,
     723,  706,   32,   32, 0x05,
     762,  745,   32,   32, 0x05,
     822,  807,   32,   32, 0x05,
     856,  842,   32,   32, 0x05,
     874,   32,   32,   32, 0x05,
     890,   32,   32,   32, 0x05,
     910,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
     946,  941,   32,   32, 0x08,
     985,  965,   32,   32, 0x08,
    1026, 1020,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Phonon__MPlayer__MPlayerProcess[] = {
    "Phonon::MPlayer::MPlayerProcess\0\0"
    "newState,oldState\0"
    "stateChanged(Phonon::State,Phonon::State)\0"
    "endOfFileReached()\0time\0tick(qint64)\0"
    "totalTime\0totalTimeChanged(qint64)\0"
    "number\0currentFrameNumberReceived(int)\0"
    "hasVideo\0hasVideoChanged(bool)\0fileName\0"
    "screenshotSaved(QString)\0isSeekable\0"
    "seekableChanged(bool)\0mediaLoaded()\0"
    "mediaData\0mediaDataChanged(MediaData)\0"
    "width,height\0videoWidgetSizeChanged(int,int)\0"
    "message\0connectingMessageReceived(QString)\0"
    "resolvingMessageReceived(QString)\0"
    "id,audioChannelData\0"
    "audioChannelAdded(int,AudioChannelData)\0"
    "id,subtitleData\0subtitleAdded(int,SubtitleData)\0"
    "id\0subtitleChanged(int)\0subtitleFileName\0"
    "subtitleLoadingError(QString)\0id,length\0"
    "titleAdded(int,qint64)\0titleChanged(int)\0"
    "titleId,chapters\0chapterAdded(int,int)\0"
    "id,title,from,to\0"
    "mkvChapterAdded(int,QString,QString,QString)\0"
    "titleId,angles\0angleAdded(int,int)\0"
    "percentFilled\0bufferStatus(int)\0"
    "scanningFonts()\0updatingFontCache()\0"
    "receivedCreatingIndex(QString)\0line\0"
    "parseLine(QString)\0exitCode,exitStatus\0"
    "finished(int,QProcess::ExitStatus)\0"
    "error\0error(QProcess::ProcessError)\0"
};

void Phonon::MPlayer::MPlayerProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MPlayerProcess *_t = static_cast<MPlayerProcess *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 1: _t->endOfFileReached(); break;
        case 2: _t->tick((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->totalTimeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->currentFrameNumberReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->hasVideoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->screenshotSaved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->seekableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->mediaLoaded(); break;
        case 9: _t->mediaDataChanged((*reinterpret_cast< const MediaData(*)>(_a[1]))); break;
        case 10: _t->videoWidgetSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->connectingMessageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->resolvingMessageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->audioChannelAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const AudioChannelData(*)>(_a[2]))); break;
        case 14: _t->subtitleAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SubtitleData(*)>(_a[2]))); break;
        case 15: _t->subtitleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->subtitleLoadingError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->titleAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 18: _t->titleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->chapterAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->mkvChapterAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 21: _t->angleAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->bufferStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->scanningFonts(); break;
        case 24: _t->updatingFontCache(); break;
        case 25: _t->receivedCreatingIndex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->parseLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 28: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phonon::MPlayer::MPlayerProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phonon::MPlayer::MPlayerProcess::staticMetaObject = {
    { &MyProcess::staticMetaObject, qt_meta_stringdata_Phonon__MPlayer__MPlayerProcess,
      qt_meta_data_Phonon__MPlayer__MPlayerProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phonon::MPlayer::MPlayerProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phonon::MPlayer::MPlayerProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phonon::MPlayer::MPlayerProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__MPlayer__MPlayerProcess))
        return static_cast<void*>(const_cast< MPlayerProcess*>(this));
    return MyProcess::qt_metacast(_clname);
}

int Phonon::MPlayer::MPlayerProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MyProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void Phonon::MPlayer::MPlayerProcess::stateChanged(Phonon::State _t1, Phonon::State _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Phonon::MPlayer::MPlayerProcess::endOfFileReached()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Phonon::MPlayer::MPlayerProcess::tick(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Phonon::MPlayer::MPlayerProcess::totalTimeChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Phonon::MPlayer::MPlayerProcess::currentFrameNumberReceived(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Phonon::MPlayer::MPlayerProcess::hasVideoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Phonon::MPlayer::MPlayerProcess::screenshotSaved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Phonon::MPlayer::MPlayerProcess::seekableChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Phonon::MPlayer::MPlayerProcess::mediaLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void Phonon::MPlayer::MPlayerProcess::mediaDataChanged(const MediaData & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Phonon::MPlayer::MPlayerProcess::videoWidgetSizeChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Phonon::MPlayer::MPlayerProcess::connectingMessageReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Phonon::MPlayer::MPlayerProcess::resolvingMessageReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Phonon::MPlayer::MPlayerProcess::audioChannelAdded(int _t1, const AudioChannelData & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Phonon::MPlayer::MPlayerProcess::subtitleAdded(int _t1, const SubtitleData & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Phonon::MPlayer::MPlayerProcess::subtitleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Phonon::MPlayer::MPlayerProcess::subtitleLoadingError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Phonon::MPlayer::MPlayerProcess::titleAdded(int _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Phonon::MPlayer::MPlayerProcess::titleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Phonon::MPlayer::MPlayerProcess::chapterAdded(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Phonon::MPlayer::MPlayerProcess::mkvChapterAdded(int _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Phonon::MPlayer::MPlayerProcess::angleAdded(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Phonon::MPlayer::MPlayerProcess::bufferStatus(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Phonon::MPlayer::MPlayerProcess::scanningFonts()
{
    QMetaObject::activate(this, &staticMetaObject, 23, 0);
}

// SIGNAL 24
void Phonon::MPlayer::MPlayerProcess::updatingFontCache()
{
    QMetaObject::activate(this, &staticMetaObject, 24, 0);
}

// SIGNAL 25
void Phonon::MPlayer::MPlayerProcess::receivedCreatingIndex(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}
QT_END_MOC_NAMESPACE
