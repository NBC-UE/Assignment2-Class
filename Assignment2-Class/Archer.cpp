#include "Archer.h"
#include "Monster.h"
#include <iostream>

Archer::Archer(const string& nickname)
    :Player(nickname)
{
    job_name = "궁수";
    HP = 140;
    MP = 150;
    power = 18;
    defence = 11;
    accuracy = 30;
    speed = 22;
}

void Archer::attack()
{
    cout << "원거리 활 공격!!! 슝슝슝슝!!\n";
}

void Archer::attack(Monster* monster)
{
    if (monster == nullptr)
        return;
    int damage = getPower() - monster->getDefence();
    damage = damage < 1 ? 1 : damage;

    static const int damageCount = 3;
    const int archerDamage = damage / damageCount;
    for (int i = 0; i < damageCount; i++) {
        cout << monster->getName() << "에게 화살로 " << archerDamage << "의 피해를 입혔다!\n";
        int newMonsterHP = monster->getHP() - archerDamage;
        monster->setHP(newMonsterHP);

        if (newMonsterHP <= 0) {
            cout << "몬스터가 죽었습니다.! 플레이어 승리!\n";
            return;
        }
    }

    cout << "몬스터 생존! 남은 체력: " << monster->getHP() << "\n";
}

