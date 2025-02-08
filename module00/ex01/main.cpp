/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:46:58 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/08 16:05:40 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook phoneBook;
	string input;
	
	system("clear");
	std::cout << "++++++ Welcome to CPP PhoneBook ++++++!" << std::endl;
	while (1)
	{
		sleep(1);
		system("clear");
		std::cout << "Please select & type precisely the operation: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH") 
			phoneBook.searchContact();
		else if (input == "EXIT" || std::cin.eof())
		{
			std::cout << "Exiting the program!" << std::endl;
			exit(0);
		}
		else
			std::cout << "Wrong operation!" << std::endl;
	}
	return (0);
}
/// TO Edit
// signal handling, search enter output, main function worng operation, makefile // header ( revise header) , input== "ADD"
// Debugger
// Control D