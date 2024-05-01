#include "ScavTrap.hpp"

int main() {
    ScavTrap scavtrap("SC4V-TP");

    scavtrap.attack("enemy");
    scavtrap.takeDamage(30);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    return 0;
}
