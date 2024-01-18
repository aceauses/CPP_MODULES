/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:04:11 by aceauses          #+#    #+#             */
<<<<<<< HEAD:CPP1/ex00/Zombie.cpp
/*   Updated: 2024/01/18 16:44:21 by aceauses         ###   ########.fr       */
=======
/*   Updated: 2024/01/18 13:12:18 by aceauses         ###   ########.fr       */
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Zombie.cpp
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD:CPP1/ex00/Zombie.cpp
Zombie::Zombie(std::string name)
=======
Zombie::Zombie()
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Zombie.cpp
{
	this->_name = name;
}

Zombie::~Zombie()
{
<<<<<<< HEAD:CPP1/ex00/Zombie.cpp
	std::cout << this->_name << "Zombie died." << std::endl;
=======
	std::cout << this->_name  << " died." << std::endl;
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Zombie.cpp
}

void Zombie::announce(void)
{
<<<<<<< HEAD:CPP1/ex00/Zombie.cpp
	std::cout << this->_name << "BraiiiiiiinnnzzzZ." << std::endl;
=======
	std::cout << this->_name  << ": BraiiiiiiinnnzzzZ." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Zombie.cpp
}