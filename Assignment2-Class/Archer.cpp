#include "Archer.h"
#include <iostream>

Archer::Archer(const string& nickname)
    :Player(nickname)
{
    job_name = "±Ã¼ö";
    HP = 140;
    MP = 150;
    power = 18;
    defence = 11;
    accuracy = 30;
    speed = 22;
}

void Archer::attack()
{
    cout << "¿ø°Å¸® È° °ø°Ý!!! ½¹½¹½¹½¹!!\n";
}
