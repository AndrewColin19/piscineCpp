/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:27:02 by acolin            #+#    #+#             */
/*   Updated: 2022/03/15 14:29:49 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	loan("loan");
	ClapTrap	marie("marie");

	loan.setAd(2);
	loan.attack(marie.getName());
	marie.takeDamage(loan.getAd());
	marie.beRepaired(10);
	marie.takeDamage(loan.getAd());
	marie.beRepaired(10);
	return (0);
}
