/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 22:20:24 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/25 16:47:55 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : _number(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(const int number)
{
	this->_number = number << this->_bits;
}

Fixed::Fixed(const float number)
{
	this->_number = roundf(number * (1 << this->_bits));
}

// Destructor
Fixed::~Fixed()
{
}


// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
		this->_number = assign.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_number;
}

void Fixed::setRawBits(int const value)
{
	this->_number = value;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_number / (1 << this->_bits);
}

int		Fixed::toInt(void) const
{
	return this->_number >> this->_bits;
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return this->_number > fixed.getRawBits();
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return this->_number < fixed.getRawBits();
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return this->_number >= fixed.getRawBits();
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return this->_number <= fixed.getRawBits();
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return this->_number == fixed.getRawBits();
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return this->_number != fixed.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->_number++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed	&Fixed::operator--(void)
{
	this->_number--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream & operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}