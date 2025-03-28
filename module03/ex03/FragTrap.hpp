/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:10:02 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 11:31:03 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# define FRAG_HP 100
# define FRAG_ENERGY 100
# define FRAG_ATTACK 30
# define FRAG_TYPE "FragTrap "

class FragTrap: virtual public ClapTrap
{
    public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(FragTrap const &other);
		~FragTrap();

		FragTrap& operator=(FragTrap const &other);
		
		void attack(const std::string &target);
		void highFivesGuys(void);
};

# endif