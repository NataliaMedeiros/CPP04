#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called (deep)" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Dog operator constructor called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
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
