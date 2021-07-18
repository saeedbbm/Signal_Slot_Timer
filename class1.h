#ifndef CLASS1_H
#define CLASS1_H

#include <QObject>
#include <QDebug>
#include <QDateTime>

class class1 : public QObject
{
    Q_OBJECT
public:
    explicit class1(QObject *parent = nullptr);

signals:

public slots:
    void slotFunc2(QString Message);
    void slotFunc3();

};

#endif // CLASS1_H
