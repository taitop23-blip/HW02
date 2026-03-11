#include "Player.h"
#include <iostream>

Player::Player(std::string Nickname)
{
	
	this->Nickname = Nickname;
	this->Job_Name = "초보자";
	this->Level = 1;
	this->HP = 100;
	this->MP = 50;
	this->Power = 10;
	this->Defence = 5;
	this->Accuracy = 10;
	this->Speed = 300;

}

void Player::printPlayerStatus()
{

	std::cout << "=======================================" << std::endl;
	std::cout << "[ " << this->Nickname << " ] 님의 상태창" << std::endl;
	std::cout << "직 업  : " << this->Job_Name << std::endl;
	std::cout << "레 벨  : " << this->Level << std::endl;
	std::cout << "체 력  : " << this->HP << " / 마나 : " << this->MP << std::endl;
	std::cout << "공격력 : " << this->Power << " / 방어력 : " << this->Defence << std::endl;
	std::cout << "명중률 : " << this->Accuracy << " / 속도 : " << this->Speed << std::endl;
	std::cout << "=======================================" << std::endl;
}

int Player::getPower() const {
	return this->Power;
}

int Player::getHP() const {
	return this->HP;
}

void Player::TakeDamage(int damage) {
	int actualDamage = damage - this->Defence;
	if (actualDamage <= 0) {
		actualDamage = 1;
	}

	this->HP -= actualDamage;
	if (this->HP < 0) {
		this->HP = 0;
	}

	std::cout << "[ 시스템 ] " << this->Nickname << "이(가) " << actualDamage << "의 피해를 입었습니다! (방어력 적용됨)" << std::endl;
}

