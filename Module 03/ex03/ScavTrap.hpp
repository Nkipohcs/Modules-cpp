#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(std::string name);
    virtual ~ScavTrap();

    void attack(const std::string &target); // Assurez-vous que cette ligne est présente
    void guardGate();
};

#endif
