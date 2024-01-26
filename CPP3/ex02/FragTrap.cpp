/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:52:27 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/26 13:56:18 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap()
{
	this->_name = "Default";
	this->_attack = 30;
	this->_energy = 100;
	this->_hitpoints = 100;
	std::cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_attack = 30;
	this->_energy = 100;
	this->_hitpoints = 100;
	std::cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of FragTrap\e[0m" << std::endl;
	if (this != &copy)
		*this = copy;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called of FragTrap\e[0m" << std::endl;
}


// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	this->_name = assign._name;
	this->_attack = assign._attack;
	this->_energy = assign._energy;
	this->_hitpoints = assign._hitpoints;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\e[0;32mFragTrap " << this->_name << " is asking for high fives!\e[0m" << std::endl;
}