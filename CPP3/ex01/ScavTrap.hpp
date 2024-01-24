#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include <string>

class ScavTrap: public ClapTrap
{
	public:
		// Constructors
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		// Destructor
		~ScavTrap();
		// Operators
		ScavTrap & operator=(const ScavTrap &assign);
		void	guardGate();
	private:
		bool		_guard;
};

#endif