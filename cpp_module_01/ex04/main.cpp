/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 01:13:36 by alebarbo          #+#    #+#             */
/*   Updated: 2026/03/12 23:53:32 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: invalid number of arguments" << std::endl;
		return (1);
	}

	std::string		infileName = argv[1];
	std::fstream	infile;
	infile.open(infileName.c_str(), std::ios::in);
	if (!infile.is_open())
	{
		std::cerr << "Error: could not open " << infileName << std::endl;
		return (1);
	}

	std::string		outfileName(infileName + ".replace");
	std::fstream	outfile;
	outfile.open(outfileName.c_str(), std::ios::out);
	if (!outfile.is_open())
	{
		std::cerr << "Error: could not open " << outfileName << std::endl;
		return (1);
	}

	std::string		infileContent((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		temp;
	std::size_t		position = infileContent.find(s1, 0);
	while (position != std::string::npos)
	{
		temp = infileContent.substr(0, position);
		temp += s2;
		temp += infileContent.substr(position + s1.length());
		infileContent = temp;
		position += s2.length();
		position = infileContent.find(s1, position);
	}
	outfile << infileContent;
	infile.close();
	outfile.close();
	return (0);
}