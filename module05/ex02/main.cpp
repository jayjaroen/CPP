/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:21:43 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/20 23:11:16 by jjaroens         ###   ########.fr       */
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
        form = new PresidentPardonForm("MOU1");
        form->execute(C);
        delete form;
        form = NULL;
    }
    catch (std::exception &error)
    {
        std::cerr << error.what() << std::endl;
    }
    
    try
    {
        std::cout << "Change the Bureaucrat to sign President Pardon" << std::endl;
        form = new PresidentPardonForm("MOU1");
        form->execute(A);
        delete form;
        form = NULL;
    }
    catch(std::exception &error)
    {
        std::cerr << error.what() << std::endl;
    }
    
    std::cout << "***************Robotomy Form ********************" << std::endl;
    
    try
    {
        std::cout << "Try to sign form Robotomy Request" << std::endl;
        form = new RobotomyRequestForm("MOU2");
        
        // {
        //     std::cout << "Try high rank bureaucrat" << std::endl;
        //     form->beSigned(A);
        //     form->execute(A);
        //     std::cout << *form << std::endl;
        // }
        {
            std::cout << "Try mid rank bureaucrat" << std::endl;
            form->beSigned(B);
            std::cout << *form << std::endl;
            form->execute(B);
        }
        // {
        //     std::cout << "Try low rank bureaucrat" << std::endl;
        //     form->beSigned(C);
        //     form->execute(C);
        //     std::cout << *form << std::endl;
        // }
        delete form;
        form = NULL;
    }
    catch(std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "***************Shrubbery Creation Form**************" << std::endl;
    
    try
    {
        form = new ShrubberyCreationForm("MOU3");
        A.signForm(*form);
        B.signForm(*form);
        C.signForm(*form);
        A.executeForm(*form);
        delete form;
        form = NULL;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
