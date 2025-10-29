#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice: Default constructor called" << std::endl;
}

Ice::Ice(std::string const &type) : type(type)
{
	std::cout << "Ice: Parameterized constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "Ice: Copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
	if (this != &copy)
		type = copy.type;
	std::cout << "Ice: Copy assignment operator called" << std::endl;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice: Destructor called" << std::endl;
}

Ice* Ice::clone() const
{
	std::cout << "Ice: Clone function called" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
