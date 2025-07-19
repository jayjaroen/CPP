/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:47:29 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 14:36:03 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	
	std::cout << "Testing with interger data type" << std::endl;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::cout << "Thesing with string data type" << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	// int a = 2;
	// int b = 10;
	// char c = 'c';
	// char d = 'd';
	
	// // Testing with different data types
	// std::cout << "Testing integer data type" << std::endl;
	
	// swap(a, b);
	// std::cout << "A is: " << a << std::endl;
	// std::cout << "B is: " << b << std::endl;

	// std::cout << "Testing min function" << std::endl;
	// std::cout << min(a, b) << std::endl;
	
	// std::cout << "Testing max function" << std::endl;
	// std::cout << max(a, b) << std::endl;

	// std::cout << "Testing char data type" << std::endl;
	
	// swap(c, d);
	// std::cout << "c is: " << c << std::endl;
	// std::cout << "e is: " << d << std::endl;

	// std::cout << "Testing min function" << std::endl;
	// std::cout << min(c, d) << std::endl;
	
	// std::cout << "Testing max function" << std::endl;
	// std::cout << max(c, d) << std::endl;
	

	return (0);
}