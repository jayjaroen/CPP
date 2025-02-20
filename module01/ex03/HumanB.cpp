/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 21:21:23 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 14:20:31 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), weapon(NULL) //overload
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