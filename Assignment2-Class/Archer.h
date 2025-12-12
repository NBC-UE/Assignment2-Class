#pragma once
#include<string>
#include "player.h"

using namespace std;

class Monster;

class Archer : public Player {
public:
	Archer(const string& nickname);

	void attack() override;
	void attack(Monster* monster) override;
};