#include "Brain.hpp"

Brain::Brain() {
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0)
            this->ideas[i] = "I'd like to be petted...";
        else
            this->ideas[i] = "I'd like to be fed...";
    }
}

Brain::Brain(const Brain &brain) {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
}

Brain &Brain::operator=(const Brain &brain) {
    if (this != &brain) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
}

std::string Brain::getIdea(int index) const {
    if (index <= 100)
        return this->ideas[index];
    else
     return "invalid index!";
}

void Brain::setIdea(int index, std::string idea) {
    this->ideas[index] = idea;
}


