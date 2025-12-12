#include "Monster.h"
#include "player.h"
#include <iostream>

Monster::Monster(string name)
	:name(name),
	HP(10), power(30), defence(10), speed(10)
{
}

void Monster::attack(Player* player)
{
	if (player == nullptr)
		return;

	int damage = power - player->getDefence();
	damage = damage < 1 ? 1 : damage;

	const int newPlayerHP = player->getHP() - damage;
	cout << "몬스터가 공격했습니다.! 데미지: " << damage << "\n";
	player->setHP(newPlayerHP);

	if (newPlayerHP <= 0) {
		cout << "플레이어가 죽었습니다.\n";
	}
	else {
		cout << "PlayerHP: " << newPlayerHP << "\n";
	}
}

string Monster::getName()
{
	return name;
}

int Monster::getHP()
{
	return HP;
}

int Monster::getPower()
{
	return power;
}

int Monster::getDefence()
{
	return defence;
}

int Monster::getSpeed()
{
	return speed;
}

void Monster::setName(string name)
{
	this->name = name;
}

void Monster::setHP(int HP)
{
	this->HP = HP;
}

void Monster::setPower(int power)
{
	this->power = power;
}

void Monster::setDefence(int defence)
{
	this->defence = defence;
}

void Monster::setSpeed(int speed)
{
	this->speed = speed;
}



