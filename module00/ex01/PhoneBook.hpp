/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:28:06 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/08 15:57:44 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
// #define MAX 8;
// #define WIDTH 10;
//create a header file for combine file

class PhoneBook
{
	private:
			Contact _contact[8]; //create the contact class
			int		_current;
			int		_total;
	public:
		PhoneBook();
		~PhoneBook();
			
		void	addContact();
		string	addUserInput(const string prompt);
		void	setContact(string name, string last, string nick, string num, string secret);
		void	searchContact();
		void	printTable();
		void	printContactInfo();
	//Add contact
	// Search
	//Print

};

#endif