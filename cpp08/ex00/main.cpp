/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:00:25 by acolin            #+#    #+#             */
/*   Updated: 2022/03/23 17:00:27 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"

int main(void)
{
	int ints[10] = {5, 6, 3, 2, 4, 1, 8, 7, 9, 0};
	
	std::vector<int> values;
	values.assign(ints, ints + 10);	
	
	try {
		std::cout << "Pos: " << easyfind(values, 8) << "\n";	
	} catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try {
		easyfind(values, 72);	
	} catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}