/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:09:24 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 13:31:23 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << "Parameterized constructor called" << std::endl;
}

Zombie::Zombie():_name("")
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}


void Zombie::announce()
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
