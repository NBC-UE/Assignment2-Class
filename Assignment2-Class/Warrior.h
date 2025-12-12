#pragma once
#include<string>
#include "player.h"

using namespace std;

class Monster;

class Warrior : public Player {
public:
	Warrior(const string& nickname);

	void attack() override;
	void attack(Monster* monster) override;
};