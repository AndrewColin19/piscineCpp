/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:47:15 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:02:24 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	this->_brain = new Brain();
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal()
{
	*this = copy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &copy)
{
	this->_type = copy._type;
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void)
{ std::cout << "**Dog does a " << this->_type << " sound**" << std::endl; }

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}