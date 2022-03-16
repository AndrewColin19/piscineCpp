/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:10:42 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 13:08:20 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = "bob_clap_name";
	this->_name = "bob";
	this->_ep = 50;
	this->_ad = 30;
	this->_hp = 100;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_ep = 50;
	this->_ad = 30;
	this->_hp = 100;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) {*this = copy;}

DiamondTrap::~DiamondTrap(void) 
{std::cout << "DiamondTrap destructor called" << std::endl;}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy) 
{
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_ad = copy._ad;
	this->_ep = copy._ep;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->_name;
	std::cout << " ClapTrap " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}