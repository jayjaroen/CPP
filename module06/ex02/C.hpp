/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:25:13 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 11:31:28 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
# define C_H

# include "Base.hpp"

class C : public Base
{
	private:
		~C();
		C(C const &other);
		C& operator=(C const &other);
	
	public:
		C();
};

#endif