#include "Warrior.h"
#include <iostream>

Warrior::Warrior(const string& nickname)
	:Player(nickname)
{
    job_name = "Àü»ç";
    HP = 200;
    MP = 100;
    power = 22;
    defence = 18;
    accuracy = 10;
    speed = 9;
}

void Warrior::attack()
{
    cout << "Ä® ÈÖµÎ¸£±â °ø°Ý ½¹½¹½¹½¹!!!\n";
}
