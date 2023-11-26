#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain constructed" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructed" << std::endl;
}

Brain::Brain(const Brain& other) {
    *this = other;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}
