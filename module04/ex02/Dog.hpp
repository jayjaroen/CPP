/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:57:35 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/21 22:52:22 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "AAnimal.hpp"

class Dog: public AAnimal
{
    private:
        Brain *_brain;
        
    public:
        Dog();
        ~Dog();
        Dog(Dog const &other);
        Dog& operator=(Dog const &other);// &function
        
        void makeSound() const;
        Brain* getBrain() const;
};

#endif