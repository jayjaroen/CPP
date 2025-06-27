/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:04:37 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/27 21:12:35 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include "Form.hpp"
# define HIGHEST 1
# define LOWEST 150

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat();
	
	public:
		Bureaucrat(std::string const &name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat& operator=(Bureaucrat const &other);

		const std::string& getName() const;
		int getGrade() const;
		
		// increment && discrement grade
		void increment();
		void decrement();

		// signForm
		void signForm(Form &form);
		
		// nested class
		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};	
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& b);

#endif

/*
A nested class is a class declared within the scope of another class. 
It is often used when the nested class:

Is tightly coupled to the enclosing class.
Acts as a helper, utility, or special-purpose type for that class.
*/