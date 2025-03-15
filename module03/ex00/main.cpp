/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:30:36 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/15 16:14:38 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("A");
	// ClapTrap b("");
	a.attack("b");
	a.attack("b");
	a.takeDamage(-34);
	a.beRepaired(-199);
	std::cout << a.getHitPoints() << std::endl;
	a.attack("b");
	// std::cout << "the name is: " << b.getName() << std::endl;
}
// Energy points && Health points can be increased and decreased