/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:42:52 by acolin            #+#    #+#             */
/*   Updated: 2022/03/14 13:38:11 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {}

Karen::~Karen(void) {}

void Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" 
			<< std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger ! If you did, I wouldn’t be asking for more !"
		<< std::endl;
}
void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
		<< std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	int l = -1;
	void (Karen::*complain[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string complainLevel[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == complainLevel[i])
			l = i;
	}
	switch (l)
	{
		case 0:
			(this->*complain[0])();
			(this->*complain[1])();
			(this->*complain[2])();
			(this->*complain[3])();
			break;
		case 1:
			(this->*complain[1])();
			(this->*complain[2])();
			(this->*complain[3])();
			break;
		case 2:
			(this->*complain[2])();
			(this->*complain[3])();
			break;
		case 3:
			(this->*complain[3])();
			break;
		default:
			break;
	}
}