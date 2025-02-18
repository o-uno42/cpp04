#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    public:
        Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &brain);
        virtual ~Brain();

        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea);

    private:
        std::string ideas[100];
};

#endif