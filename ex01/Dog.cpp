#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called (deep)" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog operator constructor called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof, woof!!" << std::endl;
}

std::string Dog::getIdea(int index) const
{
	return this->brain->getIdea(index);
}

void Dog::setIdea(std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}
