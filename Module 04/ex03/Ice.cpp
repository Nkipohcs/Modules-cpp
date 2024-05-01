#include "Ice.hpp"
#include "ICharacter.hpp" // Ajoutez cette ligne
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &src) : AMateria(src) {}

Ice &Ice::operator=(const Ice &rhs) {
    if (this != &rhs) {
        AMateria::operator=(rhs);
    }
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
