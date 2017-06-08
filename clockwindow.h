#ifndef CLOCKWINDOW_H
#define CLOCKWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class ClockWindow;
}

class ClockWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClockWindow(QWidget *parent = 0);
    ~ClockWindow();

public slots:
    void myfunction();

private:
    Ui::ClockWindow *ui;
    QTimer *timer;
};

#endif // CLOCKWINDOW_H
