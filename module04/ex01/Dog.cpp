/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:14:49 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/21 18:29:08 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    _type = Animal::getType();
    _brain = new Brain();
    // std::cout << "Debugging type: " << _type << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog is destroyed" << std::endl;
    delete _brain;
}

Dog::Dog(Dog const &other): Animal(other)
{
    *this = other;
}

Dog& Dog::operator=(Dog const &other)
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

void Dog::makeSound() const
{
    std::cout << "Bruuuuuuuuuuuuuuuuuuuuuu" << std::endl;
}

Brain* Dog::getBrain() const
{
    return _brain;
}