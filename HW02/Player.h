#pragma once

#include <string>

class Player
{
public:
	
	Player(std::string Nickname);

	virtual void attack() = 0;
	
	void printPlayerStatus();

	virtual ~Player() {}


	std::string getJobName() const;
	std::string getNickname() const;
	int getLevel() const;
	int getHP() const;
	int getMP() const;
	int getPower() const;
	int getDefence() const;
	int getAccuracy() const;
	int getSpeed() const;
	void TakeDamage(int damage);


protected:
	std::string Job_Name;
	std::string Nickname;
	int Level;
	int HP;
	int MP;
	int Power;
	int Defence;
	int Accuracy;
	int Speed;

};

