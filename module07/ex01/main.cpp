/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:00:59 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 15:20:39 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void)
{
	int num[7] = {1, 2, 3, 4, 5, 6, 7};
	char c[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	std::string words[5] = {"It", "is", "a", "cute", "cat"};
	
	std::cout << "testing num" << std::endl;
	iter(num, 7, print);

	std::cout << std::endl << "testing char" << std::endl;
	iter(c, 6, print);

	std::cout << std::endl << "testing string" << std::endl;
	iter(words, 5, print);
	
	return (0);
}