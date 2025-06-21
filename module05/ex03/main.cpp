/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:34:19 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/21 15:17:58 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main ()
{
	Intern intern;
	AForm *robo;
	AForm *president;
	AForm *shrub;

	robo = intern.makeForm("robotomy request", "cat");
	std::cout << "Printing the Robotomy Form" << std::endl;
	std::cout << *robo << std::endl;
	
	president = intern.makeForm("presidential pardon", "dog");
	std::cout << "Printing the President Request Form" << std::endl;
	std::cout << *president << std::endl;

	
	shrub = intern.makeForm("shrubbery creation", "pig");
	std::cout << "Printing the Shrubbery Form" << std::endl;
	std::cout << *shrub << std::endl;
	
	AForm *invalid = intern.makeForm("Invalid", "bird");
	if (!invalid)
	{
		std::cout << "it's invalid" << std::endl;
	}
	delete robo;
	delete president;
	delete shrub;
}