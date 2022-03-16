/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:10:01 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:10:01 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(const std::string &type)
{
	this->setType(type);
}

AMateria::AMateria(const AMateria &copy)
{ *this = copy; }

AMateria&	AMateria::operator=(const AMateria &copy)
{
	this->setType(copy.getType());
	return (*this);
}

AMateria::~AMateria(void) {}

void	AMateria::use(ICharacter &target)
{
	(void) target;
}

void	AMateria::setType(std::string type)
{ this->_type = type; }

const std::string&	AMateria::getType(void) const
{ return (this->_type); }
