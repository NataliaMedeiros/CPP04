#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType(void) const;
};

#endif

/*
Making the destructor virtual make sure that if I delete this object
through a base pointer, make sure you also call the derived destructor first.

The keyword const after the function means:
This member function does not modify the object’s internal state.*/
