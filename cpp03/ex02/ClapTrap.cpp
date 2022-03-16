/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:33:56 by acolin            #+#    #+#             */
/*   Updated: 2022/03/15 15:44:21 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("bob"), _ad(0), _ep(10), _hp(10)
{std::cout << "ClapTrap constructor called" << std::endl;}

ClapTrap::ClapTrap(std::string name) : _name(name), _ad(0), _ep(10), _hp(10)
{std::cout << "ClapTrap constructor called" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &c) 
{
	*this = c;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{std::cout << "ClapTrap destructor called" << std::endl;}

void ClapTrap::setName(std::string name) {this->_name = name;}
void ClapTrap::setHp(int hp) {this->_hp = hp;}
void ClapTrap::setEp(int ep) {this->_ep = ep;}
void ClapTrap::setAd(int ad) {this->_ad = ad;}

std::string	ClapTrap::getName(void) {return this->_name;}
int 		ClapTrap::getAd(void) {return this->_ad;}
int 		ClapTrap::getHp(void) {return this->_hp;}
int 		ClapTrap::getEp(void) {return this->_ep;}

void ClapTrap::attack(const std::string &target)
{
	if (this->_ep > 0)
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " attack " << target;
		std::cout << " causing " << this->getAd();
		std::cout << " point of damage :(" << std::endl;
		this->_ep--;
	}
	else if (this->_ep < 0)
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " can't attack no energie left !" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " 0hp left" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " take " << amount;
		std::cout << " points of damage!" << std::endl;
		this->_hp -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep == 0)
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " cannot be repaired (Energy left: 0)." << std::endl;
	}
	else if (this->getEp() < (int) amount)
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " cannot be repaired " << amount;
		std::cout << " (Energy left: " << this->getEp() << ")." << std::endl;
	}
	else
	{
		this->_ep -= amount;
		std::cout << "ClapTrap " << this->getName();
		std::cout << " has been repaired (Energy left: " << this->getEp();
		std::cout << ")." << std::endl;
	}
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) 
{
	this->_name = copy._name;
	this->_hp = copy._hp;
	this->_ep = copy._ep;
	this->_ad = copy._ad;
	return (*this);
}