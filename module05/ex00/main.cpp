/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:11:24 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/27 22:49:49 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	A("A", 1);
	Bureaucrat	B("B", 150);
	Bureaucrat	C("C", 23);

	{
		std::cout << "Print the objects" << std::endl;
		std::cout << A;
		std::cout << B;
		std::cout << C;
	}

	try
	{
		std::cout << std::endl;
		std::cout << "Creating a bureaucrat with grade 0" << std::endl;
		/* GradeTooHighException */
		Bureaucrat C("C", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Grade to High!" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	try
	{
		std::cout << std::endl;
		std::cout << "Creating a bureaucrat with with grade 151" << std::endl;
		/* GradeTooLowException */
		Bureaucrat D("D", 151);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Grade too low" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	/* Increment throwing exception */
	try
	{
		std::cout << std::endl;
		std::cout << "try promoting A!" << std::endl;
		A.increment();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Can't promote -> grade too high" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	/* Decrement throwing exception */
	try
	{
		std::cout << std::endl;
		std::cout << "try demoting B" << std::endl;
		B.decrement();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Can't demote B -> grade too low" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "Increment B " << std::endl;
		std::cout << "B grade before incrementing: " << B.getGrade() << std::endl;
		B.increment();
		std::cout << "B grade after incrementing: " << B.getGrade() << std::endl;
		
		std::cout << "Decrement A " << std::endl;
		std::cout << "A grade before decrementing: " << A.getGrade() << std::endl;
		A.decrement();
		std::cout << "A grade after decrementing: " << A.getGrade() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "testing copy instructure B = A" << std::endl; 
		B = A;
		std::cout << A << B;

	}
}