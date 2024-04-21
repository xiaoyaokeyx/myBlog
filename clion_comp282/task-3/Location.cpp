#include "Location.h"

Location::Location() {}

Location::Location(std::string name, std::string description) : name(name), description(description) {}

void Location::setName(std::string newName) {
    name = newName;
}

std::string Location::getName() const {
    return name;
}

void Location::setDescription(std::string newDescription) {
    description = newDescription;
}

std::string Location::getDescription() const {
    return description;
}

void Location::addExit(char direction, const Location &exitLocation) {
    exits[direction] = exitLocation;
}

void Location::addMonster(const Monster &monster) {
    monsters.push_back(monster);
}

void Location::delMonster(const Monster &monster) {
    // Code to delete the specified monster
}

std::map<char, Location> &Location::getExits() {
    return exits;
}

void Location::addItem(const Potion &potion) {
    potions.push_back(potion);
}

void Location::addItem(const Weapon &weapon) {
    weapons.push_back(weapon);
}

void Location::addItem(const Treasure &treasure) {
    treasures.push_back(treasure);
}
