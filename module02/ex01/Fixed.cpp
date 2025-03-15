/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:50:31 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/15 14:04:57 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	// std::cout << "Debugging address: " << this << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	// std::cout << "Debugging: " << toInt() << std::endl;
	// std::cout << "Degbugging address: " << this << std::endl;
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
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) // no reassign
		_value = other.getRawBits(); //copy rawbit
	return *this; // return a reference to an object
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits(int const raw)
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
	// class obj to be printed
	// std::cout << "Operator overloading function called" << std::endl;
	out << fixed.toFloat();
	return out;
}
