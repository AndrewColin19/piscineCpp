/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:00:47 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 14:00:47 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal&	operator=(const WrongAnimal &copy);
		~WrongAnimal(void);

		std::string	getType(void) const;
		void	makeSound(void) const;
};
