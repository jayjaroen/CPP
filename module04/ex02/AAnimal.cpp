/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:12:49 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/21 22:54:06 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():_type("Default animal type")
{
    std::cout << "Animal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type):_type(type)
{
    std::cout << "AAnimal: Parameter constructor called" << std::endl;
    std::cout << "AAnimal type is " << _type << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal: Deconstructor called" << std::endl;
    std::cout << "AAnimal " << _type << " is destroyed" << std::endl;
}

AAnimal::AAnimal(AAnimal const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(AAnimal const &other)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
    {
        _type = other.getType();
    }
    return (*this);
}

std::string AAnimal::getType() const
{
    return _type;
}

void AAnimal::setType(std::string name)
{
    _type = name;
}


