/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:01:24 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/09 19:44:05 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
class	Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
	public:
		std::string	Contact::GetFirstName();
		std::string	Contact::GetLastName();
		std::string	Contact::GetNickName();
		std::string	Contact::GetPhone();
		std::string	Contact::GetSecret();
		void	Contact::SetFirstName(std::string Name);
		void	Contact::SetLastName(std::string Name);
		void	Contact::SetNickName(std::string Nick);
		void	Contact::SetPhone(std::string Nick);
		void	Contact::SetSecret(std::string Secret);
};