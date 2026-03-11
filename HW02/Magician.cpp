// Magician.cpp

#include "Magician.h"
#include <iostream>

Magician::Magician(std::string Nickname) : Player(Nickname)
{
	this->Job_Name = "마도사";
	this->HP += 10;
	this->MP += 50;
	this->Power += 30;
}

void Magician::attack()
{
	std::cout << "마도사 [ " << this->Nickname << " ] : 파이어볼을 시전합니다!" << std::endl;
}