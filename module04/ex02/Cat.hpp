/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:56:49 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/21 22:51:44 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"


class Cat: public AAnimal
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