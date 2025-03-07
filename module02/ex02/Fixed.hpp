/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:27:05 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/05 19:50:17 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
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
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;

		bool operator<(Fixed const &other) const;
		bool operator>(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		
};
std::ostream& operator<<(std::ostream &out, Fixed const &fixed);
#endif