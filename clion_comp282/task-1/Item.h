#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;

public:
    Item(std::string name);
    void setName(std::string newName);
    std::string getName() const;
};

class Potion : public Item {
private:
    int strength;

public:
    Potion(std::string name, int strength);
    void setStrength(int newStrength);
    int getStrength() const;
};

class Weapon : public Item {
private:
    int power;

public:
    Weapon(std::string name, int power);
    void setPower(int newPower);
    int getPower() const;
};

class Treasure : public Item {
private:
    int value;

public:
    Treasure(std::string name, int value);
    void setValue(int newValue);
    int getValue() const;
};

#endif
