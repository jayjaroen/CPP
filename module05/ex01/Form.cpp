/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:52:59 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/21 15:05:06 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name(NULL), _isSigned(false), _excuteGrade(), _signGrade()
{

}

Form::Form(std::string const &name, int signGrade, int excuteGrade): _name(name), \
_signGrade(signGrade), _excuteGrade(excuteGrade)
{
	 if (_excuteGrade < maxGrade || _signGrade < maxGrade)
		throw GradeTooHighException(); // in case of minus
	else if (_excuteGrade > minGrade || _signGrade > minGrade)
		throw GradeTooLowException();
	_isSigned = false; //default as false
}

Form::~Form()
{

}

Form::Form(Form const &other): _name(other.getName()), _isSigned(other.isSigned()), \
	_excuteGrade(other.getExecuteGrade()),  _signGrade(other.getSignGrade())
{
	// implement the same logic as above?
}

Form& Form::operator=(Form const &other)
{
	if (this != &other)
	{
		_signGrade = other.getSignGrade();
		_excuteGrade = other.getExecuteGrade();
		_isSigned = other.isSigned();
	}
	return *this;
}

const std::string& Form::getName() const
{
	return _name;
}

int Form::getExecuteGrade() const
{
	return _excuteGrade;
}

int Form::getSignGrade() const
{
	return _signGrade;
}

bool Form::isSigned() const
{
	return _isSigned;
}

void Form::beSigned(Bureaucrat const &other)
{
	if (other.getGrade() > _signGrade) //grade to low //how about execute?
	{
		throw GradeTooLowException();
	}
	_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The Bureaucrat grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The Bureaucrat grade is too low.");
}

std::ostream& operator<<(std::ostream& out, Form &other)
{
	out << "Form: " << other.getName() << std::endl;
	out << "Signed: " << other.isSigned() << std::endl;
	out << "Grade required to sign: " << other.getSignGrade() << std::endl;
	out << "Grade required to execute: " << other.getExecuteGrade() << std::endl;
	return (out);
}