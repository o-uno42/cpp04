#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << "Cat sound:" << std::endl;
    i->makeSound(); //will output the cat sound!
    std::cout << "Dog sound:" << std::endl;
    j->makeSound();
    std::cout << "Animal sound:" << std::endl;
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << wrongI->getType() << " " << std::endl;
    std::cout << "Wrong Animal sound:" << std::endl;
    wrongAnimal->makeSound();
    std::cout << "Wrong Cat sound (which should be the sound of Wrong Animal):" << std::endl;
    wrongI->makeSound();

    delete wrongAnimal;
    delete wrongI;

    return 0;
}