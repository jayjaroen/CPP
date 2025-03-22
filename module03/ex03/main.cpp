/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 11:54:25 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 12:51:22 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("hahahaha");
	DiamondTrap b("babababa");

	std::cout << a.getName() << " hitPoint: " << a.getHitPoints() << std::endl;
	std::cout << a.getName() << " energyPoint: " << a.getEnergyPoints() << std::endl;
	std::cout << b.getName() << " hitPoint: " << b.getHitPoints() << std::endl;
	std::cout << b.getName() << " energyPoint: " << b.getEnergyPoints() << std::endl;

	for (int i = 0; i < 5; i++)
	{
		a.attack(b.getName()); // attack function using ScavTrap
		b.takeDamage(a.getAttackDamage());
	} 
	
	std::cout << a.getName() << " hitPoint: " << a.getHitPoints() << std::endl;
	std::cout << a.getName() << " energyPoint: " << a.getEnergyPoints() << std::endl;
	a.attack(b.getName());
	b.takeDamage(5);
	b.beRepaired(5);
	std::cout << b.getName() << " hitPoint: " << b.getHitPoints() << std::endl;
	std::cout << b.getName() << " energyPoint: " << b.getEnergyPoints() << std::endl;
	b.highFivesGuys();
	b.guardGate();
	a.whoAmI();
	return (0);
}