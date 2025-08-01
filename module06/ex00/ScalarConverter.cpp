/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:00:20 by jjaroens          #+#    #+#             */
/*   Updated: 2025/08/01 20:57:33 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &other)
{
	(void)other;
	return *this;
}

static void error()
{
	std::cerr << "Entering error" << std::endl;
	std::cerr << "char: error" << std::endl;
	std::cerr << "int: error"  << std::endl;
	std::cerr << "float: error" << std::endl;
	std::cerr << "double: error" << std::endl;
}

static void intConverter(std::string const &argv)
{
	// std::cout << "Entering intConverter" << std::endl;
	int i = atoi(argv.c_str());
	
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) <<std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

static void doubleConverter(std::string const &argv)
{
	// std::cout << "Entering doubleConverter" << std::endl;
	double i = atof(argv.c_str());
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << i << std::endl;
	
}

static void floatConverter(std::string const &argv)
{
	// std::cout << "Entering floatConverter" << std::endl;
	float i = atof(argv.c_str());
	
	if (i < 0 || i > 127)
		std::cout << "char: impossible" << std::endl;
	else if (i < 32 || i == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << i << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

bool checkFormat(std::string const &argv)
{
	// std::cout << "Entering checkFormat function" << std::endl;
	long unsigned int i = 0;
	bool dot = false;
	// std::cout << "checking length " << argv.length() - 1 << std::endl;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (i < argv.length() - 1)
	{
		// std::cout << "inside loop i " << i << std::endl;
		if (std::isdigit(argv[i]))
			i++;
		else if (argv[i] == '.' && !dot)
		{
			dot = true;
			i++;
		}
		else if (argv[i] == '.' && dot)
			break;
		else
			break;
	}
	// std::cout << "the i pos " << i << std::endl;
	if (argv[i] == '.' || i != argv.length() - 1)
		return (false);
	else
		return (true);
}

static void nanConverter()
{
	// std::cout << "Entering nanConverter" << std::endl;
	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	// std::cout << "float: " << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;// forbidden
	// std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
}

static void maxInfConverter()
{
	// std::cout << "Entering maxInfConverter" << std::endl;	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: inff" << std::endl;
	std::cout << "double: inf" << std::endl;
	// std::cout << "float: " << std::numeric_limits<float>::infinity() << "f"  << std::endl; // forbidden
	// std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
}

static void minInfConverter()
{
	// std::cout << "Entering minInfConverter" << std::endl;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inf" << std::endl;
	// std::cout << "float: " << -std::numeric_limits<float>::infinity() << "f" << std::endl;
	// std::cout << "double: " << -std::numeric_limits<double>::infinity() << std::endl;
}

static void charConverter(std::string const &argv)
{
	// std::cout << "Entering char converter" << std::endl;	
	std::cout << "char: '" << argv[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(argv[0]) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(argv[0]) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(argv[0]) << std::endl;
}

static void charPseudoHandler(std::string const &argv)
{
	// std::cout << "Entering Char Pseudo Handler" << std::endl;	
	if (argv.length() == 1)
		charConverter(argv);
	else if (argv == "-inf" || argv == "-inff")
		minInfConverter();
	else if (argv == "+inf" || argv == "+inff")
		maxInfConverter();
	else if (argv == "nan" || argv == "nanf")
		nanConverter();
	else
		error();
}

bool isAllDigit(std::string const &argv)
{
	for (std::size_t i = 0; i < argv.length(); i++)
	{
		if (!std::isdigit(argv[i]))
			return (false);
	}
	return (true);		
}

void nonAlphaConverter(std::string const &argv)
{
	// std::cout << "Entering print char converter" << std::endl;
	
	std::cout << "char: '" << argv[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(argv[0]) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(argv[0]) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(argv[0]) << std::endl;
}

void ScalarConverter::convert(std::string const &argv)
{
	if (std::isalpha(argv[0]) || argv == "-inf" || argv == "-inff" || argv == "+inf"
		|| argv == "+inff" || argv == "nan" || argv == "nanf" )
		charPseudoHandler(argv);
	else if (argv[argv.length() - 1] == 'f')
		checkFormat(argv) ? floatConverter(argv) : error();
	else if (argv.find('.') != std::string::npos)
		checkFormat(argv) ? doubleConverter(argv) : error();
	else if (isAllDigit(argv))
		intConverter(argv);
	else if (std::isprint(argv[0]))
		nonAlphaConverter(argv);
	else
		error();
}