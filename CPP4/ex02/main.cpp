/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:55:28 by aceauses          #+#    #+#             */
/*   Updated: 2024/01/30 16:30:43 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    // const int size = 10; // Change this to the desired size
    // AAnimal* AAnimals[size];

    // // Fill the array with Dog and Cat objects
    // for (int i = 0; i < size / 2; ++i) {
    //     AAnimals[i] = new Dog();
    // }
    // for (int i = size / 2; i < size; ++i) {
    //     AAnimals[i] = new Cat();
    // }
	const AAnimal* meta = new Dog();
	meta->makeSound();
	// Make the AAnimals make a sound
	// for (int i = 0; i < size; ++i) {
	// 	AAnimals[i]->makeSound();
	// }

    // Delete the AAnimals
    // for (int i = 0; i < size; ++i) {
    //     delete AAnimals[i];
    // }

}