/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:20:00 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/21 15:46:05 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade()
{

}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	if (grade < _highest) //1
		throw GradeTooHighException();
	else if (grade > _lowest) //150
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &other): _name(other.getName()), _grade(other.getGrade())
{

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		_grade = other.getGrade();
	}
	return *this;
}

const std::string& Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increment()
{
	if (_grade == _highest)
	{
		throw GradeTooHighException(); // exit immediately
	}
	_grade--;
}

void Bureaucrat::decrement()
{
	if (_grade == _lowest)
		throw GradeTooLowException();
	_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is higher than the maximum");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is lower than minimum");
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return out;
}

