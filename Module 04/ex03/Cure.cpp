#include "Cure.hpp"
#include "ICharacter.hpp" // Inclure le fichier d'en-tête ICharacter
#include <iostream>       // Inclure pour std::cout et std::endl

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &src) : AMateria(src) {}

Cure &Cure::operator=(const Cure &rhs) {
    if (this != &rhs) {
        AMateria::operator=(rhs);
    }
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
