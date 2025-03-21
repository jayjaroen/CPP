/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:56:37 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/21 18:32:50 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <cstdlib> //for rand()
# include <ctime>

class Brain
{
    private:
		std::string _ideas[100];
		std::string _ideaCreator() const;
	
	public:
		Brain();
		~Brain();
		Brain(Brain const &other);
		Brain& operator=(Brain const &other);
		
		std::string getRandomIdea() const;
		std::string getRandomIdea(int index) const;
		void setIdea(int index, std::string idea);
};

#endif