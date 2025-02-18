#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "--- WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal("WrongCat") {
    *this = wrongCat;
    std::cout << "--- WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
    if (this != &wrongCat) {
        std::cout << "--- WrongCat operator= called" << std::endl;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "--- WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow meow!" << std::endl;
}
