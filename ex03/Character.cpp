#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character parametrized constructor called" << std::endl;
}

Character::Character(const Character &copy)
{
	*this = copy;
	std::cout << "Character: Copy constructor called" << std::endl;
}

/*
	This is a deep copy. If there an ond Invetory it is deleted to prevent leaks.
	The invetory is copied by a clone, because AMateria is an abstract class and
		you can’t just new Materia(*copy._inventory[i]) because you don’t know
		the actual derived type.
*/
Character &Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		name = copy.name;
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
			delete inventory[i];
			inventory[i] = copy.inventory[i]->clone();
		}
	}
	std::cout << "Character: Copy assignment operator called" << std::endl;
	return *this;
}

/* In this case the destructur must delete all invetory to prevent leak s*/
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "Character: Destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		int index = 0;
		while (index < 4 && inventory[index])
			index++;
		if (index < 4)
		{
			inventory[index] = m;
			std::cout << "Materia " << m->getType() << " equipped in inventory " << index << std::endl;
		}
		else
			std::cout << "All inventorys are equipped" << std::endl;
	}
	else
		std::cout << "Invalid Materia" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (inventory[idx])
		{
			inventory[idx] = nullptr;
			std::cout << "Slot " << idx << " unequipped" << std::endl;
		}
		else
			std::cout << "Slot " << idx << " is already empty" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
	else
		std::cout << "Invalid index or empty slot" << std::endl;
}
