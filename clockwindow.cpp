#include "clockwindow.h"
#include "ui_clockwindow.h"
#include <QDebug>
#include <QDateTime>

ClockWindow::ClockWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClockWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);
}

ClockWindow::~ClockWindow()
{
    delete ui;
}

void ClockWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->lbl_date_time->setText(time_text);

}
