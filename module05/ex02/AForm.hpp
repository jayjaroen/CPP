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

# define MAX 1
# define MIN 150

class Bureaucrat;

class AForm
{
    private:
        const std::string	_name;
        bool				_isSigned;
		const int			_signGrade;
        const int			_executeGrade;
		AForm();
	
    public:
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

        class RepeatedSignedFormException : public std::exception
        {
            public:
                const char *what() const throw();
        };

		// Abstract class
        virtual void execute(Bureaucrat const &executor) const = 0;
    
    protected:
        void checkExecuteValid(Bureaucrat const &executor) const;

};

std::ostream& operator<<(std::ostream &out, AForm &other);

#endif