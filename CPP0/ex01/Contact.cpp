/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:32:31 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/10 17:22:16 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};
Contact::~Contact() {};

std::string	Contact::GetFirstName()
{
	return (this->_FirstName);
}

std::string	Contact::GetLastName()
{
	return (this->_LastName);
}

std::string	Contact::GetNickName()
{
	return (this->_Nickname);
}

std::string	Contact::GetPhone()
{
	return (this->_Phone);
}
std::string	Contact::GetSecret()
{
	return (this->_Secret);
}

void	Contact::SetFirstName(std::string Name)
{
	this->_FirstName = Name;
}

void	Contact::SetLastName(std::string Name)
{
	this->_LastName = Name;
}

void	Contact::SetNickName(std::string Nick)
{
	this->_Nickname = Nick;
}
void	Contact::SetPhone(std::string Phone)
{
	this->_Phone = Phone;
}
void	Contact::SetSecret(std::string Secret)
{
	this->_Secret = Secret;
}

std::string	Contact::ShowFirstName()
{
	if (this->_FirstName.length() > 10)
		return (this->_FirstName.substr(0, 9) + ".");
	else
		return (this->_FirstName);
}

std::string	Contact::ShowLastName()
{
	if (this->_LastName.length() > 10)
		return (this->_LastName.substr(0, 9) + ".");
	else
		return (this->_LastName);
}

std::string	Contact::ShowNickName()
{
	if (this->_Nickname.length() > 10)
		return (this->_Nickname.substr(0, 9) + ".");
	else
		return (this->_Nickname);
}