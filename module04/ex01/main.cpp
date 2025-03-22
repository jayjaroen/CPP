/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:20:53 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 22:34:52 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main() 
{
	std::srand(std::time(0));  // seed the random generator,
	// if not have this brain will have the same idea -> pattern will be the same
	// {
	// 	std::cout << "---------Test main in subject---------" << std::endl;
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
		
	// 	delete j;
	// 	delete i;
	// }
	// {
	// 	std::cout << "--------Creating an animal array--------" << std::endl;
	// 	Animal* animals[4];
	// 	int i = 0;
	// 	while (i < 2)
	// 	{
	// 		std::cout << "************" << std::endl;
	// 		animals[i] = new Dog();
	// 		animals[i]->makeSound();
	// 		i++;
	// 	}
	// 	while (i < 4)
	// 	{
	// 		std::cout << "************" << std::endl;
	// 		animals[i] = new Cat();
	// 		animals[i]->makeSound();
	// 		i++;
	// 	}
	// 	for (i = 0; i < 4; i++)
	// 	{
	// 		std::cout << "************" << std::endl;
	// 		delete animals[i];
	// 	}
	// }
	// {
	// 	std::cout << "----------------Test idea---------------" << std::endl;
	// 	Cat black;
	// 	std::cout << "Random Idea " << black.getBrain()->getIdea() << std::endl; // random idea;
	// 	std::cout << "Idea with param " << black.getBrain()->getIdea(3) << std::endl;
	// 	black.getBrain()->setIdea(3, "Meow <3");
	// 	std::cout << "Set Idea (new): " << black.getBrain()->getIdea(3) << std::endl;
	// }
	// {
	// 	std::cout << "----------Test Deep Copy-> std::srand() OFF ------------" << std::endl;
	// 	Cat santi;
	// 	Dog mimi;
	// 	std::cout << "Cat Idea with param " << santi.getBrain()->getIdea(3) << std::endl;
	// 	std::cout << "Dog Idea with param " << mimi.getBrain()->getIdea(3) << std::endl;
	// 	santi.getBrain()->setIdea(3, "Meow <3");
	// 	std::cout << "Cat Set Idea (new): " << santi.getBrain()->getIdea(3) << std::endl;
	// 	std::cout << "Dog Idea with param " << mimi.getBrain()->getIdea(3) << std::endl;
	// }
	{
		std::cout << "----------Test Deep Copy-> std::srand()ON ------------" << std::endl;
		Cat A;
		Cat B(A);
		Dog C;
		std::cout << "Cat Idea with param " << A.getBrain()->getIdea(3) << std::endl;
		std::cout << "Cat Idea with param " << B.getBrain()->getIdea(3) << std::endl;
		std::cout << "Dog Idea with param " << C.getBrain()->getIdea(3) << std::endl;
		
		// std::cout << "New Cat Idea with param " << waii.getBrain()->getIdea(3) << std::endl;
	}
	
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