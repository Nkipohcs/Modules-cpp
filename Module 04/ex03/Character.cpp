#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character() : name("Unnamed") {
    for (int i = 0; i < maxInventorySize; ++i) {
        inventory[i] = 0;
    }
}

Character::Character(std::string name) : name(name) {
    for (int i = 0; i < maxInventorySize; ++i) {
        inventory[i] = 0;
    }
}

Character::Character(const Character& other) : name(other.name) {
    for (int i = 0; i < maxInventorySize; ++i) {
        inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : 0;
    }
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < maxInventorySize; ++i) {
            if (inventory[i]) {
                delete inventory[i];
            }
            inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : 0;
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < maxInventorySize; ++i) {
        if (inventory[i]) {
            delete inventory[i];
        }
    }
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < maxInventorySize; ++i) {
        if (!inventory[i]) {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < maxInventorySize) {
        inventory[idx] = 0;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < maxInventorySize && inventory[idx]) {
        inventory[idx]->use(target);
    }
}
