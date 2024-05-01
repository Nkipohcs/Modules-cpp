#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " is constructed." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " is destructed." << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (energyPoints > 0 && hitPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!"
                  << std::endl;
        energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > amount) {
        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " took " << amount << " points of damage!"
                  << std::endl;
    } else {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " is out of hit points and can't be damaged further!"
                  << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " repaired itself for " << amount << " points!"
                  << std::endl;
        energyPoints--;
    }
}
