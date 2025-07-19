/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:18:33 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 11:19:23 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
    
}

B::~B()
{
    
}

B::B(B const &other)
{
    *this = other;
}

B& B::operator=(B const &other)
{
    (void)other;
   return *this;
}