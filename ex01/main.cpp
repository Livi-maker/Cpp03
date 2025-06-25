#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	robot("Liv");
	ScavTrap	scavtrap("Luiss");

	robot.attack("42");
	robot.takeDamage(5);
	robot.beRepaired(5);

	scavtrap.attack("Liv");
	scavtrap.takeDamage(120);
	scavtrap.beRepaired(15);
}
