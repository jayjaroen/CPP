/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:28:06 by jjaroens          #+#    #+#             */
/*   Updated: 2025/01/27 20:46:35 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

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