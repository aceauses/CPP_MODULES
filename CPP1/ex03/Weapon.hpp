/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:12:38 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/19 16:12:50 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>

class Weapon
{
private:
	/* data */
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();
	void setType(std::string type);
	const std::string& getType(void);
};
