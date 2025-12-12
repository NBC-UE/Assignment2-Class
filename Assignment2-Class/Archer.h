#pragma once
#include<string>
#include "player.h"

using namespace std;

class Archer : public Player {
public:
	Archer(const string& nickname);

	void attack() override;
};