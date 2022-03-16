/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:26:47 by acolin            #+#    #+#             */
/*   Updated: 2022/03/15 15:37:29 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hp;
		int _ep;
		int _ad;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap(void);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		std::string	getName(void);
		int			getHp(void);
		int			getEp(void);
		int			getAd(void);
		void		setName(std::string name);
		void		setHp(int hp);
		void		setEp(int ep);
		void		setAd(int ad);
		ClapTrap	&operator=(const ClapTrap &copy);
};