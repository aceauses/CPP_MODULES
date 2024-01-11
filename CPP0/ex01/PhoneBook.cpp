/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:03:01 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/10 17:43:40 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {};
PhoneBook::~PhoneBook() {};

void	PhoneBook::add(int *number)
{
	std::string Input;

	while (1)
	{
		std::cout << "First Name: ";
		if (!std::getline(std::cin, Input))
			break;
		this->Contacts[*number - 1].SetFirstName(Input);
		std::cout << "Last Name: ";
		if (!std::getline(std::cin, Input))
			break;
		this->Contacts[*number - 1].SetLastName(Input);
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, Input))
			break;
		this->Contacts[*number - 1].SetNickName(Input);
		std::cout << "Phone: ";
		if (!std::getline(std::cin, Input))
			break;
		this->Contacts[*number - 1].SetPhone(Input);
		std::cout << "Secret: ";
		if (!std::getline(std::cin, Input))
			break;
		this->Contacts[*number - 1].SetSecret(Input);
		*number += 1;
		if (*number > 8)
			*number = 1;
		break;
	}
}

void	PhoneBook::search(void)
{
	std::string Input;

	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->Contacts[i].ShowFirstName() << "|";
		std::cout << std::setw(10) << this->Contacts[i].ShowLastName() << "|";
		std::cout << std::setw(10) << this->Contacts[i].ShowNickName() << std::endl;
	}
	std::cout << "Index: ";
	if (!std::getline(std::cin, Input))
		return ;
	if (Input.length() == 1 && Input[0] >= '1' && Input[0] <= '8')
	{
		std::cout << "First Name: " << this->Contacts[Input[0] - '0' - 1].GetFirstName() << std::endl;
		std::cout << "Last Name: " << this->Contacts[Input[0] - '0' - 1].GetLastName() << std::endl;
		std::cout << "Nickname: " << this->Contacts[Input[0] - '0' - 1].GetNickName() << std::endl;
		std::cout << "Phone: " << this->Contacts[Input[0] - '0' - 1].GetPhone() << std::endl;
		std::cout << "Secret: " << this->Contacts[Input[0] - '0' - 1].GetSecret() << std::endl;
	}
	else
		std::cout << "Invalid Input" << std::endl;
}