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

void	FlagTrap::highFivesGuys(void) const
{
	std::cout << "Give me an high five!" << std::endl;
}
