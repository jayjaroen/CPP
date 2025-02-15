#include <fstream>
#include <iostream>


int main(int argc, char **argv)
{
	std::ofstream myFile("text.txt", std::ios::app);
	std::string line;

	if (myFile.is_open())
	{
		std::cout << "File is opened..." << std::endl;
		myFile << "Appeding to the file...." << std::endl;
		myFile.close();
		std::cout << "File is closed...." << std::endl;
	}
	else
		std::cout << "Error opening file!" << std::endl;
	
	//creating fostream & ifstream class
	std::ifstream init_file{"text.txt"};
	std::ofstream out_file{"copy.txt"};

	if (init_file && out_file)
	{
		while (std::getline(init_file, line))
		{
			std::cout << line << std::endl;
			out_file << line << "\n";
		}
		std::cout << "Copy done!" << std::endl;
	}
	else
		std::cout << "Error with the file" << std::endl;

	init_file.close();
	out_file.close();
	return (0);
}