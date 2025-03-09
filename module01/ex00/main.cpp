/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:13:18 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/08 13:35:45 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{

	Zombie zombie("haha");
	zombie.announce();
	Zombie *zb = newZombie("Jay");
	zb->announce();
	delete zb;
	randomChump("Yaj");
	return(0);
}

/* In modern C++, it’s recommended to use smart pointers like std::unique_ptr 
or std::shared_ptr (from the <memory> header). 
These automatically manage memory and free it 
when it's no longer needed, reducing the risk of memory leaks.*/ 