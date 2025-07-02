#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string.h>
# include <cmath>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& old);
		ScavTrap& operator = (const ScavTrap& old);
		~ScavTrap(void);
		void    attack(const std::string& target);
		void    takeDamage(unsigned int amount);
		void    beRepaired(unsigned int amount);
		void	guardGate(void) const;

	private:
		std::string		_name;
		int				_hitpoints;
		int				_energy;
		int				_damage;
};

#endif
