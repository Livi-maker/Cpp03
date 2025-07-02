#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include <iostream>

class DiamondTrap : virtual public ScavTrap, virtual public FlagTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& old);
		DiamondTrap& operator = (const DiamondTrap& old);
		~DiamondTrap(void);
		using ScavTrap::attack;
		void	whoAmI(void) const;

	private:
		std::string	_name;
};

#endif