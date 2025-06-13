/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:20:43 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/13 12:03:27 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void	replace(std::ifstream &inFile, std::ofstream &outFile,
		const std::string &s1, const std::string &s2)
{
	size_t	pos;
	size_t	found;
	std::string line;

	while (std::getline(inFile, line))
	{
		std::string result;
		pos = 0;
		while ((found = line.find(s1, pos)) != std::string::npos)
		{
			result.append(line.substr(pos, found - pos));
			result.append(s2);
			pos = found + s1.length();
		}
		result.append(line.substr(pos));
		outFile << result << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << "Error: s1 est vide." << std::endl;
		return (1);
	}
	std::ifstream inFile(filename.c_str());
	if (!inFile)
	{
		std::cerr << "Error: Cannot open input file: " << filename << std::endl;
		return (1);
	}
	if (inFile.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Erreur : le fichier est vide." << std::endl;
		inFile.close();
		return (1);
	}
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile)
	{
		std::cerr << "Error: Cannot create output file: " << filename
			+ ".replace" << std::endl;
		inFile.close();
		return (1);
	}
	replace(inFile, outFile, s1, s2);
	inFile.close();
	outFile.close();
	return (0);
}
