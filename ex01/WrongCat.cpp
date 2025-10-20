#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat is created" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat copy is created" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongAnimel operator assignment is created" << std::endl;
	if (this != &other)
	{
		WrongCat::operator=(other);
	}
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
