/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:18:36 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/19 21:26:00 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> //input output file stream class
#include <string.h>

void	copyAndReplace(const std::string &file, const std::string &original, \
const std::string &replace, const std::string &copyFile)
{
	//creating fostream & ifstream class
	// different from std::string (ifstream, ofstream)
	std::ifstream inFile(file.c_str());
	std::ofstream outFile(copyFile.c_str());
	std::string buffer;
	char c;
	
	if (!inFile.is_open() || !outFile.is_open())
	{
		std::cout << "Error Opening File" << std::endl;
		return;
	}
	while (inFile.get(c))
	{
		if (std::isspace(c) || std::ispunct(c)) //ispunct?
		{
			if (buffer == original)
				outFile << replace;
			else
				outFile << buffer;
			outFile << c;
			buffer.clear(); //reset line
		}
		else
			buffer += c; //add character to buffer
	}
	if (!buffer.empty())
	{
		if (buffer == original)
			outFile << replace;
		else
			outFile << buffer;
	}
	inFile.close();
	outFile.close();
}

int main(int argc, char **argv)
{
	if (argc !=  4 )
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	const std::string file = argv[1];
	const std::string original = argv[2];
	const std::string replace = argv[3];
	const std::string copyFile = file + ".replace";
	// std::cout << "am here !" << std::endl;
	copyAndReplace(file, original, replace, copyFile);
	return (0);
}