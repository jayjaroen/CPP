/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:38:33 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/09 16:11:18 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main(void)
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }


int main(void)
{
	/// comparison ////
	Fixed const a(5);
	Fixed const b(4);
	std::cout << "The max value:" << Fixed::max(a, b) << std::endl;
	std::cout << a << std::endl;
	std::cout << "The min value:" << Fixed::min(b, a) << std::endl;
	Fixed c (Fixed(2.3f) * Fixed(222.0f));
	Fixed d (Fixed(100) * 893.1f);
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	
	////// incremental //////
	// Fixed const a(3.45f * 53);
	// std::cout << "the value of a: " << a << std::endl;
	// Fixed b(a);
	// std::cout << b++ << std::endl;
	// std::cout << ++b << std::endl;

	////// 

	
}
