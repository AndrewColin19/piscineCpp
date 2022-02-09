/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:30:01 by acolin            #+#    #+#             */
/*   Updated: 2022/02/09 17:07:12 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : last(-1), maxsize(10)
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
		std::cout << "first name : "; 
		std::cin >> str;
		c.setfname(str);
	}
	while (c.getlname() == "")
	{
		std::cout << "last name : ";
		std::cin >> str;
		c.setlname(str);
	}
	while (c.getnickname() == "")
	{
		std::cout << "nick name : ";
		std::cin >> str;
		c.setnickname(str);
	}
	while (c.getphoneNumber() == "")
	{
		std::cout << "phone number : ";
		std::cin >> str;
		c.setphoneNumber(str);
	}
	while (c.getdsecret() == "")
	{
		std::cout << "darkest secret : ";
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
	int size;

	std::cout << "   index  |   mame   | lastname | nickname |\n";
	if (this->last > -1)
	{
		for (int i = 0; i < last; i++)
		{
			size = this->tabContact[i].getfname().size();
			//std::cout << "";
		}
	}
}
