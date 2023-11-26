#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animal est maintenant une classe abstraite et ne peut pas être instanciée
    // const Animal* meta = new Animal(); // Supprimez ou commentez cette ligne

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound(); // will output the dog sound!

    delete i; // Correctly deletes a Cat
    delete j; // Correctly deletes a Dog

    return 0;
}
