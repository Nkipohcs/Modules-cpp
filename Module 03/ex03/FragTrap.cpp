#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " is constructed." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " is destructed." << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << name << " requests a high five!" << std::endl;
}
