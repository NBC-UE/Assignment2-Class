#pragma once
#include<string>
#include "player.h"

using namespace std;

class Monster;

class Thief : public Player {
public:
	Thief(const string& nickname);

	void attack() override;
	void attack(Monster* monster) override;
};