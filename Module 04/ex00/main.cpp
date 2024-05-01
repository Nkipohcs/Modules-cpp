#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
/*
int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    return 0;
}*/

int main() {
    // Test de la classe Animal
    Animal* animal = new Animal();
    std::cout << "Animal type: " << animal->getType() << std::endl;
    animal->makeSound();
    delete animal;

    // Test de la classe Cat
    Animal* cat = new Cat();
    std::cout << "Cat type: " << cat->getType() << std::endl;
    cat->makeSound();
    delete cat;

    // Test de la classe Dog
    Animal* dog = new Dog();
    std::cout << "Dog type: " << dog->getType() << std::endl;
    dog->makeSound();
    delete dog;

    // Test de la classe WrongAnimal
    WrongAnimal* wrongAnimal = new WrongAnimal();
    std::cout << "WrongAnimal type: " << wrongAnimal->getType() << std::endl;
    wrongAnimal->makeSound();
    delete wrongAnimal;

    // Test de la classe WrongCat
    WrongAnimal* wrongCat = new WrongCat();
    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;
    wrongCat->makeSound();
    delete wrongCat;

    return 0;
}
