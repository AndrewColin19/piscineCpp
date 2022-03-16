/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:27:02 by acolin            #+#    #+#             */
/*   Updated: 2022/03/15 15:47:21 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap	loan("loan");
	FragTrap	marie("marie");

	loan.attack(marie.getName());
	marie.takeDamage(loan.getAd());
	marie.beRepaired(10);
	marie.takeDamage(loan.getAd());
	marie.beRepaired(10);
	loan.guardGate();
	marie.hightFivesGuys();
	return (0);
}
