/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:35:01 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/19 21:08:18 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal: Default contructor called" << std::endl;
    setType("Unknown");
}

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
    std::cout << "WrongAnimal: Parameter constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &other)
{
    if (this != &other)
    {
        _type = other.getType();
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::setType(std::string type)
{
    _type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal is making noiseeeee" << std::endl;
}