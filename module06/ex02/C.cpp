/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:20:24 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 11:21:04 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
    
}

C::~C()
{
    
}

C::C(C const &other)
{
    *this = other;
}

C& C::operator=(C const &other)
{
    (void)other;
   return *this;
}