#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal {
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
        ~Cat();

        void makeSound() const;
        std::string getIdea(unsigned int nb) const;
};

#endif