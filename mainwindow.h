#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QDateTime>
#include <QTimer>
#include "class1.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void emitFunc();
    void timerStopper();

private slots:
    void slotFunc1();
    void on_btnStandard_clicked();

signals:
    void mySignal(QString message);

private:
    Ui::MainWindow *ui;
    class1 object1;

    QTimer *timer;
};
#endif // MAINWINDOW_H
