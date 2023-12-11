#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    // Création d'une instance de ScavTrap
    ScavTrap scav("SC4V-TP");

    // Test des fonctionnalités de base
    scav.attack("Enemy");         // ScavTrap attaque
    scav.takeDamage(25);          // ScavTrap subit des dégâts
    scav.beRepaired(15);          // ScavTrap se répare

    // Test de la fonctionnalité spécifique à ScavTrap
    scav.guardGate();             // ScavTrap active le mode gardien de la porte
    FragTrap fragtrap("FR4G-TP");

    fragtrap.attack("enemy");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();
    return 0;
}
/*

int main() {
    FragTrap fragtrap("FR4G-TP");

    fragtrap.attack("enemy");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();

    return 0;
}
*/