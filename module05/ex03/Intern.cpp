/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:43:20 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/21 15:03:31 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern const &other)
{
    *this = other;
}

Intern& Intern::operator=(Intern const &other)
{
	(void)other;
	return *this;
}

AForm* Intern::makeForm(std::string const &name, std::string const &target) const
{
	std::string formName[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm *form = NULL;

	int i = 0;

	while (i < 3)
	{
		if (formName[i] == name)
		{
			std::cout << "Intern make form: " << name << std::endl;
			break;
		}
		i++;
	}
	switch(i)
	{
		case 0:
			form = new PresidentPardonForm(target);
			return form;
		case 1:
			form = new RobotomyRequestForm(target);
			return form;
		case 2:
			form = new ShrubberyCreationForm(target);
			return form;
		case 3:
			std::cerr << "Invalid form name" << std::endl;
	}
	return NULL;
}
