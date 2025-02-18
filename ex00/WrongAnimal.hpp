#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &wrongAnimal);
        WrongAnimal &operator=(const WrongAnimal &wrongAnimal);

        std::string getType() const;
        void makeSound() const;
};

#endif