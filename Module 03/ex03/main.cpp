#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamondtrap("DI4M-TP");

    diamondtrap.attack("enemy");
    diamondtrap.takeDamage(30);
    diamondtrap.beRepaired(20);
    diamondtrap.guardGate();
    diamondtrap.highFivesGuys();
    diamondtrap.whoAmI();

    return 0;
}
