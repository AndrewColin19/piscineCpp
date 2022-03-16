/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:14:31 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:14:31 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{  }

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	*this = copy;
}

Cure&	Cure::operator=(const Cure &copy)
{
	this->setType(copy.getType());
	return (*this);
}

Cure::~Cure(void)
{ }

Cure*	Cure::clone(void) const
{ return (new Cure(*this)); }

void	Cure::use(ICharacter& target)
{ std::cout << "* heals " << target.getName() << "'s wounds *\n"; }
