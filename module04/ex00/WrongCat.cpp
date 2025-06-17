/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:58:25 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/23 12:35:14 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is destroyed" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(WrongCat const &other)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other.getType();
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Meowwwwwwwww" << std::endl;
}
