/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:01:32 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/08 13:59:52 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string; // declare pointer to a string
	std::string &stringREF = string; // declare a reference to a string , address of the string

	std::cout << "The memory address of the string value: " << &string << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string variable: " << string << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	// std::cout << "The address is stringPTR " << &stringPTR << std::endl;
	return (0);
}

/* --------------------------------Output----------------------------------
The memory address of the string value: 0x7ffd31a97728
The memory address held by stringPTR: 0x7ffd31a97728
The memory address held by stringREF: 0x7ffd31a97728
The value of the string variable: HI THIS IS BRAIN
The value pointed to by stringPTR: HI THIS IS BRAIN
The value pointed to by stringREF: HI THIS IS BRAIN
*/