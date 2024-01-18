/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:03:37 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/18 12:55:21 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};
Zombie* newZombie(std::string name);
void randomChump( std::string name );