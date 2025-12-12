#include "Thief.h"
#include <iostream>

Thief::Thief(const string& nickname)
    :Player(nickname)
{
    job_name = "도적";
    HP = 80;
    MP = 150;
    power = 15;
    defence = 11;
    accuracy = 21;
    speed = 25;
}

void Thief::attack()
{
    cout << "암살 공격 뒤에서 찌르기!!!\n";
}
