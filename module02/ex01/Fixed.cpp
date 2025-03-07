/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:50:31 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/05 13:27:07 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)// first init
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	// converting float to a fixed point representation
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(f * (1 << _bits));
}

Fixed::Fixed(const int num)
{
	// converting int to a fixed point representation
	std::cout << "Int constructor called" << std::endl;
	_value = num << _bits;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other; //check
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) // no reassign
        _value = other.getRawBits(); //copy rawbit
    return *this; // return a reference to an object
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void   Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat() const
{
    // convert fixed point to float
    return (float)_value / (float)(1 << _bits);
}

int Fixed::toInt() const
{
    return (int)_value >> _bits;
}

std::ostream& operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return out;
}
