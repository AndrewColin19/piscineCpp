/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:30:01 by acolin            #+#    #+#             */
/*   Updated: 2022/03/07 19:49:40 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : last(-1), nb(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
	Contact c = Contact();
	std::string str;
	if (std::cin.eof()) return ;
	std::cout << "first name : "; 
	std::cin >> str;
	c.setfname(str);
	if (std::cin.eof()) return ;
	std::cout << "last name : ";
	std::cin >> str;
	c.setlname(str);
	if (std::cin.eof()) return ;
	std::cout << "nick name : ";
	std::cin >> str;
	c.setnickname(str);
	if (std::cin.eof()) return ;
	std::cout << "phone number : ";
	std::cin >> str;
	c.setphoneNumber(str);
	if (std::cin.eof()) return ;
	std::cout << "darkest secret : ";
	std::cin >> str;
	c.setdsecret(str);
	if (last < 7)
	{
		this->nb++;
		this->last++;
	}
	else
		this->last = 0;
	this->tabContact[last] = c;
	std::cout << "contact add\n";
}

void PhoneBook::search()
{
	int size;
	int	index;
	std::string str;

	std::cout << "   index  |   name   | lastname | nickname |\n";
	if (this->last > -1)
	{
		for (int i = 0; i < nb; i++)
			std::cout << std::setw(10) << std::setfill(' ') << i + 1 << "|" << tabContact[i].getInfo() << "\n";
	}
	std::cout << "index contact : ";
	std::cin >> str;
	index = std::atoi(str.c_str());
	if (index >= 1 && index <= 8)
	{
		std::cout << std::endl;
		tabContact[index - 1].aff();
	}
	else
		std::cout << "index Ivalide\n";
}
