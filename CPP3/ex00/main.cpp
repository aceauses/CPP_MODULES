/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:22:25 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/24 17:21:06 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("Salam");
	ClapTrap clap2(clap);
	ClapTrap clap3 = clap2;

	clap.attack("target");
	clap.takeDamage(9);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.takeDamage(9);
	clap.beRepaired(1);
	clap.takeDamage(1);
	clap.takeDamage(1);
	return (0);
}