#include <iostream>
#include "Location.h"
#include "Character.h"

void DescribeLocation(Player &player) {
    // Function to describe the current location
    //std::cout << "Your current location is: " << player.getCurrentLocation()->getName() << std::endl;
}

void DescribeExits(Player &player) {
    // Function to describe the available exits
    std::cout << "Available exits: ";
    //player.getCurrentLocation()->getExits();
}

int main() {
    std::cout << "Locations have been created." << std::endl;
}
