/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:06:54 by acolin            #+#    #+#             */
/*   Updated: 2022/02/09 17:10:50 by acolin           ###   ########.fr       */
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

std::string Contact::getInfo(void) const
{
	
}
