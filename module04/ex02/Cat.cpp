/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:21:58 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/21 22:51:59 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():AAnimal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	_type = AAnimal::getType();
	_brain = new Brain();
	// std::cout << "Debugging type: " << _type << std::endl;
}

Cat::~Cat()
{
	std::cout << _type << " is destroyed" << std::endl;
	delete _brain;
}

Cat::Cat(Cat const &other): AAnimal(other)
{
	*this = other;
}

Cat& Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		_type = other.getType();
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow Meowwwwwwww" << std::endl;
}

Brain* Cat::getBrain() const
{
	return _brain;
}

