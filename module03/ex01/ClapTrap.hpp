/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:04:55 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 12:40:31 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# define Clap_HP 10
# define Clap_ENERGY 10
# define Clap_ATTACK 0
# define Clap_TYPE "ClapTrap "

class ClapTrap //Follow the orthodox canical form
{
	protected:
		std::string	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(ClapTrap const &other);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap const &other);

		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;
		std::string getName() const;

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
	
#endif
// void	setHitPoints(unsigned int points);
// void	setEnergyPoints(unsigned int points);
// void	setAttackDamage(unsigned int points);
// void	setName(std::string name);