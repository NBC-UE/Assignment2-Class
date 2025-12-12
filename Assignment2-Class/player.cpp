#include "player.h"
#include <iostream>
using namespace std;

Player::Player(string inNickname) :
    nickname(inNickname),
    job_name("초보자"),
    level(1),
    HP(100), MP(100), power(10), defence(10),
    accuracy(10), speed(10)
{
}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}
string Player::getJobName() const
{
    return job_name;
}

string Player::getNickname() const
{
    return nickname;
}

int Player::getLevel() const
{
    return level;
}

int Player::getHP() const
{
    return HP;
}

int Player::getMP() const
{
    return MP;
}

int Player::getPower() const
{
    return power;
}

int Player::getDefence() const
{
    return defence;
}

int Player::getAccuracy() const
{
    return accuracy;
}

int Player::getSpeed() const
{
    return speed;
}

void Player::setNickname(string nickname)
{
    this->nickname = nickname;
}

void Player::setHP(int HP)
{
    this->HP = HP;
}

void Player::setMP(int MP)
{
    this->MP = MP;
}

void Player::setPower(int power)
{
    this->power = power;
}

void Player::setDefence(int defence)
{
    this->defence = defence;
}

void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
}

void Player::setSpeed(int speed)
{
    this->speed = speed;
}
