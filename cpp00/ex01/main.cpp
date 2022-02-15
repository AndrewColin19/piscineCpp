/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:02:01 by acolin            #+#    #+#             */
/*   Updated: 2022/02/15 11:12:17 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook rep = PhoneBook();
	std::string str;

	while(!std::cin.eof())
	{
		std::cin >> str;
		if (str == "ADD")
			rep.add();
		else if (str == "SEARCH")
			rep.search();
		else if (str == "EXIT")
			break ;
	}
}