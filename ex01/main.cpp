#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	robot("Liv");

	robot.attack("42");
	robot.takeDamage(5);
	robot.beRepaired(5);
}
