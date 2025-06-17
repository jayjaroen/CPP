/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:00:51 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/17 20:10:32 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    std::cout << "An error form with grade 0 to execute" << std::endl;
	try
	{
		Form	f("ER0", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "An error form with grade 0 to sign" << std::endl;
	
	try
	{
		Form	f("ER1", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "An form with grade 151 to sign" << std::endl;
	try
	{
		Form	f("ER2", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "An error form with grade 151 to execute" << std::endl;
	try
	{
		Form	f("ER3", 151, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "Exeption: " << e.what() << std::endl;
	}

	std::cout << "A normal form with appropriate bureaucrat" << std::endl;
	try
	{
		Bureaucrat	Moon("Moon", 1);
		Form		f("F0", 150, 150);

		std::cout << f << std::endl;
		Moon.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "An appropriate form with inappropriate bureaucrat" << std::endl;
	try
	{
		Bureaucrat	Cat("Cat", 10);
		Form		f("F1", 1, 1);

		std::cout << f << std::endl;
		Cat.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}