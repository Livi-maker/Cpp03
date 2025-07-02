#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap " << name << " was created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& old) : ClapTrap(old)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " died." << std::endl;
}

ScavTrap&   ScavTrap::operator = (const ScavTrap& old)
{
	this->_hitpoints = old._hitpoints;
	this->_energy = old._energy;
	this->_damage = old._damage;
	return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
	if (_hitpoints < 1 || _energy < 1)
	{
		std::cout << "Ops... " << _name << " has not enough hitpoints or energy points left to attack" << std::endl;
		return ;
	}
	std::cout << "Let's go! " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	_energy -= 1;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
