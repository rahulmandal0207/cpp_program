#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
private:
protected:
    int attackPower;
public:
    void setAttackPower(int a);
    virtual void attack() = 0;
};

#endif