#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure: Default constructor called" << std::endl;
}

Cure::Cure(std::string const &type) :type(type)
{
	std::cout << "Cure: Parameterized constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
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

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
