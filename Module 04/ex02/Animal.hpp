#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    virtual void makeSound() const = 0; // Pure Virtual Function
    std::string getType() const;
};

#endif
