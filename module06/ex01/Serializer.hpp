/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:06:02 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/18 22:07:01 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <cstdint> // uintptr_t
# include <iostream>
# include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(Serializer const &other);
		Serializer& operator=(Serializer const &other);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif