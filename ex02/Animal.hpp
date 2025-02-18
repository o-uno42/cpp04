#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>
#define YELLOW "\x1b[33m"
#define RESET  "\x1b[0m"

class AAnimal {
    protected:
        std::string type;
    
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();
        AAnimal(const AAnimal &animal);
        AAnimal &operator=(const AAnimal &animal);

        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif