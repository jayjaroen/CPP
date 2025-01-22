/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:40:10 by jjaroens          #+#    #+#             */
/*   Updated: 2025/01/22 16:43:40 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
using namespace std;
// getter && setter
class Contact
{
	private:
			string	firstName;
			string	lastName;
			string	nickName;
			string	phoneNum;
			string	darkSecret;
	public:
			Contact();
			~Contact();
			void	setName(string name){
				firstName = name;
			};
			void	setLast(string last){
				lastName = last;
			};
			void	setNick(string nick){
				nickName = nick;
			};
			void	setPhone(string phone){
				phoneNum = phone;
			};
			void	setSecret(string secret){
				darkSecret = secret;
			};
			string	getName() const{
				return firstName;
			};
			string	getLast() const{
				return lastName;
			};
			string	getNick() const{
				return nickName;
			};
			string	getPhone() const{
				return phoneNum;
			};
			string	getSecret() const{
				return darkSecret;
			};
};

#endif

