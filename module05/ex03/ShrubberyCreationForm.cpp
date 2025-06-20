/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:58:00 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/20 23:04:24 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery", 137, 145),\
 _target()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): \
AForm("Shrubbery", 137, 145), _target(target)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
{
	// AForm("Shrubbery", 137, 145), _target(other.getTarget()) ?
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    checkExecuteValid(executor);
	std::ofstream	file;
    std::string		name;
	
    name = _target + "_shrubbery";
	if (!file)
	{
		throw std::runtime_error("Can't open file");
	}
    file.open(name.c_str(), std::ofstream::out);
    file << "-------ASCII tree-------" << std::endl;
    int height = 9;
    for (int i = 0; i < height; i++)
    {
        int spaces = height - i - 1;
        int dollars = 2 * i + 1;
        file << std::string(spaces, ' ') << std::string(dollars, '$') << std::endl; 
    }
    for (int i = 0; i < 2; i++)
    {
        file << std::string(height - 1, ' ') << "||" << std::endl;
    }
    file.close();
}