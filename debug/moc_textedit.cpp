/****************************************************************************
** Meta object code from reading C++ file 'textedit.h'
**
** Created: Thu 19. Apr 15:11:12 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../textedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      28,    9,   20,    9, 0x0a,
      39,    9,    9,    9, 0x0a,
      50,    9,    9,    9, 0x0a,
      66,    9,   61,    9, 0x0a,
      81,   77,   61,    9, 0x0a,
     101,   77,    9,    9, 0x0a,
     120,    9,    9,    9, 0x0a,
     139,    9,    9,    9, 0x0a,
     154,    9,    9,    9, 0x0a,
     165,    9,    9,    9, 0x0a,
     181,    9,    9,    9, 0x0a,
     196,  194,    9,    9, 0x0a,
     218,  216,    9,    9, 0x0a,
     247,  236,    9,    9, 0x0a,
     262,    9,    9,    9, 0x0a,
     276,  274,    9,    9, 0x0a,
     296,    9,    9,    9, 0x0a,
     319,    9,    9,    9, 0x0a,
     327,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TextEdit[] = {
    "TextEdit\0\0fileNew()\0QString\0fileOpen()\0"
    "OpenWord()\0SaveWord()\0bool\0fileSave()\0"
    "str\0fileSaveAs(QString)\0filePrint(QString)\0"
    "filePrintPreview()\0filePrintPdf()\0"
    "textBold()\0textUnderline()\0textItalic()\0"
    "f\0textFamily(QString)\0p\0textSize(QString)\0"
    "styleIndex\0textStyle(int)\0textColor()\0"
    "a\0textAlign(QAction*)\0clipboardDataChanged()\0"
    "about()\0printPreview(QPrinter*)\0"
};

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextEdit *_t = static_cast<TextEdit *>(_o);
        switch (_id) {
        case 0: _t->fileNew(); break;
        case 1: { QString _r = _t->fileOpen();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->OpenWord(); break;
        case 3: _t->SaveWord(); break;
        case 4: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->fileSaveAs((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->filePrint((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->filePrintPreview(); break;
        case 8: _t->filePrintPdf(); break;
        case 9: _t->textBold(); break;
        case 10: _t->textUnderline(); break;
        case 11: _t->textItalic(); break;
        case 12: _t->textFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->textSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->textStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->textColor(); break;
        case 16: _t->textAlign((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 17: _t->clipboardDataChanged(); break;
        case 18: _t->about(); break;
        case 19: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextEdit::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TextEdit,
      qt_meta_data_TextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit))
        return static_cast<void*>(const_cast< TextEdit*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
