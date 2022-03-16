/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:45:50 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 14:45:50 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define	IDEAS_COUNT	100

class Brain
{
	protected:
		std::string	_ideas[IDEAS_COUNT];
	public:
		Brain(void);
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain(void);
};
