/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:53:04 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 14:20:51 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void attack() const;
		void setWeapon(Weapon &weapon);
};

#endif