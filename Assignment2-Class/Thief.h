#pragma once
#include<string>
#include "player.h"

using namespace std;

class Thief : public Player {
public:
	Thief(const string& nickname);

	void attack() override;
};