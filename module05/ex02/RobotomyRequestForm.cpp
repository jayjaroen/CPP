/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:05:20 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/20 23:02:46 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy", 72, 45), _target("")
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): \
AForm("Robotomy", 72, 45), _target(target)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
{
	// AForm("Robotomy", 72, 45), _target(target), _target(other.getTarget())
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	checkExecuteValid(executor);
	if (rand() % 2 == 0)
	{
		std::cout << _target << " was successfully robotomized!" << std::endl;
	}
	else
	{
		std::cout << "Failed to robotomize " << _target << std::endl;
	}
}


