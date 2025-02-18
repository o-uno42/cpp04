#include "Animal.hpp"

AAnimal::AAnimal() : type() {
    std::cout << "--- Animal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type) {
    std::cout << "--- Animal's type (" << type << ") constructor called" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "--- Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) {
    *this = animal;
}

AAnimal &AAnimal::operator=(const AAnimal &animal) {
    if (this != &animal) {
        this->type = animal.type;
    }
    return *this;
}

std::string AAnimal::getType() const {
    return this->type;
}

void AAnimal::makeSound() const {
    std::cout << "Mh?" << std::endl;
}

