#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Cat operator constructor called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const

{
	std::cout << "Meow, meow!!!" << std::endl;
}

std::string Cat::getIdea(int index) const
{
	return this->brain->getIdea(index);
}

void Cat::setIdea(std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}
