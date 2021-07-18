#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnConnect, &QPushButton::clicked, this, &MainWindow::slotFunc1);

    connect(this,&MainWindow::mySignal,&object1,&class1::slotFunc2);
    emitFunc();

    timer = new QTimer();
    connect(timer,&QTimer::timeout,&object1,&class1::slotFunc3);
    timer->setInterval(1000);
    timer->start();
    timer->singleShot(4000,this, &MainWindow::timerStopper);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::emitFunc()
{
    emit mySignal("This is going to start a Signal - Sensor Data");
}

void MainWindow::timerStopper()
{
    timer->stop();
    qDebug() << "Timer Stopped";
}

void MainWindow::slotFunc1()
{
    qDebug() << "Connect Clicked" << QDateTime::currentDateTime().toString();
}


void MainWindow::on_btnStandard_clicked()
{
    qDebug() << "Standard Clicked";
}

