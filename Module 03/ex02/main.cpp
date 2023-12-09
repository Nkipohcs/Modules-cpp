#include "FragTrap.hpp"

int main() {
    FragTrap fragtrap("FR4G-TP");

    fragtrap.attack("enemy");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();

    return 0;
}
