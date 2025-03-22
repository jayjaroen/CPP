/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:56:49 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 16:39:01 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"


class Cat: public Animal
{
    // private string (type) is derived from Animal
	private:
		Brain *_brain;

	public:
        Cat();
        ~Cat();
        Cat(Cat const &other);
        Cat& operator=(Cat const &other);
        
        void makeSound() const;
        Brain* getBrain() const;
};

#endif