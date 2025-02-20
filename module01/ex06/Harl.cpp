/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 21:59:07 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 16:40:08 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{
    
}

void	Harl::debug(void)
{
    std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- \
ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put \
enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for \
years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! \nI want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level.empty() || level == "")
	{
		std::cout << "Input is empty" << std::endl;
		return;
	}
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::transform(level.begin(), level.end(), level.begin(), ::toupper);
	int i = 0;
	for (; i < 4; i++)
	{
		if (levels[i] == level)
		{
			break;
		}
	}
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}
	switch(i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
	}
}
//Switch statement

//std::transform(start, end, result, operation);
// start → Iterator pointing to the beginning of the range.
// end → Iterator pointing to the end of the range.
// result → Iterator pointing to the destination where the transformed elements are stored.
// operation → A function (or function pointer) that is applied to each element.