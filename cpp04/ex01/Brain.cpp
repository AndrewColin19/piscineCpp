/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoezard <acoezard@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:48:20 by acoezard          #+#    #+#             */
/*   Updated: 2021/12/14 12:27:35 by acoezard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < IDEAS_COUNT; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "Brain assignation operator called" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
