/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:18:47 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 11:30:24 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H

# include "Base.hpp"

class A : public Base
{
    private:
		~A();
		A(A const &other);
		A& operator=(A const &other);
	
	public:
		A();
};

#endif