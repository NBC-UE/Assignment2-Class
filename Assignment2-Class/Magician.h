#pragma once
#include<string>
#include "player.h"

using namespace std;

class Monster;

class Magician : public Player {
public:
	Magician(const string& nickname);

	void attack() override;
	void attack(Monster* monster) override;
};