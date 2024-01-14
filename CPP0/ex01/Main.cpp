/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:00:27 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/10 17:41:37 by aceauses         ###   ########.fr       */
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
		if (UserInput == "SEARCH")
			phoneBook.search(&i);
		if (UserInput == "EXIT")
			break ;
	}
	std::cout << std::endl;
}