#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

/*
	This is ICHaracter interfaces
	It’s a pure abstract class (interface).
	Every method is virtual and = 0, meaning subclasses must implement them.
	It has a virtual destructor, so deleting through a base pointer works correctly:
*/
#endif
