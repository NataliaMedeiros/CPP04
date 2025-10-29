#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(std::string const &type)
{
	std::cout << "Cure: Parameterized constructor called" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
	std::cout << "Cure: Copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this != &copy)
		type = copy.type;
	std::cout << "Cure: Copy assignment operator called" << std::endl;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure: Destructor called" << std::endl;
}

Cure* Cure::clone() const
{
	std::cout << "Cure: Clone function called" << std::endl;
	return new Cure(*this);
}
