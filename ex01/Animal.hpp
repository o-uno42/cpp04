#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#define YELLOW "\x1b[33m"
#define RESET  "\x1b[0m"

class Animal {
    protected:
        std::string type;
    
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(const Animal &animal);
        Animal &operator=(const Animal &animal);

        virtual std::string getType() const;
        virtual void makeSound() const;
};

#endif