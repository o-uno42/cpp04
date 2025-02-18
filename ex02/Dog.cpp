#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
    std::cout << "--- Dog constructor called" << std::endl;
    _brain = new Brain();
}

Dog::Dog(const Dog &dog) : AAnimal(dog) {
    std::cout << "--- Dog copy constructor called" << std::endl;
    _brain = new Brain(*dog._brain);
}

Dog &Dog::operator=(const Dog &dog) {
    if (this != &dog) {
        AAnimal::operator=(dog);
        delete _brain;
        _brain = new Brain(*dog._brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "--- Dog destructor called" << std::endl;
    delete _brain;
}

void Dog::makeSound() const {
    std::cout << "Bau bau" << std::endl;
}

std::string Dog::getIdea(unsigned int nb) const {
    return _brain->getIdea(nb);
}
