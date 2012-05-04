#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>

class Contact : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
public:
    Contact();

    // props

    // name
    QString name() const
    {
        return _name;
    }
    void setName(const QString newName)
    {
        _name = newName;
    }
    // type
    QString type() const
    {
        return _type;
    }
    void setType(const QString newType)
    {
        _type = newType;
    }
signals:
    void nameChanged(const QString newName);
    void typeChanged(const QString newType);

public slots:
private:
    QString _name;
    QString _type;
};

#endif // CONTACT_H
