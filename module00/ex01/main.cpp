/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:46:58 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/01 17:32:39 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook phoneBook;
	int i = 0;
	
	while (i < 1)
	{
		phoneBook.addContact();
		i++;
	}
	phoneBook.searchContact();
	
}