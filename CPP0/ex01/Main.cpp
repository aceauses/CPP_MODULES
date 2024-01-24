/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:00:27 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/22 13:54:10 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	UserInput;
	PhoneBook	phoneBook;
	int			i = 1;

	while (1)
	{
		std::cout << "Command: ";
		if (!std::getline(std::cin, UserInput))
			break;
		if (UserInput == "ADD")
			phoneBook.add(&i);
		else if (UserInput == "SEARCH")
			phoneBook.search(&i);
		else if (UserInput == "EXIT")
			break ;
		else
			std::cout << "Command not found. Available commands: ADD, SEARCH, EXIT" << std::endl;
	}
	std::cout << std::endl;
}