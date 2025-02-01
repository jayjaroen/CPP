/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:40:10 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/01 14:34:30 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib> //atoi // system("clear")
#include <string> // lenght, substr
#include <iomanip> // for std::setw()
// getter && setter
typedef std::string string;

class Contact
{
	private:
			string	_firstName;
			string	_lastName;
			string	_nickName;
			string	_phoneNumber; //why not int
			string	_darkestSecret;
		
	public:
			Contact();
			~Contact();
			string getFirstName() const; //why declare as const here
			string getLastName() const;
			string getNickName() const;
			string getPhoneNumber() const;
			string getDarkestSecret() const;
			void setFirstName(string firstName);
			void setLastName(string lastName);
			void setNickName(string nickName);
			void setPhoneNumber(string phoneNumber);
			void setDarkestSecret(string darkestSecret);
}; // add semi colon after class

#endif

