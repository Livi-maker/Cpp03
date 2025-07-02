#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include <string.h>
# include <cmath>
# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap(std::string name);
		FlagTrap(const FlagTrap& old);
		FlagTrap& operator = (const FlagTrap& old);
		~FlagTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(int amount);
		void	beRepaired(int amount);
		void	highFivesGuys(void) const;
};

#endif
