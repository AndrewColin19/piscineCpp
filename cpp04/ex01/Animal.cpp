/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:38:55 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 13:51:42 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &copy)
{
	this->_type = copy._type;
	std::cout << "Animal assignation operator called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{ std::cout << "Animal destructor called" << std::endl; }

void	Animal::makeSound(void)
{ std::cout << "**Animal does a weird default sound**" << std::endl; }

std::string Animal::getType(void)
{ return this->_type; }