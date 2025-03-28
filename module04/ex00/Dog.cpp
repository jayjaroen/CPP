/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:14:49 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/23 12:33:31 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	_type = Animal::getType();
	// std::cout << "Debugging type: " << _type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog is destroyed" << std::endl;
}

Dog::Dog(Dog const &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(Dog const &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bruuuuuuuuuuuuuuuuuuuuuu" << std::endl;
}