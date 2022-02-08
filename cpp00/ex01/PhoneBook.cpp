/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:30:01 by acolin            #+#    #+#             */
/*   Updated: 2022/02/08 15:01:49 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : last(-1)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
	Contact c = Contact();
	std::string str;

	while (c.getfname() == "")
	{
		std::cout << "first name : \n"; 
		std::cin >> str;
		c.setfname(str);
	}
	while (c.getlname() == "")
	{
		std::cout << "last name : \n";
		std::cin >> str;
		c.setlname(str);
	}
	while (c.getnickname() == "")
	{
		std::cout << "nick name : \n";
		std::cin >> str;
		c.setnickname(str);
	}
	while (c.getphoneNumber() == "")
	{
		std::cout << "phone number :\n";
		std::cin >> str;
		c.setphoneNumber(str);
	}
	while (c.getdsecret() == "")
	{
		std::cout << "darkest secret : \n";
		std::cin >> str;
		c.setdsecret(str);
	}
	if (last < 8)
		this->last++;
	this->tabContact[last] = c;
	std::cout << "contact add\n";
}

void PhoneBook::search()
{
	std::cout << "search\n";
}
