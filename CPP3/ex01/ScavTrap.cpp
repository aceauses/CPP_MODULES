#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap() : ClapTrap("Scav") , _guard(false)
{
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) , _guard(false)
{
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
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