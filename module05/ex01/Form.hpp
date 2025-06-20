/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:00:32 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/20 18:35:50 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        static const int    maxGrade = 1;
        static const int    minGrade = 150;
        const std::string 	    _name;
        bool    			_isSigned;
		int			    _signGrade;
        int			    _excuteGrade; // should be a const?
	
	public:
		Form();
        Form(std::string const &name, int signGrade, int excuteGrade);
        ~Form();
        Form(Form const &other);
        Form& operator=(Form const &other);
        
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
};

std::ostream& operator<<(std::ostream &out, Form &other);

#endif