/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:14:49 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/19 21:08:46 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    _type = Animal::getType();
    std::cout << "Debugging type: " << _type << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog is destroyed" << std::endl;
}

Dog::Dog(Dog const &other)
{
    *this = other;
}

Dog& Dog::operator=(Dog const &other)
{
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