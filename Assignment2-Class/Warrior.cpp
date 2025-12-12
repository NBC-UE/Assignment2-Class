#include "Warrior.h"
#include "Monster.h"
#include <iostream>

Warrior::Warrior(const string& nickname)
	:Player(nickname)
{
    job_name = "전사";
    HP = 200;
    MP = 100;
    power = 22;
    defence = 18;
    accuracy = 10;
    speed = 9;
}

void Warrior::attack()
{
    cout << "칼 휘두르기 공격 슝슝슝슝!!!\n";
}

void Warrior::attack(Monster* monster)
{
    if (monster == nullptr)
        return;

    int damage = getPower() - monster->getDefence();
    damage = damage < 1 ? 1 : damage;

    cout << monster->getName() << "에게 대검 공격으로 " << damage << "의 피해를 입혔다!\n";
    int newMonsterHP = monster->getHP() - damage;
    monster->setHP(newMonsterHP);

    if (newMonsterHP <= 0) {
        cout << "몬스터가 죽었습니다.! 플레이어 승리!\n";
        return;
    }

    cout << "몬스터 생존! 남은 체력: " << monster->getHP() << "\n";
}
