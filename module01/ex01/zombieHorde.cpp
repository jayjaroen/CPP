/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:19:05 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/13 21:58:11 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    int i;
    
    Zombie *zb = new Zombie[n];
    i = -1;
    while (++i < n)
    {
        zb[i].setName(name);
        zb[i].announce();
    }
    return (zb);
}