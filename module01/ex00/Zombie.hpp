/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:29:33 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/13 14:47:07 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string string;

class Zombie
{
    private:
        string _name;
        
    public:
        Zombie(string name);
        ~Zombie();
        void announce();
        Zombie *newZombie(string name);
        void randomChump(string name);
};

#endif