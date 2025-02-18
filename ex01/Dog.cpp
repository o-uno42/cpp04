#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "--- Dog constructor called" << std::endl;
    _brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal(dog) {
    std::cout << "--- Dog copy constructor called" << std::endl;
    _brain = new Brain(*dog._brain);
}

Dog &Dog::operator=(const Dog &dog) {
    std::cout << "--- Dog assignment operator constructor called" << std::endl;
    if (this != &dog) {
        Animal::operator=(dog);
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
    if (nb <= 100)
        return _brain->getIdea(nb);
    else
        return "invalid index!";
}
