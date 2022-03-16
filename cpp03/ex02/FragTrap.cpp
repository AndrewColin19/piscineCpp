/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:07:44 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 13:07:33 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "bob";
	this->_ep = 100;
	this->_ad = 30;
	this->_hp = 100;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_ep = 100;
	this->_ad = 30;
	this->_hp = 100;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {*this = copy;}

FragTrap::~FragTrap(void) 
{std::cout << "FragTrap destructor called" << std::endl;}

FragTrap	&FragTrap::operator=(const FragTrap &copy) 
{
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_ad = copy._ad;
	this->_ep = copy._ep;
	return (*this);
}

void FragTrap::hightFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name;
	std::cout << " request a high fives !" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_ep > 0)
	{
		std::cout << "FragTrap " << this->getName();
		std::cout << " attack " << target;
		std::cout << " causing " << this->getAd();
		std::cout << " point of damage :(" << std::endl;
		this->_ep--;
	}
	else if (this->_ep < 0)
	{
		std::cout << "FragTrap " << this->getName();
		std::cout << " can't attack no energie left !" << std::endl;
	}
}