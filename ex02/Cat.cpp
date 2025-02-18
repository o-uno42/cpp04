#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
    std::cout << "--- Cat constructor called" << std::endl;
    _brain = new Brain();
}

Cat::Cat(const Cat &cat) : AAnimal(cat) {
    std::cout << "--- Cat copy constructor called" << std::endl;
    _brain = new Brain(*cat._brain);
}

Cat &Cat::operator=(const Cat &cat) {
    if (this != &cat) {
        AAnimal::operator=(cat);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "--- Cat destructor called" << std::endl;
    delete _brain;
}

void Cat::makeSound() const {
    std::cout << "Meow meow!" << std::endl;
}

std::string Cat::getIdea(unsigned int nb) const {
    return _brain->getIdea(nb);
}
