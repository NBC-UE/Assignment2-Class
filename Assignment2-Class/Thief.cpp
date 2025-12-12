#include "Thief.h"
#include "Monster.h"
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

void Thief::attack(Monster* monster)
{
    if (monster == nullptr)
        return;
    int damage = getPower() - monster->getDefence();
    damage = damage < 1 ? 1 : damage;

    static const int damageCount = 5;
    const int thiefDamage = damage / damageCount;
    for (int i = 0; i < damageCount; i++) {
        cout << monster->getName() << "에게 단검 공격으로 " << thiefDamage << "의 피해를 입혔다!\n";
        int newMonsterHP = monster->getHP() - thiefDamage;
        monster->setHP(newMonsterHP);

        if (newMonsterHP <= 0) {
            cout << "몬스터가 죽었습니다.! 플레이어 승리!\n";
            return;
        }
    }

    cout << "몬스터 생존! 남은 체력: " << monster->getHP() << "\n";
}
