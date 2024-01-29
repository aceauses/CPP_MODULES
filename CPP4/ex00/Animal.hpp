/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:54:59 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/29 15:57:26 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);
		
		// Destructor
		~Animal();
		
		// Operators
		Animal & operator=(const Animal &assign);
		
	private:
		
};

#endif