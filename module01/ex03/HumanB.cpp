/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 21:21:23 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/14 22:04:53 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), weapon(nullptr)
{
    
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack() const
{
    if (this->weapon)
        std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon!" << std::endl;
}