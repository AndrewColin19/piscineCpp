/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:15:11 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:15:11 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{ }

Ice::Ice(const Ice &copy) : AMateria("ice")
{ *this = copy; }

Ice&	Ice::operator=(const Ice &copy)
{
	this->setType(copy.getType());
	return (*this);
}

Ice::~Ice(void)
{ }

Ice*	Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{ std::cout << "* shoots an ice bolt at " << target.getName() << " *\n"; }
