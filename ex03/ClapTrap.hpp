#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string.h>
# include <cmath>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& old);
		ClapTrap& operator = (const ClapTrap& old);
		virtual ~ClapTrap(void);
		virtual void	attack(const std::string& target);
		void	takeDamage(int amount);
		void	beRepaired(int amount);

	protected:
		std::string		_name;
		int				_hitpoints;
		int				_energy;
		int				_damage;
};

#endif
