#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	testUnknownMateria()
{
	std::cout << "----Test Unknown Materia----" << std::endl;
	IMateriaSource* src = new MateriaSource();
	AMateria* unknown = src->createMateria("fire");
	if (!unknown)
		std::cout << "Unknown Materia type returned nullptr" << std::endl;
	delete src;
}

void	testInvalidEquip()
{
	std::cout << "----Test Invalid Equip----" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* testChar = new Character("tester");

	// Equip nullptr
	testChar->equip(nullptr); // Should print "Invalid Materia"

	delete src;
	delete testChar;
}

void	testOverflow()
{
	std::cout << "----Test Overflow----" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* testChar = new Character("tester");

	// Equip 5th materia
	AMateria* extra = src->createMateria("ice");
	testChar->equip(extra); // Equip 1
	testChar->equip(src->createMateria("cure")); // 2
	testChar->equip(src->createMateria("ice")); // 3
	testChar->equip(src->createMateria("cure")); // 4
	AMateria* overflow = src->createMateria("ice");
	testChar->equip(overflow); // Should print "All inventorys are equipped"

	delete src;

	delete testChar;
	delete overflow;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	//other tests
	// testInvalidEquip();
	// testOverflow();
	// testUnknownMateria();

	return 0;
}
