#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	robot("Liv");

	robot.attack("42");
	robot.takeDamage(42);
	robot.beRepaired(10);
}
