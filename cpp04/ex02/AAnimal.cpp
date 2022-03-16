/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:38:55 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:03:44 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->_type = "AAnimal";
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal &copy)
{
	this->_type = copy._type;
	std::cout << "AAnimal assignation operator called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal(void)
{ std::cout << "AAnimal destructor called" << std::endl; }

void	AAnimal::makeSound(void)
{ std::cout << "**AAnimal does a weird default sound**" << std::endl; }

std::string AAnimal::getType(void)
{ return this->_type; }