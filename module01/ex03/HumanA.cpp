/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 22:13:12 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/14 21:58:07 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), weapon(weapon)
{

}

HumanA::~HumanA()
{
    
}

void HumanA::attack() const
{
    std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}