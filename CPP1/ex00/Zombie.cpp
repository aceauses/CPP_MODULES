/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:04:11 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/18 13:19:54 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie(std::string name)
{
	std::cout << name << "Zombie died." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ." << std::endl;
}