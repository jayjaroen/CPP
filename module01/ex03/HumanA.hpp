/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:59:43 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 14:21:59 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack() const;
};

#endif 