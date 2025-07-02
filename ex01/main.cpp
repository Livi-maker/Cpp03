#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	robot("Liv");
	ScavTrap	scavtrap("robot");

	robot.attack("42");
	robot.takeDamage(5);
	robot.beRepaired(5);

	scavtrap.attack("Liv");
	scavtrap.takeDamage(120);
	scavtrap.beRepaired(15);
	scavtrap.guardGate();

}
