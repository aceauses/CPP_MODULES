/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD:CPP1/ex00/newZombie.cpp
/*   Created: 2024/01/16 16:05:31 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/18 16:39:01 by aceauses         ###   ########.fr       */
=======
/*   Created: 2024/01/18 13:07:23 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/18 13:13:04 by aceauses         ###   ########.fr       */
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/zombieHorde.cpp
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
<<<<<<< HEAD:CPP1/ex00/newZombie.cpp
	Zombie *Zombie = new Zombie(name);
	return (Zombie);
=======
	Zombie* horde = new Zombie[N];
	int		i = 0;
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/zombieHorde.cpp
}