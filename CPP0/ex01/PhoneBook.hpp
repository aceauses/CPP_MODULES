/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:00:41 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/10 17:36:58 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iomanip>
#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact Contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	add(int *number);
		void	search(void);
};