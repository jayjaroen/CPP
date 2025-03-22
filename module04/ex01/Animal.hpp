/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:06:40 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 16:38:06 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal(); // virtual function
		Animal(Animal const &other);
		Animal& operator=(Animal const &other);// Assign cat or dog

		std::string getType() const;
		void setType(std::string name);
		virtual void makeSound() const;
};

#endif