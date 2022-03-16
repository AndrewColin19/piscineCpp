/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:34:40 by acolin            #+#    #+#             */
/*   Updated: 2022/03/16 14:59:22 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal(void);
		AAnimal(const AAnimal &copy);
		AAnimal&	operator=(const AAnimal &copy);
		virtual ~AAnimal(void);

		virtual void makeSound(void) = 0;

		std::string getType(void);
};