#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name) {
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " is constructed." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " is destructed." << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << name << " and my ClapTrap name is " << ClapTrap::name << "." << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target); // Utiliser l'implémentation de ScavTrap ou de FragTrap
}
