/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:04:55 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/07 21:43:42 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap //Follow the orthodox canical form
{
    private:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
	
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &other);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap const &other);

		int	getHitPoints() const;
		int	getEnergyPoints() const;
		int	getAttackDamage() const;
		void	setHitPoints(int points);
		void	setEnergyPoints(int points);
		void	setAttackDamage(int points);
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif