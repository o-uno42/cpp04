#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "--- Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
    std::cout << "--- Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
    if (this != &dog) {
        Animal::operator=(dog);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "--- Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bau bau" << std::endl;
}
