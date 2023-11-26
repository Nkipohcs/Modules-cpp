#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) { // Appel explicite au constructeur par copie de Animal
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other); // Appel à l'opérateur d'affectation de la classe de base
        // Autres affectations spécifiques à Cat, si nécessaire
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
