#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other); 
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Meow!" << std::endl;
}
