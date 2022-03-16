/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:00:31 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 14:00:31 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "Wrong Animal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->_type = copy._type;
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{ std::cout << "WrongAnimal destructor called" << std::endl; }

void	WrongAnimal::makeSound(void) const
{ std::cout << "**WrongAnimal does a weird sound**" << std::endl; }

std::string	WrongAnimal::getType(void) const
{ return (this->_type); }
