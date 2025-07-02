#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_hitpoints = 10;
	_energy = 10;
	_damage = 0;
	std::cout << "ClapTrap was created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	_hitpoints = 10;
	_energy = 10;
	_damage = 0;
	std::cout << "ClapTrap " << _name << " was created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old)
{
	*this = old;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " died." << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& old)
{
	this->_hitpoints = old._hitpoints;
	this->_energy = old._energy;
	this->_damage = old._damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitpoints < 1 || _energy < 1)
	{
		std::cout << _name << " has not enough hitpoints or energy points" << std::endl;
		return ;
	}

	std::cout << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	_energy -= 1;
}

void	ClapTrap::takeDamage(int amount)
{
	std::cout << this->_name << " was attacked and lost " << amount << " hitpoints" << std::endl;
	this->_hitpoints -= amount;
}

void	ClapTrap::beRepaired(int amount)
{
	if (_hitpoints < 1 || _energy < 1)
	{
		std::cout << _name << " has not enough hitpoints or energy points left to be repaired" << std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << this->_name << " gained " << amount << " hitpoints." << std::endl;
	_hitpoints += amount;
}

