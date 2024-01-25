#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	this->_number = 0;
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
	std::cout << "\e[0;32mgetRawBits member function called\e[0m" << std::endl;
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

std::ostream & operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}