/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:10:32 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 21:57:01 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called...Loading ideas.." << std::endl;
    int i = 0;
    while (i < 100)
    {
        _ideas[i] = _ideaCreator();
		// std::cout << "No. " << i << " Idea is " << _ideas[i] << std::endl;
        i++;
    }
}

Brain::~Brain()
{
    std::cout << "Brain is destroyed" << std::endl;
}

Brain::Brain(Brain const &other)
{
    *this = other;
}

Brain& Brain::operator=(Brain const &other)
{
    if (this != &other)
    {
        int i = 0;
        while (i < 100)
        {
            _ideas[i] = other._ideas[i];
            i++;
        }
    }
    return *this;
}

std::string Brain::_ideaCreator() const
{
    const char *ideas[] = {"Eat", "Sleep", "Travel", "Work",
                            "Play", "Workout", "Ski", "Sing",
                            "Moody", "Getting Angry"};
	int ideaCount = sizeof(ideas) / sizeof(ideas[0]);
    int random = std::rand() % ideaCount;
	return ideas[random];
}

std::string Brain::getIdea() const
{
	int ideaCount = sizeof(_ideas) / sizeof(_ideas[0]); // get from an array of ideas
    int random = std::rand() % ideaCount;
	// std::cout << "Random idea is: " << _ideas[random] << std::endl;
	return _ideas[random];
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
       return "Invalid index number";
	return _ideas[index];
}

void Brain::setIdea(int index, std::string idea)
{
    _ideas[index] = idea; // replace old idea with new idea
}
