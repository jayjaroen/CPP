/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:52:59 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/17 20:47:35 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name(NULL), _isSigned(false), _signGrade(), _executeGrade()
{

}

AForm::AForm(std::string const &name, int signGrade, int executeGrade): _name(name),
	_signGrade(signGrade), _executeGrade(executeGrade)
{
	 if (_executeGrade < maxGrade || _signGrade < maxGrade)
		throw GradeTooHighException(); // in case of minus
	else if (_executeGrade > minGrade || _signGrade > minGrade)
		throw GradeTooLowException();
	_isSigned = false; //default as false
}

AForm::~AForm()
{

}

AForm::AForm(AForm const &other): _name(other.getName()), _isSigned(other.isSigned()), \
	 _signGrade(other.getSignGrade()), _executeGrade(other.getExecuteGrade())
{
	// implement the same logic as above?
}

AForm& AForm::operator=(AForm const &other)
{
	if (this != &other)
	{
		_signGrade = other.getSignGrade();
		_executeGrade = other.getExecuteGrade();
		_isSigned = other.isSigned();
	}
	return *this;
}

const std::string& AForm::getName() const
{
	return _name;
}

int AForm::getExecuteGrade() const
{
	return _executeGrade;
}

int AForm::getSignGrade() const
{
	return _signGrade;
}

bool AForm::isSigned() const
{
	return _isSigned;
}

void AForm::beSigned(Bureaucrat const &other)
{
	if (other.getGrade() > _signGrade)
	{
		throw GradeTooLowException();
	}
	_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("The Bureaucrat grade is too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The Bureaucrat grade is too low.");
}

const char *AForm::InvalidFormException::what() const throw()
{
	return ("The form is not signed.");
}

void AForm::checkExecuteValid(Bureaucrat const &executor) const
{
	//check grade 
	if (executor.getGrade() > _executeGrade)
	{
		throw GradeTooLowException();
	}
	// neccessary ? to be signed first && execute?
	if (!isSigned())
	{
		throw InvalidFormException();
	}
}

std::ostream& operator<<(std::ostream& out, AForm &other)
{
	out << "Form: " << other.getName() << std::endl;
	out << "Signed: " << other.isSigned() << std::endl;
	out << "Grade required to execute: " << other.getExecuteGrade() << std::endl;
	out << "Grade required to sign: " << other.getSignGrade() << std::endl;
	return (out);
}


