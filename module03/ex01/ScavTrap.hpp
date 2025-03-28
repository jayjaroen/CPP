/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:04:46 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 12:58:24 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include "ClapTrap.hpp"
# define SCAV_HP 100
# define SCAV_ENERGY 50
# define SCAV_ATTACK 20
# define SCAV_TYPE "ScavTrap "

class ScavTrap:public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();

		ScavTrap& operator=(ScavTrap const &other);
		void attack(const std::string &target);
		void guardGate(); 
};

# endif