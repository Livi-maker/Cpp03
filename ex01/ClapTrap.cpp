#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitpoints = 10;
	_energy = 10;
	_damage = 0;
	std::cout << "ClapTrap " << name << " was created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
	*this = old;
	std::cout << " ClapTrap Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " died." << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& old)
{
	ClapTrap	New(old._name);
	ClapTrap*	pointer = &New;

	New._hitpoints = old._hitpoints;
	New._energy = old._energy;
	New._damage = old._damage;
	return (*pointer);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitpoints < 1 || _energy < 1)
	{
		std::cout << "ClapTrap " << _name << " has not enough hitpoints or energy points" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	_energy -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " was attacked and lost " << amount << " hitpoints" << std::endl;
	this->_hitpoints -= amount;
	if (_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no hitpoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints < 1 || _energy < 1)
	{
		std::cout << "ClapTrap " << _name << " has not enough hitpoints or energy points left" << std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "ClapTrap " << this->_name << " gained " << amount << " hitpoints." << std::endl;
	_hitpoints += amount;
}

