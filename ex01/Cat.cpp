#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "--- Cat constructor called" << std::endl;
    _brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal(cat) {
    std::cout << "--- Cat copy constructor called" << std::endl;
    _brain = new Brain(*cat._brain);
}

Cat &Cat::operator=(const Cat &cat) {
    std::cout << "--- Cat assignment operator constructor called" << std::endl;
    if (this != &cat) {
        Animal::operator=(cat);
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
    if (nb <= 100)
        return _brain->getIdea(nb);
    else
        return "invalid index!";
}
