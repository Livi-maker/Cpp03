#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap	robot("Liv");
	ScavTrap	scavtrap("Luiss");

	robot.attack("42");
	robot.takeDamage(5);
	robot.beRepaired(5);
	std::cout << std::endl;

	scavtrap.attack("Liv");
	scavtrap.takeDamage(120);
	scavtrap.beRepaired(15);
	scavtrap.guardGate();
	std::cout << std::endl;

	FlagTrap	another("robot");

	another.attack("Luiss");
	another.takeDamage(50);
	another.beRepaired(2);
	another.takeDamage(50);
	another.attack("boh");
	another.highFivesGuys();
	std::cout << std::endl;

	DiamondTrap	diamond("mixed");

	diamond.attack("you");
	diamond.takeDamage(7);
	diamond.beRepaired(5);
	diamond.whoAmI();
}
