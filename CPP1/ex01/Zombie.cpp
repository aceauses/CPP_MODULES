/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:04:11 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/18 17:54:56 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name  << " died." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name  << ": BraiiiiiiinnnzzzZ." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}