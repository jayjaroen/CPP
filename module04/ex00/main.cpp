/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:20:53 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/23 12:02:25 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	{
		std::cout << "***************Test Virtual Function *********" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}
	
	{
		std::cout << "***************Test Wrong Animal****************" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound! // put const
		meta->makeSound();
		delete meta;
		delete i;
	}
}
//Wrongcat is not destroyed because there is no virtual