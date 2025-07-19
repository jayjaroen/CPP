/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:20:27 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 11:31:09 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H

# include "Base.hpp"

class B : public Base
{
    private:
        ~B();
        B(B const &other);
        B& operator=(B const &other);
    
    public:
        B();
};
#endif