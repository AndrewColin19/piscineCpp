/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:01:25 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 14:01:25 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	*this = copy;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &copy)
{
	this->_type = copy._type;
	std::cout << "WrongCat assignation operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{ std::cout << "WrongCat destructor called" << std::endl; }

void	WrongCat::makeSound(void) const
{ std::cout << "**WrongCat does " << this->_type << " sound**" << std::endl; }
