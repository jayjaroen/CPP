/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:20:53 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 16:42:20 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

//animal don't have an access to brain
// std::srand(std::time(0));  // seed the random generator
int main() 
{
	Animal* animals[10];
	
	int i = 0;
	while (i < 5)
		animals[i++] = new Dog();
	while (i < 10)
		animals[i++] = new Cat();
	for (i = 0; i < 10; i++)
		delete animals[i];
	// std::cout << "++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// for (i = 0; i < 100; i++) 
	// {
	// 	std::cout << "Type: " << array[i]->getType() << std::endl;
	// 	array[i]->makeSound();
	// 	// Brain* brain = array[i]->getBrain();
	// 	if (array[i]->getBrain())
	// 		std::cout << array[i]->getBrain()->getRandomIdea() << std::endl;
	// 	else
	// 		std::cout << "No brain!" << std::endl;
	// }
	// std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	// std::cout << array[49]->getType() << std::endl;
	// array[49]->makeSound();
	// std::cout << array[49]->getBrain()->getRandomIdea(49) << std::endl;
	// array[49]->getBrain()->setIdea(49, "hahaha");
	// std::cout << "New idea is " << array[49]->getBrain()->getRandomIdea(49) << std::endl;
	
	// std::cout << array[50]->getType() << std::endl;
	// array[50]->makeSound();
	// std::cout << array[50]->getBrain()->getRandomIdea(49) << std::endl;
    // for (i = 0; i < 100; i++)
	// 	delete array[i];
	return 0;
}