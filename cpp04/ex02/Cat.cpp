/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:42:15 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 15:02:30 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	this->_brain = new Brain();
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal()
{
	*this = copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &	Cat::operator=(const Cat &copy)
{
	this->_type = copy._type;
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void)
{ std::cout << "**Cat does a " << this->_type << " sound**" << std::endl; }

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}
