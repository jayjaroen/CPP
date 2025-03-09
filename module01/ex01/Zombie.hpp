/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:09:56 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/08 13:42:28 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string name); // Parameterized constructor
		Zombie(); // default constructor
		~Zombie();
		void announce();
		void setName(std::string name);
};

Zombie* zombieHorde(int n, std::string name);

#endif
