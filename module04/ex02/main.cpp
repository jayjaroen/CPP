/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:20:53 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/21 23:00:28 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main() 
{
	Cat a;
	Dog b;
	
	std::cout << a.getType() << std::endl;
	std::cout << b.getType() << std::endl;
	a.makeSound();
	b.makeSound();
	std::cout << a.getBrain()->getRandomIdea() << std::endl;
	std::cout << b.getBrain()->getRandomIdea() << std::endl;

	return (0);
}