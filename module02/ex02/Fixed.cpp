/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:24:54 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/09 16:10:06 by jjaroens         ###   ########.fr       */
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
	std::cout << "Debugging value is" << _value << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	std::cout << "Debugging *this is: " << *this << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) // no reassign
		_value = other.getRawBits(); // copy rawbit
	return *this; // return reference to an object
}

Fixed Fixed::operator+(Fixed const &other) const
{
	std::cout << "Operator + called" << std::endl;
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other) const
{
	std::cout << "Operator - called" << std::endl;
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(Fixed const &other) const
{
	std::cout << "Operator * called" << std::endl;
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other) const
{
	std::cout << "Operator / called" << std::endl;
	if (other.toFloat() == 0.0)
	{
		std::cerr << "Division by zero is undefined" << std::endl;
		return Fixed(0);
	}
	return Fixed(this->toFloat() / other.toFloat());
}

bool Fixed::operator<(Fixed const &other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>(Fixed const &other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<=(Fixed const &other) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>=(Fixed const &other) const
{
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator==(Fixed const &other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(Fixed const &other) const
{
	return this->getRawBits() != other.getRawBits();
}

Fixed& Fixed::operator++()
{
	//Pre incremental ++obj
	std::cout << "pre incremental ++obj called" << std::endl;
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	//post incremental obj++
	std::cout << "post incremental obj++ called" << std::endl;
	Fixed tmp(*this); // create a copy of current obj //deference pointer, give the actual object
	operator++(); // increment current obj
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	std::cout << "min function" << std::endl;
	return (a < b) ? a : b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	std::cout << "const min function" << std::endl;
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b) ? a : b;
}


int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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
