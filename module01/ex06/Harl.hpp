/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 21:56:02 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/19 22:33:42 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>
# include <algorithm>

class Harl
{
    private:
        void	debug(void);
        void	info(void);
		void	warning(void);
		void	error(void);
		
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif