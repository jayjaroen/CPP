/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:11:24 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/21 15:53:50 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	A("A", 1);
	Bureaucrat	B("B", 150);

	std::cout << A;
	std::cout << B;

	std::cout << "Creating a bureaucrat with grade 0" << std::endl;
	/* GradeTooHighException */
	try
	{
		Bureaucrat C("C", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Grade to High!" << std::endl;
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "Creating a bureaucrat with with grade 151" << std::endl;
	/* GradeTooLowException */
	try
	{
		Bureaucrat D("D", 151);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Grade too low" << std::endl;
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	std::cout << "try promoting A!" << std::endl;
	/* Increment throwing exception */
	try
	{
		A.increment();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Can't promote -> grade too high" << std::endl;
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "try demoting B" << std::endl;
	/* Decrement throwing exception */
	try
	{
		B.decrement();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Can't demote B -> grade too low" << std::endl;
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		B.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B << std::endl;
	std::cout << A << std::endl;
	
	B = A;
	std::cout << B << std::endl;
}