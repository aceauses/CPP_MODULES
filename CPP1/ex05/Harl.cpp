/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:01:49 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/20 15:21:52 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "Debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error" << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level.empty())
	{
		std::cout << "Please specify a level " << std::endl;
		return ;
	}
	else if (level == "debug")
		this->debug();
	else if (level == "info")
		this->info();
	else if (level == "warning")
		this->warning();
	else if (level == "error")
		this->error();
	else
		std::cout << "Unknown level" << std::endl;
}