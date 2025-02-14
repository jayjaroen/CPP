/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:13:18 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/13 11:11:41 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zb;

    zb = NULL;
    zb = zb->newZombie("Jay");
    zb->randomChump("Yaj");
    delete zb;
    zb = NULL;
}

/* In modern C++, it’s recommended to use smart pointers like std::unique_ptr 
or std::shared_ptr (from the <memory> header). 
These automatically manage memory and free it 
when it's no longer needed, reducing the risk of memory leaks.*/ 