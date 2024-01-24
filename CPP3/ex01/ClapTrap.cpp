/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:17:51 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/24 17:19:08 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() : _name("Clap") , _hitpoints(10), _energy(10), _attack(0)
{
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hitpoints(10), _energy(10), _attack(0)
{
	std::cout << "\e[0;33mName Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;
	if (this != &copy)
		*this = copy;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	this->_name = assign._name;
	this->_hitpoints = assign._hitpoints;
	this->_energy = assign._energy;
	this->_attack = assign._attack;
	std::cout << "\e[0;33mAssignation Operator called of ClapTrap\e[0m" << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy!" << std::endl;
		return ;
	}
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
	if (this->_energy > 0)
		this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if ((int)(this->_hitpoints - amount) <= 0)
		this->_hitpoints = 0;
	else
		this->_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired with " << amount << " points!" << std::endl;
	if (this->_hitpoints + amount < 10)
		this->_hitpoints += amount;
	else
		this->_hitpoints = 10;
	if (this->_energy > 0)
		this->_energy--;
}