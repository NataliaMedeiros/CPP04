#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		~Cat();

		void makeSound() const override;
		std::string getIdea(int index) const;
		void setIdea(std::string idea, int index);
};

#endif
