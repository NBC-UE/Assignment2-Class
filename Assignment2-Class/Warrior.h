#pragma once
#include<string>
#include "player.h"

using namespace std;

class Warrior : public Player {
public:
	Warrior(const string& nickname);

	void attack() override;
};