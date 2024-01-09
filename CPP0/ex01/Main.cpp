/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:00:27 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/09 19:17:50 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string UserInput;
	
	while (1)
	{
		std::cout << "Command: ";
		if (!std::getline(std::cin, UserInput))
			break;
		if (UserInput == "ADD")
			std::cout << "User want to Add " << std::endl;
		if (UserInput == "SEARCH")
			std::cout << "User want to Search " << std::endl;
	}
	std::cout << std::endl;
}