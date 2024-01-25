#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap() : ClapTrap("Scav") , _guard(false)
{
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) , _guard(false)
{
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "\e[0;33mName Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of ScavTrap\e[0m" << std::endl;
	if (this != &copy)
		*this = copy;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}

// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	_guard = assign._guard;
	return *this;
}

// Member functions
void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy!" << std::endl;
		return ;
	}
	if (this->_hitpoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
	if (this->_energy > 0)
		this->_energy--;
}

void	ScavTrap::guardGate()
{
	if (this->_guard == false)
	{
		std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode." << std::endl;
		this->_guard = true;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " has exit from Gate keeper mode." << std::endl;
		this->_guard = false;
	}
}