#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat is created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	this->type = other.type;
	std::cout << "WrongCat copy is created" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		WrongCat::operator=(other);
	std::cout << "WrongAnimel operator assignment is created" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat is making Meow, Meow!!!" << std::endl;
}
