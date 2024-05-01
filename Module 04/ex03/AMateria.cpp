#include "AMateria.hpp"
#include "ICharacter.hpp" // Incluez le fichier d'en-tête complet ici
#include <iostream>

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target) {
    std::cout << "Using materia on " << target.getName() << std::endl;
}
