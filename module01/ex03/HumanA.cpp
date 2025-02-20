/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 22:13:12 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 14:21:36 by jjaroens         ###   ########.fr       */
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
	std::cout << _name << " attacks with their " << this->weapon.getType() << std::endl;
}