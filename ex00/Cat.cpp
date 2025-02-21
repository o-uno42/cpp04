#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "--- Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
    std::cout << "--- Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    if (this != &cat) {
        Animal::operator=(cat);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "--- Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow meow!" << std::endl;
}
