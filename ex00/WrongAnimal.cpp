#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type() {
    std::cout << "--- WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "--- WrongAnimal's type (" << type << ") constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "--- WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
    *this = wrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
    if (this != &wrongAnimal) {
        this->type = wrongAnimal.type;
    }
    return *this;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "Mh?" << std::endl;
}

