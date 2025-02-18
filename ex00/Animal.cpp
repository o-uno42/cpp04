#include "Animal.hpp"

Animal::Animal() : type() {
    std::cout << "--- Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << "--- Animal's type (" << type << ") constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "--- Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
    if (this != &animal) {
        this->type = animal.type;
    }
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "Mh?" << std::endl;
}

