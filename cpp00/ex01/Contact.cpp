/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:06:54 by acolin            #+#    #+#             */
/*   Updated: 2022/02/15 11:43:37 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
	: fname(""), lname(""), nickname(""), phoneNumber(""), dsecret("")
{
}

Contact::~Contact()
{
}

void Contact::setfname(std::string fname)
{
	this->fname = fname;
}

void Contact::setlname(std::string lname)
{
	this->lname = lname;
}

void Contact::setnickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setphoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setdsecret(std::string dsecret)
{
	this->dsecret = dsecret;
}

std::string Contact::getfname(void) const
{
	return (this->fname);
}

std::string Contact::getlname(void) const
{
	return (this->lname);
}

std::string Contact::getnickname(void) const
{
	return (this->nickname);
}

std::string Contact::getphoneNumber(void) const
{
	return (this->phoneNumber);
}

std::string Contact::getdsecret(void) const
{
	return (this->dsecret);
}

std::string Contact::get_ten_c(std::string str) const
{
	std::string s;

	if (str.size() == 10)
		return (str);
	else if (str.size() < 9) 
	{
		for (int i = 0; i < 10 - str.size();i++)
			s.push_back(' ');
		s += str;	
	}
	else
	{
		for (int i = 0; i < 9; i++)
			s.push_back(str.at(i));
		s.push_back('.');
	}
	return (s);
}

std::string Contact::getInfo(void) const
{
	std::string s;

	s += this->get_ten_c(this->getfname());
	s.push_back('|');
	s += this->get_ten_c(this->getlname());
	s.push_back('|');
	s += this->get_ten_c(this->getnickname());
	s.push_back('|');
	return (s);
}
