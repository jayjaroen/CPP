/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:00:32 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/17 20:45:10 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        static const int    maxGrade = 1;
        static const int    minGrade = 150;
        const std::string 	    _name;
        bool    			_isSigned;
		int			    _signGrade;
        int			    _executeGrade; // should be a const?
	
        
    public:
		AForm();
        AForm(std::string const &name, int signGrade, int executeGrade);
        virtual ~AForm();
        AForm(AForm const &other);
        AForm& operator=(AForm const &other);
        
        const std::string &getName() const;
        int getExecuteGrade() const;
        int getSignGrade() const;
        bool isSigned() const;
        void beSigned(Bureaucrat const &other);
    
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class InvalidFormException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        virtual void execute(Bureaucrat const &executor) const = 0;
    
    protected:
        void checkExecuteValid(Bureaucrat const &executor) const;

};

std::ostream& operator<<(std::ostream &out, AForm &other);

#endif