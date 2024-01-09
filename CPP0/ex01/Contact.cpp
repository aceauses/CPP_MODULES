/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:32:31 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/09 19:43:59 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::GetFirstName()
{
	return (this->_first_name);
}

std::string	Contact::GetLastName()
{
	return (this->_last_name);
}

std::string	Contact::GetNickName()
{
	return (this->_nickname);
}

std::string	Contact::GetPhone()
{
	return (this->_phone);
}
std::string	Contact::GetSecret()
{
	return (this->_secret);
}

void	Contact::SetFirstName(std::string Name)
{
	this->_first_name = Name;
}

void	Contact::SetLastName(std::string Name)
{
	this->_last_name = Name;
}

void	Contact::SetNickName(std::string Nick)
{
	this->_nickname = Nick;
}
void	Contact::SetPhone(std::string Phone)
{
	this->_nickname = Phone;
}
void	Contact::SetSecret(std::string Secret)
{
	this->_nickname = Secret;
}