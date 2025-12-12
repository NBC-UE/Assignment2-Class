#include "Magician.h"
#include "Monster.h"
#include <iostream>

Magician::Magician(const string& nickname)
    :Player(nickname)
{
    job_name = "마법사";
    HP = 125;
    MP = 380;
    power = 12;
    defence = 9;
    accuracy = 17;
    speed = 11;
}

void Magician::attack()
{
    cout << "메테오 공격!!! 붕붕붑ㅇ\n";
}

void Magician::attack(Monster* monster)
{
    if (monster == nullptr)
        return;

    int damage = getPower() - monster->getDefence();
    damage = damage < 1 ? 1 : damage;

    cout << monster->getName() << "에게 메테오 공격으로 " << damage << "의 피해를 입혔다!\n";
    int newMonsterHP = monster->getHP() - damage;
    monster->setHP(newMonsterHP);

    if (newMonsterHP <= 0) {
        cout << "몬스터가 죽었습니다.! 플레이어 승리!\n";
        return;
    }

    cout << "몬스터 생존! 남은 체력: " << monster->getHP() << "\n";
}
