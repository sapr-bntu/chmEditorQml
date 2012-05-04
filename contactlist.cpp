#include "contactlist.h"
#include <QDebug>
#include <time.h>

ContactList::ContactList() :
    QObject(0)
{
    qDebug() << "ContactList created!";
    QList<QString> names;
    QList<QString> types;
    names << "Name1" << "Vasya" << "petya" << "good guy" << "bad guy" << "youmil" << "rutta" << "hooker";
    types << "admin" << "user" << "boss" << "ex-boss" << "lamer";
    qsrand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        Contact * c = new Contact;
        c->setName(names.at(qrand() % names.count()));
        c->setType(types.at(qrand() % types.count()));
        _contacts.append(c);
    }
}
