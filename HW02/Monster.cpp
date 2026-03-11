#include "Monster.h"
#include <iostream>

Monster::Monster(std::string Name, int HP, int AttackPower)
{
    this->Name = Name;
    this->HP = HP;
    this->AttackPower = AttackPower;
}

void Monster::TakeDamage(int damage)
{
    this->HP -= damage;

    if (this->HP < 0) {
        this->HP = 0;
    }

    std::cout << "[ 시스템 ] " << this->Name << "이(가) " << damage << "의 피해를 입었습니다!" << std::endl;
    std::cout << " -> 남은 체력: " << this->HP << std::endl;
}

void Monster::printMonsterStatus()
{
    std::cout << "=================================" << std::endl;
    std::cout << " [ 몬스터 : " << this->Name << " ] " << std::endl;
    std::cout << " 체 력  : " << this->HP << " / 공격력 : " << this->AttackPower << std::endl;
    std::cout << "=================================" << std::endl;
}

int Monster::getAttackPower() const {
    return this->AttackPower;
}

int Monster::getHP() const {
    return this->HP;
}