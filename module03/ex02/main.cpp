/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:00:37 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 13:37:17 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("ddd");
	FragTrap b(a);
	// ClapTrap c("kkk");
	for (int i = 0; i < 5 ; i++)
		b.attack("hahaha");
	std::cout << b.getName() << " energy point is " << b.getEnergyPoints() << std::endl;
	std::cout << b.getName() << " hit point is " << b.getHitPoints() << std::endl;
	b.highFivesGuys();
}
// The process of initization 