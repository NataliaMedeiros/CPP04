#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string type = "ice";
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		~Ice();

		Ice* clone() const override;
};

#endif
