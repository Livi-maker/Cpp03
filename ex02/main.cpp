#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int	main()
{
	ClapTrap	robot("claptrap");
	ScavTrap	scavtrap("scavtrap");

	robot.attack("42");
	robot.takeDamage(5);
	robot.beRepaired(5);

	scavtrap.attack("Liv");
	scavtrap.takeDamage(120);
	scavtrap.beRepaired(15);
	scavtrap.guardGate();

	FlagTrap	another("flagtrap");

	another.attack("Luiss");
	another.takeDamage(50);
	another.beRepaired(2);
	another.takeDamage(50);
	another.attack("boh");
	another.highFivesGuys();
}
