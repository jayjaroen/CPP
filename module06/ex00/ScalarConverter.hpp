/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:55:00 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/27 14:23:12 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_H
# define SCALAR_H

# include <iostream>
# include <string>
# include <iomanip> //std::fixed std::setprecision
# include <limits>
# include <cstdlib>

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