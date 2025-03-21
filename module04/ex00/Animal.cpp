/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:12:49 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/18 22:42:15 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("Default animal type")
{
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string type):_type(type)
{
    std::cout << "Animal: Parameter constructor called" << std::endl;
    std::cout << "Animal type is " << _type << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal: Deconstructor called" << std::endl;
    std::cout << "Animal " << _type << " is destroyed" << std::endl;
}

Animal::Animal(Animal const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(Animal const &other)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other.getType();
    }
    return (*this);
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::setType(std::string name)
{
    _type = name;
}

void Animal::makeSound() const
{
	std::cout << "Unknown Animal is making sound... Whoaaaa!" << std::endl;
}

