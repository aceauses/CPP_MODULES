/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:03:22 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/18 17:57:38 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int N = 10;
	Zombie *horde = zombieHorde(N, "Zombie");
	int i = 0;

	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete []horde;
	return (0);
}