/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:14:49 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 22:45:55 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    _type = AAnimal::getType();
    _brain = new Brain();
    // std::cout << "Debugging type: " << _type << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog is destroyed" << std::endl;
    delete _brain;
}

Dog::Dog(Dog const &other): AAnimal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _type = other.getType();
	_brain = new Brain(*other._brain); //deep copy
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