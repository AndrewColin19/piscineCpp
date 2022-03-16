/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:07:44 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 13:10:36 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "bob";
	this->_ep = 50;
	this->_ad = 20;
	this->_hp = 100;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_ep = 50;
	this->_ad = 20;
	this->_hp = 100;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {*this = copy;}

ScavTrap::~ScavTrap(void) {}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy) 
{
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_ad = copy._ad;
	this->_ep = copy._ep;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name;
	std::cout << " entering to Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_ep > 0)
	{
		std::cout << "ScavTrap " << this->getName();
		std::cout << " attack " << target;
		std::cout << " causing " << this->getAd();
		std::cout << " point of damage :(" << std::endl;
		this->_ep--;
	}
	else if (this->_ep < 0)
	{
		std::cout << "ScavTrap " << this->getName();
		std::cout << " can't attack no energie left !" << std::endl;
	}
}