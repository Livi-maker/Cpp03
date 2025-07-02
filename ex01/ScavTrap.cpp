#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(), _name(name)
{
	_hitpoints = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap " << name << " was created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& old)
{
	*this = old;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " died." << std::endl;
}

ScavTrap&   ScavTrap::operator = (const ScavTrap& old)
{
	ScavTrap    newOne(old._name);
	ScavTrap*	pointer = &newOne;

	newOne._hitpoints = old._hitpoints;
	newOne._energy = old._energy;
	newOne._damage = old._damage;
	return (*pointer);
}

void    ScavTrap::attack(const std::string& target)
{
	if (_hitpoints < 1 || _energy < 1)
	{
		std::cout << "ScavTrap " << _name << " has not enough hitpoints or energy points left to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	_energy -= 1;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " was attacked and lost " << amount << " hitpoints" << std::endl;
	this->_hitpoints -= amount;
	if (_hitpoints <= 0)
		std::cout << "ScavTrap " << this->_name << " has no hitpoints left" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints < 1 || this->_energy < 1)
	{
		std::cout << "ScavTrap " << _name << " has not enough hitpoints or energy points left to be repaired" << std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "ScavTrap " << this->_name << " gained " << amount << " hitpoints." << std::endl;
	_hitpoints += amount;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
