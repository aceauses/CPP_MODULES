/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:58:16 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/18 18:11:09 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPtr = &brain;
	std::string &brainRef = brain;

	std::cout << "Memory String: " << &brain << std::endl;
	std::cout << "Memory Pointer: " << &*brainPtr << std::endl;
	std::cout << "Memory Ref: " << &brainRef << std::endl;
	std::cout << std::endl;
	std::cout << "Value String: " << brain << std::endl;
	std::cout << "Value Pointer: " << *brainPtr << std::endl;
	std::cout << "Value Ref: " << brainRef << std::endl;
	return (0);
}