#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include "Item.h"
#include "Location.h"

class Character {
private:
    std::string name;
    int hitPoints;

public:
    Character();
    Character(std::string name, int hitPoints);

    void setName(std::string newName);
    std::string getName() const;

    void setHitPoints(int newHitPoints);
    int getHitPoints() const;
};

class Monster : public Character {
private:
    Monster();
    Monster(std::string name, int hitPoints);
};

class Player : public Character {
private:
    int score;
    std::vector<Weapon> weapons;
    std::vector<Potion> potions;
    std::vector<Treasure> treasures;
    Location currentLocation;

public:
    Player(const std::string &name, int hitPoints);

    int getScore() const;
    void setScore(int score);

    void addWeapon(const Weapon& weapon);
    void addPotion(const Potion& potion);
    void addTreasure(const Treasure& treasure);

    std::vector<Weapon> getWeapons() const;
    std::vector<Potion> getPotions() const;
    std::vector<Treasure> getTreasures() const;

    void setCurrentLocation(const Location& location);
    const Location& getCurrentLocation() const;

};

#endif
