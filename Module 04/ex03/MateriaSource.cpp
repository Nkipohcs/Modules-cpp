#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
    for (int i = 0; i < maxMateria; ++i) {
        learnedMaterias[i] = 0;  // Remplacez nullptr par 0
    }
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < maxMateria; ++i) {
        if (other.learnedMaterias[i]) {
            learnedMaterias[i] = other.learnedMaterias[i]->clone();
        } else {
            learnedMaterias[i] = 0;
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < maxMateria; ++i) {
            if (learnedMaterias[i]) {
                delete learnedMaterias[i];
            }
            learnedMaterias[i] = other.learnedMaterias[i] ? other.learnedMaterias[i]->clone() : 0;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < maxMateria; ++i) {
        if (learnedMaterias[i]) {
            delete learnedMaterias[i];
        }
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < maxMateria; ++i) {
        if (!learnedMaterias[i]) {
            learnedMaterias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < maxMateria; ++i) {
        if (learnedMaterias[i] && learnedMaterias[i]->getType() == type) {
            return learnedMaterias[i]->clone();
        }
    }
    return 0;
}
