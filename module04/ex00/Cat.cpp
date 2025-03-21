/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:21:58 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/19 21:03:54 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	_type = Animal::getType();
	std::cout << "Debugging type: " << _type << std::endl;
}

Cat::~Cat()
{
	std::cout << _type << " is destroyed" << std::endl;
}

Cat::Cat(Cat const &other)
{
	*this = other;
}

Cat& Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		_type = other.getType();
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow Meowwwwwwww" << std::endl;
}

