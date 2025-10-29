#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "MateriaSource: Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "MateriaSource: Parameterized constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
	std::cout << "MateriaSource: Copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			inventory[i] = copy.inventory[i]->clone();
		}
	}
	std::cout << "MateriaSource: Copy assignment operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "MateriaSource: Destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m)
	{
		int index = 0;
		while (index < 4 && inventory[index])
			index++;
		if (index < 4)
		{
			inventory[index] = m;
			std::cout << "Materia " << m->getType() << " is acknowledged in inventory " << index << std::endl;
		}
		else
			std::cout << "All _inventorys are equipped" << std::endl;
	}
	else
		std::cout << "Invalid Materia" << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] && inventory[i]->getType() == type)
		{
			std::cout << "Materia " << type << " is created" << std::endl;
			return inventory[i]->clone();
		}
	}
	std::cout << "Materia " << type << " cannot be created, not a learned Materia" << std::endl;
	return NULL;
}
