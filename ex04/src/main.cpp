/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:56:28 by amakela           #+#    #+#             */
/*   Updated: 2024/08/09 17:16:22 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Error: program takes 4 arguments" << std::endl;
		return (1);
	}
	std::string	infile = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream	in;
	std::ofstream	out;
	
	in.open(infile);
	if (!in.is_open()) {
		std::cout << "Error: opening input file failed" << std::endl;
		return (1);
	}
	out.open(infile + ".replace");
	if (!out.is_open()) {
		std::cout << "Error: creating output file failed" << std::endl;
		return (1);
	}
	
	std::string buffer;
	std::size_t	pos = 0;
	while (getline(in, buffer)) {
		while ((pos = buffer.find(s1, pos)) != std::string::npos) {
			buffer.erase(pos, s1.length());
			buffer.insert(pos, s2);
			pos += s2.length();
		}
		pos = 0;
		out << buffer << std::endl;
	}
	in.close();
	out.close();
	return (0);
}
