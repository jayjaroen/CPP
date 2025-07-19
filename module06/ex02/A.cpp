/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:14:25 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 11:17:29 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
    
}

A::~A()
{
    
}

A::A(A const &other)
{
    *this = other;
}

A& A::operator=(A const &other)
{
    (void)other;
   return *this;
}