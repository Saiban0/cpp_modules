/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:15:10 by bchedru           #+#    #+#             */
/*   Updated: 2025/05/29 16:28:45 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_replace.hpp"

std::string	search_and_replace(std::string currentLine, std::string strToFind,
		std::string replaceStr)
{
	size_t	findLen = strToFind.length();
	for (size_t i = 0; i < currentLine.length(); i++)
	{
		if (currentLine[i] == strToFind[0] && !currentLine.compare(i, findLen, strToFind))
		{
			currentLine.erase(i, findLen);
			currentLine.insert(i, replaceStr);
			i += findLen;
		}
	}
	return (currentLine);
}

bool	ft_replace(std::fstream& inputFile, std::string fileName,
		std::string strToFind, std::string replaceStr)
{
	std::string		outputName = fileName + ".replace";
	std::string		currentLine = "";
	std::fstream	outputFile;

	outputFile.open(outputName.c_str(), std::fstream::out | std::fstream::trunc);
	if (!outputFile)
	{
		std::cout << "Error opening/creating file : " << outputName << std::endl;
		return (false);
	}
	while (std::getline(inputFile, currentLine))
	{
		outputFile << std::endl;
		currentLine = search_and_replace(currentLine, strToFind, replaceStr);
		outputFile << currentLine;
	}
	return (true);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "try ./ex04 <filename> <string to find> <string to replace>" << std::endl;
		return (1);
	}
	else
	{
		std::fstream	inputFile;
		inputFile.open(argv[1], std::fstream::in);
		if (!inputFile)
		{
			std::cout << "Error opening file : " << argv[1] << std::endl;
			return (1);
		}
		if (!ft_replace(inputFile, argv[1], argv[2], argv[3]))
			return(1);
		inputFile.close();
	}
	return (0);
}
