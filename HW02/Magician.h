// Magician.h

#pragma once
#include "Player.h"

class Magician : public Player
{
public:
	Magician(std::string Nickname);
	void attack() override;
};

