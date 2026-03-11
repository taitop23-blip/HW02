// Warrior.h

#pragma once
#include "Player.h"

class Warrior : public Player
{
public:
	Warrior(std::string Nickname);
	void attack() override;
};

