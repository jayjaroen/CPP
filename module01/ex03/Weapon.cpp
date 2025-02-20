/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 22:22:50 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 14:11:03 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string string)
{
	_type = string;
}

Weapon::Weapon():_type("")
{
	
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return (_type);
}