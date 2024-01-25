/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:44:19 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/25 16:47:57 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

int main( void )
{
    Fixed a(1);
    Fixed const b( Fixed(5.05f) * Fixed(2) );
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    // Test comparison operators
    std::cout << "Comparison Operators:\n";
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    // Test arithmetic operators
    std::cout << "Arithmetic Operators:\n";
    Fixed c = a + b;
    Fixed d = a - b;
    Fixed e = a * b;
    Fixed f = a / b;
    std::cout << "a + b: " << c << std::endl;
    std::cout << "a - b: " << d << std::endl;
    std::cout << "a * b: " << e << std::endl;
    std::cout << "a / b: " << f << std::endl;
    // Test increment and decrement operators
    std::cout << "Increment and Decrement Operators:\n";
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    // Test static member functions min and max
    std::cout << "Static Member Functions min and max:\n";
    Fixed minResult = Fixed::min(a, b);
    Fixed maxResult = Fixed::max(a, b);
    std::cout << "min(a, b): " << minResult << std::endl;
    std::cout << "max(a, b): " << maxResult << std::endl;
    return 0;
}