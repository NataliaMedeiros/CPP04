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

		virtual void makeSound() const = 0; //pure virtual function
		std::string getType(void) const;
};

#endif

/* Abstract Class
	An abstract class in C++ is a class that cannot be instantiated directly.
	To make a class abstract, you declare at least one pure virtual function.
	For example: virtual void makeSound() const = 0;
	This function has no default implementation in this class — derived classes must override it.
*/


/*
Making the destructor virtual make sure that if I delete this object
through a base pointer, make sure you also call the derived destructor first.

The keyword const after the function means:
This member function does not modify the object’s internal state.*/
