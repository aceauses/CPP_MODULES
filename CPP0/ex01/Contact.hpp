/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:01:24 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/10 17:16:32 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
class	Contact
{
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_Nickname;
		std::string	_Phone;
		std::string	_Secret;
	public:
		Contact();
		~Contact();
		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNickName();
		std::string	GetPhone();
		std::string	GetSecret();
		void		SetFirstName(std::string Name);
		void		SetLastName(std::string Name);
		void		SetNickName(std::string Nick);
		void		SetPhone(std::string Nick);
		void		SetSecret(std::string Secret);
};