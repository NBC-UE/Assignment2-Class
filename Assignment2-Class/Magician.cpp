#include "Magician.h"
#include <iostream>

Magician::Magician(const string& nickname)
    :Player(nickname)
{
    job_name = "¸¶¹ý»ç";
    HP = 125;
    MP = 380;
    power = 12;
    defence = 9;
    accuracy = 17;
    speed = 11;
}

void Magician::attack()
{
    cout << "¸ÞÅ×¿À °ø°Ý!!! ºØºØºÖ¤·\n";
}
