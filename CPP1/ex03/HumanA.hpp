/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:12:25 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/19 16:28:31 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	std::string _name;
	Weapon&		_weapon;
public:
	HumanA(std::string name, Weapon& Weapon);
	~HumanA();
	void	attack(void);
};

