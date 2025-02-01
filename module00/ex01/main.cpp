/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:46:58 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/01 22:24:59 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook phoneBook;
	string input;
	
	std::cout << "Welcome to CPP PhoneBook!" << std::endl;
	while (1)
	{
		std::cout << "Please select & type precisely the operation: add, search, exit" << std::endl;
		std::getline(std::cin, input);
		// trim the input && ensure that isn't null
		if (!input.compare("add"))
			phoneBook.addContact();
		else if (!input.compare("search"))
			phoneBook.searchContact();
		else if (!input.compare("exit"))
		{
			std::cout << "Exit the program" << std::endl;
			break ;
		}
		system("clear");
	}
	return (0);
}