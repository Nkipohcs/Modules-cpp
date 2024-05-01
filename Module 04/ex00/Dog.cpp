#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) { // Appel explicite au constructeur par copie de Animal
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other); // Appel à l'opérateur d'affectation de la classe de base
        // Autres affectations spécifiques à Dog, si nécessaire
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
