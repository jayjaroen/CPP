/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:47:29 by jjaroens          #+#    #+#             */
/*   Updated: 2025/08/24 11:53:58 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	
	std::cout << "///////////Testing with interger data type////////////" << std::endl;
	std::cout << "Before swap" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	
	std::cout << "After swap " << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
	std::cout << "Finding Min and Max" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << "//////////////Tesing with string data type/////////////" << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "Before Swap" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	
	std::cout << "After Swap" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	
	std::cout << "comparing string" << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	std::cout << "comparing string cont" << std::endl;
	std::cout << "apple vs banana" << " min is " << ::min("apple", "banana") << std::endl;
	std::cout << "zebra vs lion" << " max is " << ::max("zebra", "lion") << std::endl;
	
	std::cout << "///////////Testing Char data type////////////" << std::endl;
	char e = 'e';
	char v = 'v';
	
	std::cout << "Before Swap" << std::endl;
	std::cout << "e = " << e << " , v = " << v << std::endl;
	std::cout << "After Swap" << std::endl;
	::swap(e, v);
	std::cout << "e = " << e << " , v = " << v << std::endl;
	return (0);
}