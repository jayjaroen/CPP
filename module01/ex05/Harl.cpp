/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:32:10 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/19 21:04:40 by jjaroens         ###   ########.fr       */
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
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- \
ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	// Array of function pointer
	void	(Harl::*funcPtr[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
		};
	
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (level.empty() || level == "")
	{
		std::cout << "Input is empty" << std::endl;
		return;
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*funcPtr[i])();
			return;
		}
	}
	std::cout << "Invalid Input" << std::endl;
}
