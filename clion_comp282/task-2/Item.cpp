#include "Item.h"

// Item class methods
Item::Item(std::string name) : name(name) {}

void Item::setName(std::string newName) {
    name = newName;
}

std::string Item::getName() const {
    return name;
}

// Potion class methods
Potion::Potion(std::string name, int strength) : Item(name), strength(strength) {}

void Potion::setStrength(int newStrength) {
    strength = newStrength;
}

int Potion::getStrength() const {
    return strength;
}

// Weapon class methods
Weapon::Weapon(std::string name, int power) : Item(name), power(power) {}

void Weapon::setPower(int newPower) {
    power = newPower;
}

int Weapon::getPower() const {
    return power;
}

// Treasure class methods
Treasure::Treasure(std::string name, int value) : Item(name), value(value) {}

void Treasure::setValue(int newValue) {
    value = newValue;
}

int Treasure::getValue() const {
    return value;
}
