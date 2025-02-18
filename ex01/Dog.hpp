#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);
        ~Dog();

        void makeSound() const;
        std::string getIdea(unsigned int nb) const;
};

#endif