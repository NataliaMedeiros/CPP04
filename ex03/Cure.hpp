#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string type = "cure";
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		~Cure();

		Cure* clone() const override;
};

#endif
