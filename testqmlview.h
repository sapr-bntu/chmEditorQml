#ifndef TESTQMLVIEW_H
#define TESTQMLVIEW_H

#include <QWidget>
#include <QDeclarativeView>
#include <QToolBar>

namespace Ui
{
    class TestQmlView;
}

class TestQmlView : public QWidget
{
    Q_OBJECT

public:
    explicit TestQmlView(QWidget *parent = 0);
    ~TestQmlView();
    void setQml(const QUrl & url);
    QDeclarativeView * declarativeView() const
    {
        return dview;
    }

protected:
    void changeEvent(QEvent *e);
signals:
    void goUp();
    void goDown();

private:
    Ui::TestQmlView *ui;
    QDeclarativeView * dview;
    QToolBar * toolbar;
    QAction * up;
    QAction * down;
};

#endif // TESTQMLVIEW_H
