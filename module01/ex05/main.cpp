/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:22:13 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/19 21:12:31 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harl;
    
    harl.complain("DEBUG");
    harl.complain("");
    harl.complain("      ");
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("WARNING");
    return(0);
}

/*In C++, std::string is not a pointer—it is an object. 
Unlike C-style strings (char*), 
std::string cannot be NULL because it is always valid when created.*/