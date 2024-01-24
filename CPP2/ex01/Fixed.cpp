#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	this->_number = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	this->_number = copy._number;
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
	(void) assign;
	return *this;
}

float	Fixed::toFloat(void) const
{
	return (0);
}