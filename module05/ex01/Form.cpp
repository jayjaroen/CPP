/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:52:59 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/27 22:08:41 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name(NULL), _signGrade(), _excuteGrade(), _isSigned(false)
{

}

Form::Form(std::string const &name, int signGrade, int excuteGrade): _name(name), \
_signGrade(signGrade), _excuteGrade(excuteGrade), _isSigned(false)
{
	 if (_excuteGrade < MAX || _signGrade < MAX)
		throw GradeTooHighException(); // in case of MINus
	else if (_excuteGrade > MIN || _signGrade > MIN)
		throw GradeTooLowException();
	// _isSigned = false; //default as false
}

Form::~Form()
{

}

Form::Form(Form const &other): _name(other.getName()),  _signGrade(other.getSignGrade()), \
	_excuteGrade(other.getExecuteGrade()), _isSigned(other.isSigned())
{

}

Form& Form::operator=(Form const &other)
{
	if (this != &other)
	{
		// const name && int can't be reassigned
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

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The required grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The required grade is too low.");
}

const char *Form::RepeatedSignedFormException::what() const throw()
{
	return ("The form is already signed. Can't be resigned.");
}

std::ostream& operator<<(std::ostream& out, Form &other)
{
	out << "Form: " << other.getName() << std::endl;
	out << "Signed: " << other.isSigned() << std::endl;
	out << "Grade required to sign: " << other.getSignGrade() << std::endl;
	out << "Grade required to execute: " << other.getExecuteGrade() << std::endl;
	return (out);
}