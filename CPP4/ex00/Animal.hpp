/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:54:59 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/30 17:39:05 by aceauses         ###   ########.fr       */
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
		Animal(std::string type);
		Animal(const Animal &copy);
		// Destructor
		virtual ~Animal();
		// Operators
		Animal & operator=(const Animal &assign);
		// Public members
		std::string getType() const;
		std::string setType(std::string type);
		virtual void makeSound() const;
};

#endif