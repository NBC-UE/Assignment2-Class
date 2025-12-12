#pragma once
#include<string>
#include "player.h"

using namespace std;

class Magician : public Player {
public:
	Magician(const string& nickname);

	void attack() override;
};