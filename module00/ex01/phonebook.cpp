/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:24:39 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/01 22:07:26 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_current = 0;
    this->_total = 0;
}

PhoneBook::~PhoneBook()
{
    
}

void PhoneBook::setContact(string name, string last, string nick, string num, string secret)
{
   std::cout << "the current is " << this->_current << std::endl;
   this->_contact[this->_current].setFirstName(name);
   std::cout << "Name: " << this->_contact[this->_current].getFirstName() << std::endl;
   this->_contact[this->_current].setLastName(last);
   std::cout << "Lastname: " << this->_contact[this->_current].getLastName() << std::endl;
   this->_contact[this->_current].setNickName(nick);
   std::cout << "Nickname: " << this->_contact[this->_current].getNickName() << std::endl;
   this->_contact[this->_current].setPhoneNumber(num);
   std::cout << "PhoneNum: " << this->_contact[this->_current].getPhoneNumber() << std::endl;
   this->_contact[this->_current].setDarkestSecret(secret);
   std::cout << "Secret: " << this->_contact[this->_current].getDarkestSecret() << std::endl;
   
}

string PhoneBook::addUserInput(const string prompt)
{
    string  input;
    
    system("clear");
    while (input.empty())
    {
        // to Trim string in case the user input the white characters, spaces
        system("clear");
        std::cout << prompt << std::endl;
        std::getline(std::cin, input);
    }
    return (input);
}

void PhoneBook::addContact()
{
    string  name, last, nick, num, secret;
  
    if (this->_current == 8)
    {
        std::cout << "No spaces in the phonebook. Initiate overwriting." << std::endl;
        _current = 0;
    }
    name = addUserInput("Please enter a firstname:");
    last = addUserInput("Please enter a lastname:");
    nick = addUserInput("Please enter a nickname:");
    num = addUserInput("Please enter a phone number:");
    secret = addUserInput("Please enter a darkest secret:");
    setContact(name, last, nick, num, secret);
    this->_current++;
    if (this->_total < 8)
        _total++;
    // the phone book can't be empty
}

void PhoneBook::printTable()
{
    int i;
    string name, last, nick;

    i = 0;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "Firstname" << "|";
    std::cout << std::setw(10) << "Lastname" << "|";
    std::cout << std::setw(10) << "Nickname" << "|";
    std::cout << std::endl;
    while (i < this->_total)
    {
        std::cout << std::setw(10) << i << "|";
        name = this->_contact[i].getFirstName();
        last = this->_contact[i].getLastName();
        nick = this->_contact[i].getNickName();
        if (name.length() > 9)
            name = name.substr(0, 9) + ".";
        if (last.length() > 9)
            last = last.substr(0, 9) + ".";
        if (nick.length() > 9)
            nick = nick.substr(0, 9) + ".";
        std::cout << std::setw(10) << name << "|";
        std::cout << std::setw(10) << last << "|";
        std::cout << std::setw(10) << nick << "|";
        std::cout << std::endl;
        i++;
    }
}

void PhoneBook::printContactInfo()
{
    int index;
    string input;
    
    while (1)
    {
        std::cout << "Type the index of the contact to get the info:" <<std::endl;
        std::getline(std::cin, input);
        index = atoi(input.c_str());
        if (index >= this->_total || index < 0)
            std::cout << "Please input the valid index number" << std::endl;
        else
            break ;
    }
    std::cout << "First name: " << this->_contact[index].getFirstName() << std::endl;
    std::cout << "Last name: " << this->_contact[index].getLastName() << std::endl;
    std::cout << "Nick name: " << this->_contact[index].getNickName() << std::endl;
    std::cout << "Phone number: " << this->_contact[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << this->_contact[index].getDarkestSecret() << std::endl;
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.ignore();
}

void PhoneBook::searchContact()
{
    
    if (this->_total == 0)
    {
        std::cout << "The Phonebook is empty" << std::endl;
        return;
    }
    printTable();
    printContactInfo();
}
