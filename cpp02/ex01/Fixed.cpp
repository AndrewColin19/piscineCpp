/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:00:52 by acolin            #+#    #+#             */
/*   Updated: 2022/03/14 15:02:15 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = val << this->bits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(val * (1 << this->bits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const 
{
	return ((int) this->value >> this->bits);
}

float Fixed::toFloat(void) const 
{
	return ((float) this->value / (1 << this->bits));
}

void Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy Assignment operator called" << std::endl;
	this->setRawBits(copy.getRawBits());
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &x)
{
	stream << x.toFloat();
	return(stream);
}