#ifndef LOCATION_H
#define LOCATION_H

#include <string>
#include <vector>
#include <map>
#include "Item.h"

// Forward declaration
class Location;
class Monster;

class Location {
private:
    std::string name;
    std::string description;
    std::map<char, Location> exits;
    std::vector<Monster> monsters;
    std::vector<Weapon> weapons;
    std::vector<Potion> potions;
    std::vector<Treasure> treasures;

public:
    Location();
    Location(std::string name, std::string description);

    void setName(std::string newName);
    std::string getName() const;
    void setDescription(std::string newDescription);
    std::string getDescription() const;

    // Add an exit to the location
    void addExit(char direction, const Location& exitLocation);

    // Add a monster to the location
    void addMonster(const Monster& monster);

    // Delete a monster from the location
    void delMonster(const Monster& monster);

    // Display a list of exits to the player
    std::map<char, Location>& getExits();

    // Add an item to the location
    void addItem(const Potion& potion);
    void addItem(const Weapon& weapon);
    void addItem(const Treasure& treasure);
};

#endif
