/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:59:43 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/14 22:04:24 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{   
    private:
        std::string _name;
        Weapon &weapon;
        
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack() const;
};

#endif 