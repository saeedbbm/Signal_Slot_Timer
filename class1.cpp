#include "class1.h"

class1::class1(QObject *parent) : QObject(parent)
{

}

void class1::slotFunc2(QString message)
{
    qDebug() << message;
}

void class1::slotFunc3()
{
    qDebug() << "timeout" << QDateTime::currentDateTime().toString();
}
