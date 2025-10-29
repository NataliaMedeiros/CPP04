#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
	std::cout << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria: Parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria: Copy constructor called" << std::endl;
	this->type = copy.type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	std::cout << "AMateria: Copy assignment operator called" << std::endl;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria: Destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return type;
}

AMateria* AMateria::clone() const
{
	std::cout << "AMateria: Clone function called" << std::endl;
	return NULL;
}

void AMateria::use(ICharacter& target)
{
	if (target.getName() == "")
	{
		std::cout << "AMateria: Use function called" << std::endl;
		std::cout << "Invalid target" << std::endl;
		return ;
	}
	if (type == "ice")
		std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (type == "cure")
		std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}
