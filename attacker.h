#ifndef ATTACKER_H
#define ATTACKER_H

#include <QObject>

class Attacker : public QObject
{
    Q_OBJECT
public:
    explicit Attacker(QObject *parent = nullptr);
    void Attack();
    void Dead();
private:
    int mLife;
    int mPower;
    int mAttackDirection;

};

#endif // ATTACKER_H
