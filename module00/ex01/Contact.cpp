/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:57:21 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/01 14:29:03 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	// constructor
    // init
}

Contact::~Contact()
{
	// destructor
}

void    Contact::setFirstName(string firstName)
{
    this->_firstName = firstName;
}

void	Contact::setLastName(string lastName)
{
    this->_lastName = lastName;
}

void	Contact::setNickName(string nickName)
{
    this->_nickName = nickName;
}

void	Contact::setPhoneNumber(string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(string secret)
{
    this->_darkestSecret = secret;
}

string	Contact::getFirstName() const
{
    return this->_firstName;
}

string	Contact::getLastName() const
{
    return this->_lastName;
}

string	Contact::getNickName() const
{
    return this->_nickName;
}

string	Contact::getPhoneNumber() const
{
    return this->_phoneNumber;
}

string	Contact::getDarkestSecret() const
{
    return this->_darkestSecret;
}
