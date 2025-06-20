/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:37:30 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/20 23:45:02 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        typedef struct s_form
        {
            std::string _type;
            AForm        *form;
        } t_form;
    
    public:
        Intern();
        ~Intern();
        // Intern(Intern const &other);
        
        // Intern& operator=(Intern const &other);
        AForm* makeForm(std::string const &name, std::string const &target) const;
};

#endif