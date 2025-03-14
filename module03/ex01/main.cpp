/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:39:22 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/13 22:24:39 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("A");
	ScavTrap b("B");
	ScavTrap c(b);
	std::cout << "***c is " << c.getName() << std::endl;
	
	a.attack("what");
	b.attack("you");
}