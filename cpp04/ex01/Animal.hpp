/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:34:40 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 13:50:58 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal&	operator=(const Animal &copy);
		virtual ~Animal(void);

		virtual void makeSound(void);

		std::string getType(void);
};