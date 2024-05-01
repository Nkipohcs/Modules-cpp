#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

public:
    DiamondTrap(std::string name);
    virtual ~DiamondTrap();

    void attack(const std::string &target);
    void whoAmI();

    using ScavTrap::guardGate;
    using FragTrap::highFivesGuys;
};

#endif
