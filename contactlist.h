#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include <QObject>
#include "contact.h"
#include <QList>
#include <QDeclarativeListProperty>

class ContactList : public QObject
{
    Q_OBJECT
public:
    ContactList();

    Q_PROPERTY(QDeclarativeListProperty<Contact> contacts READ contacts CONSTANT)
    QDeclarativeListProperty<Contact> contacts()
    {
        return QDeclarativeListProperty<Contact>(this, _contacts);
    }
signals:

public slots:
private:
    QList<Contact*> _contacts;
};

#endif // CONTACTLIST_H
