/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:52:17 by acolin            #+#    #+#             */
/*   Updated: 2022/03/09 15:15:29 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

int	ft_error(std::string er, std::string arg)
{
	if (!arg.empty())
		std::cout << er << arg << std::endl;
	else
		std::cout << er << std::endl;
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (ft_error("Usage: ./sed <filename> <s1> <s2>", ""));

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string filename = argv[1];
	std::ifstream fd(filename);
	std::stringstream buf;
	std::string content;

	if (!fd.good())
		return (ft_error("Error: could not open file ", argv[1]));
	if (s1.empty())
		return (ft_error("Error: S1 must be not-empty", ""));
	
	buf << fd.rdbuf();
	content = buf.str();

	size_t m;
	while ((m = content.find(s1)) != std::string::npos)
		content.erase(m, s1.length()).insert(m, s2);

	std::ofstream out(filename + ".replace");

	if (!out.good())
		return (ft_error("Error: could not open file", filename + ".replace"));
	out << content;
	out.close();
	return (1);
}