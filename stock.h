#ifndef STOCK_H
#define STOCK_H

#include <QObject>

class Stock : public QObject
{
    Q_OBJECT
public:
    explicit Stock(QObject *parent = nullptr);



};

#endif // STOCK_H
