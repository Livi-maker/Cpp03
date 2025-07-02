#include "FlagTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FlagTrap()
{
	_hitpoints = FlagTrap::_hitpoints;
	_energy = ScavTrap::_energy;
	_damage = FlagTrap::_damage;

	std::cout << "DiamondTrap " << _name << " was created!" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FlagTrap(name)
{
	_name = name;
	_hitpoints = FlagTrap::_hitpoints;
	_energy = ScavTrap::_energy;
	_damage = FlagTrap::_damage;

	std::cout << "DiamondTrap " << name << " was created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& old) : ClapTrap(old), ScavTrap(old), FlagTrap(old)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " died." << std::endl;
}

DiamondTrap&   DiamondTrap::operator = (const DiamondTrap& old)
{
	this->_hitpoints = old._hitpoints;
	this->_energy = old._energy;
	this->_damage = old._damage;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	std::cout << "Diamond name: " << _name << std::endl;
}
