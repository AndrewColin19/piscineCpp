/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:49:33 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 13:49:33 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

void	showChar(double value)
{
	std::cout << "char: ";

	int	c = static_cast<int>(value);

	if (c < 0 || c > 127)
		std::cout << "impossible";
	else if (c < 32 || c > 126)
		std::cout << "Non displayable";
	else
		std::cout << "'" << (char) c << "'";
	std::cout << std::endl;
}

void	showInt(double value)
{
	std::cout << "int: ";

	if (std::isinf(value) || std::isnan(value))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void	showFloat(double value)
{
	std::cout << "float: ";
	std::cout << static_cast<float>(value);
	if (static_cast<int>(value) == value)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;
}

void	showDouble(double value)
{
	std::cout << "double: ";
	std::cout << value;
	if (static_cast<int>(value) == value)
		std::cout << ".0";
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		double value = std::strtod(av[1], NULL); 

		showChar(value);
		showInt(value);
		showFloat(value);
		showDouble(value);
		return (0);
	}

	std::cout << "An argument is missing." << std::endl;
	return (1);
}

