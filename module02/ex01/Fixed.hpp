/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:49:59 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/15 12:47:54 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int	_value;
		static const int	_bits = 8;
		
	public:
		Fixed();
		Fixed(const int num); // convert to a corresponding fixed point value
		Fixed(const float f); // convert to a corresponding fixed point value
		~Fixed();
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, Fixed const &fixed);

#endif