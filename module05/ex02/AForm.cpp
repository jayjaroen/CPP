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

AForm::AForm(): _name(NULL), _isSigned(false), _excuteGrade(), _signGrade()
{

}

AForm::AForm(std::string const &name, int excuteGrade, int signGrade): _name(name), \
_excuteGrade(excuteGrade), _signGrade(signGrade)
{
	 if (_excuteGrade < maxGrade || _signGrade < maxGrade)
		throw GradeTooHighException(); // in case of minus
	else if (_excuteGrade > minGrade || _signGrade > minGrade)
		throw GradeTooLowException();
	_isSigned = false; //default as false
}

AForm::~AForm()
{

}

AForm::AForm(AForm const &other): _name(other.getName()), _isSigned(other.isSigned()), \
	_excuteGrade(other.getExecuteGrade()),  _signGrade(other.getSignGrade())
{
	// implement the same logic as above?
}

AForm& AForm::operator=(AForm const &other)
{
	if (this != &other)
	{
		_signGrade = other.getSignGrade();
		_excuteGrade = other.getExecuteGrade();
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
	return _excuteGrade;
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
	if (other.getGrade() > _signGrade) //grade to low //how about execute?
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
	return ("The form is invalid.");
}

void AForm::checkExecuteGrade(Bureaucrat const &executor)
{
	if (executor.getGrade() > _excuteGrade)
	{
		throw GradeTooLowException();
	}
	// signed form?
}

std::ostream& operator<<(std::ostream& out, AForm &other)
{
	out << "Form: " << other.getName() << std::endl;
	out << "Signed: " << other.isSigned() << std::endl;
	out << "Grade required to execut: " << other.getExecuteGrade() << std::endl;
	out << "Grade required to sign: " << other.getSignGrade() << std::endl;
	return (out);
}


