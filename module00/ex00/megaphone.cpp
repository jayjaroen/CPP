/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:27:13 by jjaroens          #+#    #+#             */
/*   Updated: 2025/01/22 13:14:54 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype> //to_upper

int main(int argc, char **argv)
{
	int i;
	int j;
	
	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char) std::toupper(argv[i][j]);
			// std::cout << static_cast <char> (std::toupper(argv[i][j]));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
