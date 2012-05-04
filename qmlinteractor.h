#ifndef QMLINTERACTOR_H
#define QMLINTERACTOR_H

#include <QObject>

class QmlInteractor : public QObject
{
    Q_OBJECT
public:
    QmlInteractor();
    Q_INVOKABLE void escapePressed();

signals:
    void moveUp();
    void moveDown();

public slots:

};

#endif // QMLINTERACTOR_H
