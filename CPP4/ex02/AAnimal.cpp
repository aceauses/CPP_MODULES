/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimall.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:54:54 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/30 16:28:53 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "\e[0;33mDefault Constructor called of AAnimal\e[0m" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "\e[0;33mDefault Constructor called of AAnimal\e[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	this->_type = copy._type;
	std::cout << "\e[0;33mCopy Constructor called of AAnimal\e[0m" << std::endl;
}

// Destructor
AAnimal::~AAnimal()
{
	std::cout << "\e[0;31mDestructor called of AAnimal\e[0m" << std::endl;
}

// Operators
AAnimal & AAnimal::operator=(const AAnimal &assign)
{
	this->_type = assign._type;
	return *this;
}

void	AAnimal::makeSound() const
{
	std::cout << "\e[0;32mAAnimal says: \e[0m" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}

std::string AAnimal::setType(std::string type)
{
	this->_type = type;
	return this->_type;
}