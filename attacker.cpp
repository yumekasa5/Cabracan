#include "attacker.h"

Attacker::Attacker(QObject *parent)
    : QObject{parent}
{

}

void Attacker::Dead()
{
    this->mLife = 0;
    delete this;
}
