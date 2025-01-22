/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:28:06 by jjaroens          #+#    #+#             */
/*   Updated: 2025/01/22 16:44:37 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
//create a header file for combine file

class PhoneBook
{
	private:
			Contact contact[8]; //create the contact class
			int		current;
			int		total;
	public:
			PhoneBook();
			~PhoneBook();
			
	//constructor
	//deconstructor

};
#endif