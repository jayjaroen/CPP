/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:04:46 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/14 14:42:47 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

// # include <iostream>
// # include <string>
# include "ClapTrap.hpp"
# define SCAV_HP 100
# define SCAV_ENERGY 50
# define SCAV_ATTACK 20
# define SCAV_TYPE "ScavTrap "

class ScavTrap:public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(ScavTrap const &other);
        ~ScavTrap();
        
        ScavTrap& operator=(ScavTrap const &other);
        void attack(const std::string &target); //Same name as claptrap, how to know when called?
        void guardGate(); 
};

# endif