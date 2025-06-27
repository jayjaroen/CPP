/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:00:32 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/27 21:53:16 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

# define MAX 1
# define MIN 150

class Bureaucrat;

class Form
{
    private:
        const std::string 	    _name;
		const int			    _signGrade;
        const int			    _excuteGrade;
        bool    			_isSigned;
		Form();
	
	public:
        Form(std::string const &name, int signGrade, int excuteGrade);
        ~Form();
        Form(Form const &other);
        Form& operator=(Form const &other);
        
        // Accessor
        const std::string &getName() const;
        int getExecuteGrade() const;
        int getSignGrade() const;

        // Form status
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

          class RepeatedSignedFormException : public std::exception
        {
            public:
                const char *what() const throw();
        };

};

std::ostream& operator<<(std::ostream &out, Form &other);

#endif