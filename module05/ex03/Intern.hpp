/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:37:30 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/21 14:45:48 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"
# include <algorithm>

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &other);
		Intern& operator=(Intern const &other);
		AForm* makeForm(std::string const &name, std::string const &target) const;
	
};

#endif