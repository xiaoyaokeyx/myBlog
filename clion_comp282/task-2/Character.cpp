#include "Location.h"
#include "Character.h"

// Character class methods
Character::Character() {} // Monster 向前声明使用

Character::Character(std::string name, int hitPoints) : name(name), hitPoints(hitPoints) {}

void Character::setName(std::string newName) {
    name = newName;
}

std::string Character::getName() const {
    return name;
}

void Character::setHitPoints(int newHitPoints) {
    hitPoints = newHitPoints;
}

int Character::getHitPoints() const {
    return hitPoints;
}

// Monster class methods
Monster::Monster() { Character(); }

Monster::Monster(std::string name, int hitPoints) : Character(name, hitPoints) {}

// Player class methods
Player::Player() {
    Character();
    score = 0;
}

Player::Player(const std::string &name, int hitPoints) : Character(name, hitPoints), score(0) {}

int Player::getScore() const {
    return score;
}

void Player::setScore(int score) {
    this->score = score;
}

void Player::addWeapon(const Weapon &weapon) {
    weapons.push_back(weapon);
}

void Player::addPotion(const Potion &potion) {
    potions.push_back(potion);
}

void Player::addTreasure(const Treasure &treasure) {
    treasures.push_back(treasure);
}

std::vector<Weapon> Player::getWeapons() const {
    return weapons;
}

std::vector<Potion> Player::getPotions() const {
    return potions;
}

std::vector<Treasure> Player::getTreasures() const {
    return treasures;
}

void Player::setCurrentLocation(const Location &location) {
    currentLocation = location;
}

Location &Player::getCurrentLocation() {
    return currentLocation;
}
