#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	robot("Liv");
	ClapTrap	another("robot");

	robot.attack("42");
	robot.takeDamage(42);
	robot.beRepaired(10);

	another = robot;
}
