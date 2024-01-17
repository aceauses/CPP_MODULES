/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:04:11 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/16 16:06:59 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie died." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ." << std::endl;
}