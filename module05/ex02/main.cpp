/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:21:43 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/28 15:28:53 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat A("High Rank", 1);
    Bureaucrat B("Mid Rank", 50);
    Bureaucrat C("Low Rank", 150);
    AForm *form = NULL;
    
    std::cout << "***********President Pardon Form ***************" << std::endl; 
    try
    {
        std::cout << "Try low rank bureaucrat sign President Pardon" << std::endl;
        form = new PresidentPardonForm("target1");
        form->execute(C);
        delete form;
        form = NULL;
    }
    catch (Bureaucrat::GradeTooLowException &error)
    {
        std::cerr << error.what() << std::endl;
		delete form;
        form = NULL;
    }
    catch (AForm::InvalidFormException &error)
    {
        std::cerr << error.what() << std::endl;
		delete form;
        form = NULL;
    }
    try
    {
        std::cout << "High rank bureaucrat to sign President Pardon" << std::endl;
        form = new PresidentPardonForm("target2");
        form->execute(A);
        form->beSigned(A);
        delete form;
        form = NULL;
    }
    catch (AForm::InvalidFormException &error)
    {
        std::cerr << error.what() << std::endl;
		delete form;
        form = NULL;
    }
    std::cout << "***************Robotomy Form ********************" << std::endl;
    {
        {
            std::cout << std::endl;
            std::cout << "Try high rank bureaucrat to sign Robo request" << std::endl;
            form = new RobotomyRequestForm("target3");
            form->beSigned(A);
            form->execute(A);
            std::cout << *form << std::endl;
            delete form;
            form = NULL;
        }
        try
        {
            std::cout << std::endl;
            std::cout << "Try low rank bureaucrat" << std::endl;
            form = new RobotomyRequestForm("target4");
            form->beSigned(C);
            form->execute(C);
            delete form;
            form = NULL;
        }
        catch(Bureaucrat::GradeTooLowException &error)
        {
            std::cerr << error.what() << std::endl;
			delete form;
			form = NULL;
        }
        catch (AForm::InvalidFormException &error)
        {
        	std::cerr << error.what() << std::endl;
			delete form;
			form = NULL;
        }
    }
    std::cout << "***************Shrubbery Creation Form**************" << std::endl;
    try
    {
        form = new ShrubberyCreationForm("target5");
        A.signForm(*form);
        // B.signForm(*form);
        // C.signForm(*form);
        A.executeForm(*form);
        delete form;
        form = NULL;
    }
    catch(Bureaucrat::GradeTooHighException &error)
    {
        std::cout << error.what() << std::endl;
		delete form;
        form = NULL;
    }
    catch(Bureaucrat::GradeTooLowException &error)
    {
        std::cout << error.what() << std::endl;
		delete form;
        form = NULL;
    }
}
