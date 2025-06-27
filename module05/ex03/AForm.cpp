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
	 if (_executeGrade < MAX || _signGrade < MAX)
		throw GradeTooHighException(); // in case of MINus
	else if (_executeGrade > MIN || _signGrade > MIN)
		throw GradeTooLowException();
	_isSigned = false; //default as false
}

AForm::~AForm()
{

}

AForm::AForm(AForm const &other): _name(other.getName()), _isSigned(other.isSigned()), \
	 _signGrade(other.getSignGrade()), _executeGrade(other.getExecuteGrade())
{
	
}

AForm& AForm::operator=(AForm const &other)
{
	if (this != &other)
	{
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
		throw Bureaucrat::GradeTooLowException();
	}
	if (isSigned())
	{
		throw RepeatedSignedFormException();
	}
	_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("The required grade is too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The required grade is too low.");
}

const char *AForm::InvalidFormException::what() const throw()
{
	return ("The form is not signed.");
}

const char *AForm::RepeatedSignedFormException::what() const throw()
{
	return ("The form is already signed. Can't be resigned.");
}

void AForm::checkExecuteValid(Bureaucrat const &executor) const
{
	//check grade 
	if (executor.getGrade() > _executeGrade)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	// sign first and then execute
	if (!isSigned())
	{
		throw InvalidFormException();
	}
}

std::ostream& operator<<(std::ostream& out, AForm &other)
{
	out << "Form: " << other.getName() << std::endl;
	out << "Signed: " << other.isSigned() << std::endl;
	out << "Grade required to sign: " << other.getSignGrade() << std::endl;
	out << "Grade required to execute: " << other.getExecuteGrade() << std::endl;
	return (out);
}


