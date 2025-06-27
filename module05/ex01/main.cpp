/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:00:51 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/27 22:49:14 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		std::cout << "Testing ---> An error form with grade 0 to sign" << std::endl;
		Form	f("Form1", 0, 1);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Testing ---> An error form with grade 0 to execute" << std::endl;
		Form	f("Form2", 1, 0);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		std::cout << "Testing-----> Error Grade to low - An form with grade 151 to execute" << std::endl;
		Form	f("Form3", 1, 151);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Testing -----> Error Grade to low- An error form with grade 151 to sign" << std::endl;
		Form	f("Form4", 151, 1);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << "Exeption: " << e.what() << std::endl;
	}

	{
		std::cout << std::endl;
		std::cout << "Testing -----> A normal form with appropriate bureaucrat" << std::endl;
		Bureaucrat	Moon("Moon", 1);
		Form		f("F0", 150, 150);
		Form		i("F1", 130, 122 );
		std::cout << "Before signing form" << std::endl;
		std::cout << f << std::endl;
		std::cout << i << std::endl;
		Moon.signForm(f);
		i.beSigned(Moon);
		std::cout << "After signing form" << std::endl;
		std::cout << f << std::endl;
		std::cout << i << std::endl;
	}
	
	try
	{
		std::cout << std::endl;
		std::cout << "Testing ----> An appropriate form with inappropriate bureaucrat" << std::endl;
		Bureaucrat	Cat("Cat", 10);
		Form		f("F1", 1, 1);
		std::cout << f << std::endl;
		Cat.signForm(f);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	{
		std::cout << std::endl;
		std::cout << "Testing copy constructor" << std::endl;
		Form A("haha", 2 , 3);
		Form B(A);
		std::cout << A << B;
	}
	return 0;
}