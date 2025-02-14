/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 22:22:50 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/14 22:04:37 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string string)
{
    this->_type = string;
}

Weapon::~Weapon()
{
    
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string &Weapon::getType() const
{
   return (this->_type);
}