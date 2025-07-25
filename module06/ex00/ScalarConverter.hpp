/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:55:00 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 11:57:33 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_H
# define SCALAR_H

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter& operator=(ScalarConverter const &other);
		
	public:
		static void convert(std::string const &argv);
};

#endif