/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:05:02 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 12:30:13 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# define Diamond_HP FragTrap::_hitPoints
# define Diamond_ENERGY ScavTrap::_energyPoints
# define Diamond_ATTACK FragTrap::_attackDamage
# define Diamond_TYPE "DiamondTrap "

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(DiamondTrap const &other);
		~DiamondTrap();

		DiamondTrap& operator=(DiamondTrap const &other);
		std::string getName() const;
		void	attack(const std::string &target);
		void	whoAmI(void);
};

#endif