/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:58:25 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/19 21:53:47 by jjaroens         ###   ########.fr       */
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
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(WrongCat const &other)
{
    std::cout << "Operator assignment called" << std::endl;
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
