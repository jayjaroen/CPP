/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:16:11 by jjaroens          #+#    #+#             */
/*   Updated: 2025/06/27 22:28:45 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBO_H
# define ROBO_H

# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string _target;
		RobotomyRequestForm();
		
	public:
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &other);
		
		std::string getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;
};


#endif