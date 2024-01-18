/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:03:22 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/18 12:55:13 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie* zombie1 = newZombie("Zombie1");
	zombie1->announce();
	randomChump("Zombie2");
	delete zombie1;
	return (0);
}