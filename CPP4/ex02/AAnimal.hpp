/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimall.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:54:59 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/30 16:29:01 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
		std::string _type;
	public:
		// Constructors
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &copy);
		
		// Destructor
		virtual ~AAnimal();
		// Operators
		AAnimal & operator=(const AAnimal &assign);
		// Public members
		std::string getType() const;
		std::string setType(std::string type);
		virtual void makeSound() const = 0;
	private:
		
};

#endif