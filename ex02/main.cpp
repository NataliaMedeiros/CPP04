#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "**Create new Dog**" << std::endl;
	const Animal* dog = new Dog();
	std::cout << std::endl;

	std::cout << "**Create new Cat**" << std::endl;
	const Animal* cat = new Cat();
	std::cout << std::endl;

	std::cout << "**Create WrongAnimal**" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << std::endl;

	std::cout << "**Create WrongCat**" << std::endl;
	const WrongCat* wrongCat = new WrongCat();
	std::cout << std::endl;

	std::cout << "**Get Types**" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "**Cat makeSound**" << std::endl;
	cat->makeSound(); //will output the cat sound!
	std::cout << std::endl;

	std::cout << "**Dog makeSound**" << std::endl;
	dog->makeSound();
	std::cout << std::endl;

	std::cout << "**WrongAnimal makeSound**" << std::endl;
	wrongAnimal->makeSound();
	std::cout << std::endl;

	std::cout << "**WrongCat makeSound**" << std::endl;
	wrongCat->makeSound();
	std::cout << std::endl;

	std::cout << "**Delete Cat**" << std::endl;
	delete cat;
	std::cout << std::endl;

	std::cout << "**Delete Dog**" << std::endl;
	delete dog;
	std::cout << std::endl;

	std::cout << "**Delete WrongAnimal**" << std::endl;
	delete wrongAnimal;
	std::cout << std::endl;

	std::cout << "**Delete WrongCat**" << std::endl;
	delete wrongCat;
	std::cout << std::endl;

	// std::cout << "\n--------------------------------\n" << std::endl;

	// Animal* animals[10];
	// for (int i = 0; i < 10; ++i)
	// {
	// 	if (i < 5)
	// 	{
	// 		std::cout << i << " - ";
	// 		animals[i] = new Dog();
	// 	}
	// 	else
	// 	{
	// 		std::cout << i << " - ";
	// 		animals[i] = new Cat();
	// 	}
	// }

	// for (int i = 0; i < 10; ++i)
	// {
	// 	std::cout << i << " - ";
	// 	delete animals[i];
	// }

	// std::cout << "\n-----Deep Copy------" << std::endl;
	// Dog Dog1;
	// Dog1.setIdea("I am a Dog", 0);

	// Dog copiedDog(Dog1);
	// copiedDog.setIdea("I want to play", 0);

	// std::cout << "Original Dog's first idea: '" << Dog1.getIdea(0) << "'" << std::endl;
	// std::cout << "Copied Dog's first idea: '" << copiedDog.getIdea(0) << "'" << std::endl;

	// std::cout << "\n-----Assignment Operator------" << std::endl;
	// Cat cat1;
	// cat1.setIdea("I am hungry!", 1);

	// Cat cat2;
	// cat2 = cat1;
	// cat2.setIdea("I want milk!", 1);

	// std::cout << "Cat1's second idea: " << cat1.getIdea(1) << std::endl;
	// std::cout << "Cat2's second idea: " << cat2.getIdea(1) << std::endl;

	return 0;
}
