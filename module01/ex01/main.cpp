/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:12:15 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/08 13:48:59 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zb = zombieHorde(5, "Jay");

	if (zb == NULL)
	{
		std::cout << "Invalid arguments" << std::endl;
		return (1);
	}
	for (int i = 0; i < 5; i++)
		zb[i].announce();
	delete[] zb;
	return (0);
}
