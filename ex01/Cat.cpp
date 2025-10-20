#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat operator constructor called" << std::endl;
	if (this != &other)
	{
		//TODO all operators
		Animal::operator=(source);
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
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
