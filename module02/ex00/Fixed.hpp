/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 21:30:16 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/27 21:35:21 by jjaroens         ###   ########.fr       */
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
		~Fixed();
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif