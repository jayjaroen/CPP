/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:06:40 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/21 22:53:31 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;
		// Brain *brain;
	
	public:
		AAnimal();
		AAnimal(std::string type);
		virtual ~AAnimal(); // virtual function
		AAnimal(AAnimal const &other);
		AAnimal& operator=(AAnimal const &other);// Assign cat or dog

		std::string getType() const;
		void setType(std::string name);
		virtual void makeSound() const = 0;
		virtual Brain* getBrain() const = 0;
};

#endif