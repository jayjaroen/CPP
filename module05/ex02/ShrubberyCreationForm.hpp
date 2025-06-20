/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:14:25 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/18 15:21:56 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUB_H
# define SHRUB_H

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
		std::string	_target;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &other);
		std::string getTarget() const;

		void execute(Bureaucrat const &executor) const;
};
# endif