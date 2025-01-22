/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:46:58 by jjaroens          #+#    #+#             */
/*   Updated: 2025/01/22 16:40:59 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int main (void)
{
	Contact contact1;
	
	contact1.setName("Jay");
	std::cout << contact1.getName() << std::endl;
}