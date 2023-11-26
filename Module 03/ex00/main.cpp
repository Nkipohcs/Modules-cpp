#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TP");

    claptrap.attack("enemy");
    claptrap.takeDamage(8);
    claptrap.beRepaired(5);

    return 0;
}
