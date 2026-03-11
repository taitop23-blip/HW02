#pragma once
#include <string>

class Monster
{
protected:
    std::string Name;
    int HP;
    int AttackPower;

public:
    Monster(std::string Name, int HP, int AttackPower);

    void TakeDamage(int damage);
    void printMonsterStatus();
    int getAttackPower() const;
    int getHP() const;
};

