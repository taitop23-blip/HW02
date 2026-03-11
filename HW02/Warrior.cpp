// Warrior.cpp

#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string Nickname) : Player(Nickname)
{
	this->Job_Name = "전사";
	this->HP += 50;
	this->Power += 20;
}

void Warrior::attack()
{
	std::cout << "전사 [ " << this->Nickname << " ] : 검을 휘두릅니다!" << std::endl;
}
