#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	_energy = 100;
	_damage = 30;
	std::cout << "FlagTrap " << name << " was created!" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& old) : ClapTrap(old)
{
	std::cout << "FlagTrap copy constructor called" << std::endl;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "FlagTrap " << _name << " died." << std::endl;
}

FlagTrap&   FlagTrap::operator = (const FlagTrap& old)
{
	this->_hitpoints = old._hitpoints;
	this->_energy = old._energy;
	this->_damage = old._damage;
	return (*this);
}

void    FlagTrap::attack(const std::string& target)
{
	if (_hitpoints < 1 || _energy < 1)
	{
		std::cout << "FlagTrap " << _name << " has not enough hitpoints or energy points left to attack" << std::endl;
		return ;
	}
	std::cout << "FlagTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	_energy -= 1;
}

void    FlagTrap::takeDamage(int amount)
{
	std::cout << "FlagTrap " << this->_name << " was attacked and lost " << amount << " hitpoints" << std::endl;
	this->_hitpoints -= amount;
}

void    FlagTrap::beRepaired(int amount)
{
	if (this->_hitpoints < 1 || this->_energy < 1)
	{
		std::cout << "FlagTrap " << _name << " has not enough hitpoints or energy points left to be repaired" << std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "FlagTrap " << this->_name << " gained " << amount << " hitpoints." << std::endl;
	_hitpoints += amount;
}

void	FlagTrap::highFivesGuys(void) const
{
	std::cout << "Give me an high five!" << std::endl;
}
