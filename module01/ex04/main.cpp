/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:18:36 by jjaroens          #+#    #+#             */
/*   Updated: 2025/02/20 16:29:02 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> //input output file stream class
#include <string>
#include <stdlib.h>

//creating fostream & ifstream class
// different from std::string (ifstream, ofstream)

void	copyAndReplace(const std::string &file, const std::string &original, \
const std::string &replace, const std::string &copyFile)
{
	std::ifstream inFile(file.c_str(), std::ios::in); // default also in "<< stream"
	if (!inFile.is_open())
	{
		std::cerr << "Error Opening inFile" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream outFile(copyFile.c_str(), std::ios::out);
	if (!outFile.is_open())
	{
		std::cerr << "Error Opening outFile" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string line;
	std::size_t found;
	while (getline(inFile, line))
	{
		while (1)
		{
			found = line.find(original); // if not find == -1
			if (found == std::string::npos) // not found == npos ==-1
			{
				outFile << line;
				break;
			}
			outFile << line.substr(0, found) << replace; //write to file until the find word && replace
			line = line.substr(found + original.length()); // substr the index to the end
		}
		outFile << std::endl;
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
	copyAndReplace(file, original, replace, copyFile);
	return (0);
}
