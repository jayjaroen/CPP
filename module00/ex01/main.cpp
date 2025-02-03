/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:46:58 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/03 15:54:00 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	// should handle the control D?
	PhoneBook phoneBook;
	string input;
	
	std::cout << "Welcome to CPP PhoneBook!" << std::endl;
	while (1)
	{
		system("clear");
		std::cout << "Please select & type precisely the operation: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		// trim the input && ensure that isn't null
		// system clear after
		if (!input.compare("ADD"))
			phoneBook.addContact();
		else if (!input.compare("SEARCH"))
			phoneBook.searchContact();
		else if (!input.compare("EXIT"))
		{
			std::cout << "Exit the program" << std::endl;
			break ;
		}
		else
			std::cout << "Wrong operation!" << std::endl;
		// system("clear");
	}
	return (0);
}