#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int	main( void )
{
	std::cout << YELLOW << "Subject test:" << RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;

	std::cout << YELLOW <<  "Deep copy tests:" << RESET << std::endl;
	const Cat *fuffi = new Cat();
	Cat fuffi_copy(*fuffi);
	Cat another_cat;
	another_cat = fuffi_copy;
	std::cout << "Fuffi type is " << fuffi->getType() << std::endl;
	std::cout << "Fuffi copy type: " << fuffi_copy.getType() << std::endl;
    std::cout << "Another cat type: " << another_cat.getType() << std::endl;
	delete fuffi;
	Dog fido;
	Dog tmp = fido;
	std::cout << "Fido's idea: " << fido.getIdea(12) << std::endl;
	std::cout << "Fido's idea: " << fido.getIdea(13) << std::endl;
	std::cout << "Fido's idea: " << fido.getIdea(102) << std::endl;

	std::cout << std::endl;

	std::cout << YELLOW << "Animal array tests:" << RESET << std::endl;
	Animal const *array[6];

	for (int i = 0; i < 3; i++)
		array[i] = new Dog();
	for (int i = 3; i < 6; i++)
		array[i] = new Cat();
	for (int i = 0; i < 6; i++)
		array[i]->makeSound();
	for (int i = 0; i < 6; i++)
		std::cout << array[i]->getType() << std::endl;
	for (int i = 0; i < 6; i++)
		delete array[i];

	std::cout << std::endl;
	return (0);
}
