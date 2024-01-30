/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:55:28 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/30 17:45:55 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const int size = 10; // Change this to the desired size
    Animal* animals[size];

    // Fill the array with Dog and Cat objects
    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }
	
	Dog basic;
	{
		std::cout << "--------------\n";
		Dog tmp = basic;
		std::cout << "--------------\n";
	}

	for (int i = 0; i < size; ++i) {
		animals[i]->makeSound();
	}

    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }

}