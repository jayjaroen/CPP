/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 09:59:12 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 13:46:16 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name) // list initialize
{
	std::cout << _name << " zombie is created" << std::endl; //this == pointer || ref?
}

Zombie::Zombie():_name("")
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
