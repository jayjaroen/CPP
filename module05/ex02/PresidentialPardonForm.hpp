/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:07:14 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/27 22:26:06 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT_H
# define PRESIDENT_H

# include "AForm.hpp"

class PresidentPardonForm: public AForm
{
    private:
		std::string		_target;
		PresidentPardonForm();
	
	public:
		PresidentPardonForm(std::string const &target);
		~PresidentPardonForm();
		PresidentPardonForm(PresidentPardonForm const &other);
		PresidentPardonForm& operator=(PresidentPardonForm const &other);

		std::string getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;
};


#endif