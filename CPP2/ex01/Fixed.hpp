/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:53:07 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/24 20:44:29 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		// Destructor
		~Fixed();
		// Operators
		Fixed & operator=(const Fixed &assign);

		int		getRawBits(void) const;
		void	setRawBits(int const value);

		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		static const int	_bits = 8;
		int					_number;
};

std::ostream & operator<<(std::ostream &out, const Fixed &fixed);

#endif