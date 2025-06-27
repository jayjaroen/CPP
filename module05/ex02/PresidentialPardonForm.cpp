/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:11:03 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/27 22:27:47 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm(): AForm("President Pardon", 25, 5), \
_target("")
{
    
}

PresidentPardonForm::PresidentPardonForm(std::string const &target): \
AForm("President Pardon", 25, 5), _target(target)
{
    
}

PresidentPardonForm::~PresidentPardonForm()
{

}

PresidentPardonForm::PresidentPardonForm(PresidentPardonForm const &other): AForm(other), _target(other.getTarget())
{

}

PresidentPardonForm& PresidentPardonForm::operator=(PresidentPardonForm const &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
		_target = other.getTarget();
    }
    return *this;
}

std::string PresidentPardonForm::getTarget() const
{
    return _target;
}

void PresidentPardonForm::execute(Bureaucrat const &executor) const
{
    checkExecuteValid(executor);
    std::cout << _target << "  has been pardoned by Zaphod Beeblebrox." << std::endl;
}