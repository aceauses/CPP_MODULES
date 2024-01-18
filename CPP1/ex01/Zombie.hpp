/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:03:37 by aceauses          #+#    #+#             */
<<<<<<< HEAD:CPP1/ex00/Zombie.hpp
/*   Updated: 2024/01/18 16:44:38 by aceauses         ###   ########.fr       */
=======
/*   Updated: 2024/01/18 13:12:40 by aceauses         ###   ########.fr       */
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Zombie.hpp
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
<<<<<<< HEAD:CPP1/ex00/Zombie.hpp
		Zombie(std::string name);
=======
		Zombie();
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Zombie.hpp
		~Zombie();
		void announce(void);
		void setName(std::string name);
};
<<<<<<< HEAD:CPP1/ex00/Zombie.hpp
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
=======
Zombie* zombieHorde( int N, std::string name );
>>>>>>> 803a2311d8965d211b8ff36258bb01799bc4d396:CPP1/ex01/Zombie.hpp
