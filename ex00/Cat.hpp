#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat :Animal
{
	public:
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		~Cat();

		void makeSound();
};

#endif
